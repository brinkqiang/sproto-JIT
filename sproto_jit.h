#ifndef _SPROTO_JIT_H_
#define _SPROTO_JIT_H_

struct sproto_type;
int sproto_jit_gen(struct sproto_type* st);
void sproto_jit_free(struct sproto_type* st);

#endif