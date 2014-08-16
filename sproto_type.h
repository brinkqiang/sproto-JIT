#ifndef _SPROTO_TYPE_H_
#define _SPROTO_TYPE_H_

#include "sproto.h"

#define SPROTO_TARRAY 0x80
#define CHUNK_SIZE 1000
#define SIZEOF_LENGTH 4
#define SIZEOF_HEADER 2
#define SIZEOF_FIELD 2

typedef int (*decode_code)(struct sproto_type* st, const void* data, int size, sproto_callback cb, void* ud);
typedef int (*encode_code)(struct sproto_type *st, void * buffer, int size, sproto_callback cb, void *ud);

struct field {
  int tag;
  int type;
  const char * name;
  struct sproto_type * st;
};

struct sproto_type {
  const char * name;
  int n;
  int base;
  int maxn;
  struct field *f;

  #ifdef SPROTO_JIT
  // for jit func
  decode_code decode_func;
  encode_code encode_func;
  #endif
};


#endif

