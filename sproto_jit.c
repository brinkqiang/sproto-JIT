#include "dynasm/dasm_proto.h"
#include "dynasm/dasm_x86.h"

#include <sys/mman.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "sproto_type.h"


//------------------------------------------------------------------
// dynasm  jit generate 
//------------------------------------------------------------------

typedef void(*dynasm_func)(void);  // for test
static void  _new_env(dasm_State **state, const void *actionlist);
static void  _free_env(dasm_State ** state);
static void* _jitcode_new(dasm_State** state);
static void  _jitcode_free(void* code);

struct sproto_jit {
  dasm_State* ds;
  union {
    uint64_t u64;
    uint32_t u32;
  } tmp_u;
} jit_instance;

#define Dst   &(jit_instance.ds)
#include "jit.h"


static void _new_env(dasm_State **state, const void *actionlist){
  dasm_init(state, 1);
  dasm_setupglobal(Dst, labels, SPROTO_CODE__MAX);
  dasm_setup(state, actionlist);
}

static void _free_env(dasm_State ** state){
  dasm_free(state);
}


static void* _jitcode_new(dasm_State** state){
  size_t size;
  assert(dasm_link(state, &size)==DASM_S_OK);
  printf("_jitcode_new size: %zd\n", size);

  char *mem = (char*)mmap(NULL, size + sizeof(size_t),
                          PROT_READ | PROT_WRITE,
                          MAP_ANON | MAP_PRIVATE, -1, 0);
  assert(mem != MAP_FAILED);

  *(size_t*)mem = size;
  void *ret = mem + sizeof(size_t);

  dasm_encode(state, ret);

  assert(mprotect(mem, size, PROT_EXEC | PROT_READ)==0);
  return ret;
}

static void _jitcode_free(void* code){
  void *mem = (char*)code - sizeof(size_t);
  assert(munmap(mem, *(size_t*)mem)==0);
}


//------------------------------------------------------------------
// sproto jit  API
//------------------------------------------------------------------
int sproto_jit_gen(struct sproto_type* st){
  return 0;
}

void sproto_jit_free(struct sproto_type* st){
  if(st->decode_func){
    _jitcode_free(st->decode_func);
    st->decode_func = NULL;
  }

  if(st->encode_func){
    _jitcode_free(st->encode_func);
    st->encode_func = NULL;
  }
}

//  for test
static uint8_t tmp_data[4] = {0};
int main(int argc, char const *argv[]){
  dynasm_func func = _gen_jit("hi jit1\n", tmp_data);
  printf("func = %p\n", func);

  printf("%d %d %d %d\n", tmp_data[0], tmp_data[1], tmp_data[2], tmp_data[3]);
  func();
  printf("%d %d %d %d\n", tmp_data[0], tmp_data[1], tmp_data[2], tmp_data[3]);

  // func = _gen_jit("hi jit2\n");
  // printf("func = %p\n", func);
  // func();

  printf(" call end!!!!\n");
  return 0;
}


