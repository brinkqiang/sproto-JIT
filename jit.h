/*
** This file has been pre-processed with DynASM.
** http://luajit.org/dynasm.html
** DynASM version 1.3.0, DynASM x64 version 1.3.0
** DO NOT EDIT! The original file is in "jitx64.desc".
*/

#line 1 "jitx64.desc"
// the test hello world JIT FOR X64

//|.arch x64
#if DASM_VERSION != 10300
#error "Version mismatch between DynASM and included encoding engine"
#endif
#line 4 "jitx64.desc"
//|.actionlist actions
static const unsigned char actions[2999] = {
  76,137,223,72,49,192,138,135,233,138,167,233,193,224,16,138,135,233,138,167,
  233,73,129,195,239,255,72,131,252,248,1,15,140,245,65,138,187,233,73,252,
  255,195,72,252,255,200,64,128,252,255,235,15,133,244,247,72,137,197,72,131,
  224,3,15,133,245,72,193,252,237,2,72,49,219,73,129,252,235,239,248,2,73,129,
  195,239,76,137,223,72,49,192,138,135,233,138,167,233,193,224,16,138,135,233,
  138,167,233,137,199,72,49,192,137,252,248,131,252,255,0,15,141,244,251,72,
  49,192,72,252,247,208,72,193,224,32,72,9,252,248,248,5,72,137,199,73,185,
  237,237,255,73,137,185,233,76,137,223,72,252,255,195,72,131,252,236,8,87,
  86,82,81,65,80,65,81,104,237,72,137,200,76,137,199,72,190,237,237,73,184,
  237,237,73,185,237,237,72,199,194,237,72,137,217,252,255,208,137,192,72,131,
  196,8,65,89,65,88,89,90,94,95,72,131,196,8,73,137,252,251,72,57,221,15,143,
  244,2,252,233,245,248,1,64,128,252,255,235,15,133,245,72,137,197,72,131,224,
  7,15,133,245,72,193,252,237,3,72,49,219,73,129,252,235,239,248,3,255,73,129,
  195,239,76,137,223,72,49,192,138,135,233,138,167,233,193,224,16,138,135,233,
  138,167,233,73,185,237,237,73,137,129,233,72,129,199,239,72,49,192,138,135,
  233,138,167,233,193,224,16,138,135,233,138,167,233,73,185,237,237,73,137,
  129,233,76,137,223,72,252,255,195,72,131,252,236,8,87,86,82,81,65,80,65,81,
  104,237,72,137,200,76,137,199,72,190,237,237,73,184,237,237,73,185,237,237,
  255,72,199,194,237,72,137,217,252,255,208,137,192,72,131,196,8,65,89,65,88,
  89,90,94,95,72,131,196,8,73,137,252,251,72,57,221,15,143,244,3,252,233,245,
  255,72,137,197,72,49,219,76,137,223,248,4,72,49,192,138,135,233,73,185,237,
  237,73,137,129,233,72,252,255,195,72,131,252,236,8,87,86,82,81,65,80,65,81,
  104,237,72,137,200,76,137,199,72,190,237,237,73,184,237,237,73,185,237,237,
  72,199,194,237,72,137,217,252,255,208,137,192,72,131,196,8,65,89,65,88,89,
  90,94,95,72,131,196,8,72,252,255,199,72,57,221,15,143,244,4,252,233,245,255,
  72,137,197,72,199,195,1,0,0,0,76,137,223,248,5,72,131,252,253,0,15,142,245,
  72,129,252,253,239,15,140,245,72,49,192,138,135,233,138,167,233,193,224,16,
  138,135,233,138,167,233,72,129,199,239,72,129,252,237,239,72,57,232,15,143,
  245,73,137,193,73,137,252,251,72,131,252,236,8,87,86,82,81,65,80,65,81,65,
  81,72,137,200,76,137,199,72,190,237,237,73,184,237,237,77,137,217,72,199,
  194,237,72,137,217,252,255,208,137,192,72,131,196,8,65,89,65,88,89,90,94,
  95,72,131,196,8,131,252,248,0,15,133,245,255,76,41,205,76,1,207,72,252,255,
  195,252,233,244,5,255,249,255,72,129,252,250,239,15,140,245,72,49,192,138,
  134,233,138,166,233,72,129,198,239,129,252,234,239,209,224,57,194,15,140,
  245,73,137,252,247,73,1,199,41,194,209,232,65,137,196,77,49,210,69,49,252,
  237,77,49,210,65,190,252,255,252,255,252,255,252,255,255,248,1,69,57,229,
  15,141,245,65,252,255,198,72,49,252,255,68,137,252,239,209,231,72,1,252,247,
  72,49,192,138,135,233,138,167,233,65,137,194,131,224,1,15,138,244,248,68,
  137,208,209,232,65,1,198,65,252,255,197,252,233,244,1,248,2,65,252,255,197,
  65,209,252,234,65,252,255,202,255,65,129,252,254,239,15,133,245,77,137,252,
  251,65,131,252,250,0,15,141,245,129,252,250,239,15,140,245,76,137,252,255,
  72,49,192,138,135,233,138,167,233,193,224,16,138,135,233,138,167,233,129,
  192,239,57,194,15,140,245,73,1,199,41,194,249,255,65,131,252,250,0,15,140,
  245,73,185,237,237,77,137,145,233,72,131,252,236,8,87,86,82,81,65,80,65,81,
  104,237,72,137,200,76,137,199,72,190,237,237,73,184,237,237,73,185,237,237,
  72,199,194,237,72,199,193,0,0,0,0,252,255,208,137,192,72,131,196,8,65,89,
  65,88,89,90,94,95,72,131,196,8,252,233,245,249,76,137,223,72,49,192,138,135,
  233,138,167,233,193,224,16,138,135,233,138,167,233,255,129,252,248,239,15,
  133,244,247,72,129,199,239,72,49,192,138,135,233,138,167,233,193,224,16,138,
  135,233,138,167,233,137,199,72,49,192,137,252,248,131,252,255,0,15,141,244,
  251,72,49,192,72,252,247,208,72,193,224,32,72,9,252,248,248,5,72,137,199,
  73,185,237,237,73,137,185,233,72,131,252,236,8,87,86,82,81,65,80,65,81,104,
  237,72,137,200,76,137,199,72,190,237,237,73,184,237,237,73,185,237,237,255,
  72,199,194,237,72,199,193,0,0,0,0,252,255,208,137,192,72,131,196,8,65,89,
  65,88,89,90,94,95,72,131,196,8,252,233,245,248,1,129,252,248,239,15,133,245,
  76,137,223,72,129,199,239,72,49,192,138,135,233,138,167,233,193,224,16,138,
  135,233,138,167,233,73,185,237,237,73,137,129,233,72,129,199,239,72,49,192,
  138,135,233,138,167,233,73,185,237,237,255,73,137,129,233,72,131,252,236,
  8,87,86,82,81,65,80,65,81,104,237,72,137,200,76,137,199,72,190,237,237,73,
  184,237,237,73,185,237,237,72,199,194,237,72,199,193,0,0,0,0,252,255,208,
  137,192,72,131,196,8,65,89,65,88,89,90,94,95,72,131,196,8,249,255,76,137,
  223,72,49,192,138,135,233,138,167,233,193,224,16,138,135,233,138,167,233,
  73,129,195,239,73,137,194,72,131,252,236,8,87,86,82,81,65,80,65,81,65,82,
  72,137,200,76,137,199,72,190,237,237,73,184,237,237,77,137,217,72,199,194,
  237,72,199,193,0,0,0,0,252,255,208,137,192,72,131,196,8,65,89,65,88,89,90,
  94,95,72,131,196,8,72,131,252,248,0,15,133,245,255,248,1,69,57,229,15,141,
  245,65,252,255,198,72,49,252,255,68,137,252,239,209,231,72,1,252,247,72,49,
  192,138,135,233,138,167,233,65,137,194,131,224,1,15,138,244,248,68,137,208,
  209,232,65,1,198,65,252,255,197,252,233,244,1,248,2,65,252,255,197,65,209,
  252,234,65,252,255,202,249,255,249,72,199,192,252,255,252,255,252,255,252,
  255,252,233,244,10,249,72,199,192,0,0,0,0,252,233,244,10,255,72,129,252,250,
  239,15,140,245,72,137,215,72,129,252,239,239,77,137,252,247,73,129,199,239,
  255,87,86,82,81,65,80,72,137,207,76,137,198,72,186,237,237,76,137,252,249,
  73,137,252,248,72,184,237,237,252,255,208,65,88,89,90,94,95,73,137,199,73,
  131,252,255,0,15,132,245,255,72,199,197,1,0,0,0,248,1,72,131,252,236,8,87,
  86,82,81,65,80,65,81,104,237,72,137,200,76,137,199,72,190,237,237,73,184,
  237,237,73,185,237,237,72,199,194,237,72,137,252,233,252,255,208,137,192,
  72,131,196,8,65,89,65,88,89,90,94,95,72,131,196,8,131,252,248,0,15,140,245,
  15,132,244,248,72,131,252,255,1,15,140,245,176,1,65,136,135,233,73,185,237,
  237,73,139,129,233,72,131,252,248,0,15,133,244,249,255,176,0,65,136,135,233,
  248,3,72,252,255,207,73,252,255,199,72,252,255,197,252,233,244,1,248,2,255,
  72,199,197,1,0,0,0,248,1,72,129,252,255,239,15,140,245,72,129,252,239,239,
  73,129,199,239,72,131,252,236,8,87,86,82,81,65,80,65,81,87,72,137,200,76,
  137,199,72,190,237,237,73,184,237,237,77,137,252,249,72,199,194,237,72,137,
  252,233,252,255,208,65,137,194,72,131,196,8,65,89,65,88,89,90,94,95,72,131,
  196,8,65,131,252,250,0,15,140,245,15,132,244,248,73,129,252,239,239,68,137,
  208,131,252,248,0,15,140,244,250,15,132,244,251,255,68,137,208,65,136,135,
  233,193,232,8,65,136,135,233,193,232,8,65,136,135,233,193,232,8,65,136,135,
  233,68,137,208,129,192,239,252,233,244,249,248,5,184,0,0,0,0,252,233,244,
  249,248,4,184,252,255,252,255,252,255,252,255,248,3,73,129,199,239,77,1,215,
  76,41,215,72,252,255,197,252,233,244,1,248,2,73,129,252,239,239,255,77,41,
  252,247,73,129,252,239,239,73,131,252,255,0,15,132,244,247,68,137,252,248,
  131,252,248,0,15,140,244,250,15,132,244,251,68,137,252,248,65,136,134,233,
  193,232,8,65,136,134,233,193,232,8,65,136,134,233,193,232,8,65,136,134,233,
  69,137,252,251,65,129,195,239,252,233,244,249,248,5,65,187,0,0,0,0,252,233,
  244,249,248,4,65,187,252,255,252,255,252,255,252,255,248,3,252,233,244,248,
  248,1,255,65,187,0,0,0,0,248,2,255,72,129,252,250,239,15,140,245,73,137,252,
  246,73,129,198,239,72,129,252,234,239,255,72,49,219,73,199,197,252,255,252,
  255,252,255,252,255,255,77,49,219,77,49,228,65,187,252,255,252,255,252,255,
  252,255,69,49,228,255,72,131,252,236,8,87,86,82,81,65,80,65,81,104,237,72,
  137,200,76,137,199,72,190,237,237,73,184,237,237,73,185,237,237,72,199,194,
  237,72,199,193,0,0,0,0,252,255,208,65,137,195,72,131,196,8,65,89,65,88,89,
  90,94,95,72,131,196,8,65,131,252,251,0,15,140,245,15,132,245,65,129,252,251,
  239,15,133,245,73,185,237,237,69,139,161,233,65,131,252,252,0,15,140,245,
  255,65,252,255,196,65,209,228,65,187,2,0,0,0,252,233,245,249,72,129,252,250,
  239,15,140,244,247,68,137,224,65,136,134,233,193,232,8,65,136,134,233,193,
  232,8,65,136,134,233,193,232,8,65,136,134,233,184,237,131,252,248,0,15,140,
  244,250,15,132,244,251,184,237,65,136,134,233,193,232,8,65,136,134,233,193,
  232,8,65,136,134,233,193,232,8,65,136,134,233,255,65,187,237,65,129,195,239,
  252,233,244,249,248,5,65,187,0,0,0,0,252,233,244,249,248,4,65,187,252,255,
  252,255,252,255,252,255,248,3,252,233,244,248,248,1,65,187,252,255,252,255,
  252,255,252,255,248,2,69,49,228,252,233,245,249,65,129,252,251,239,15,133,
  245,73,185,237,237,255,77,139,161,233,72,129,252,250,239,15,140,244,247,76,
  137,224,65,136,134,233,72,193,232,8,65,136,134,233,72,193,232,8,65,136,134,
  233,72,193,232,8,65,136,134,233,72,193,232,8,65,136,134,233,72,193,232,8,
  65,136,134,233,72,193,232,8,65,136,134,233,72,193,232,8,65,136,134,233,72,
  193,232,8,184,237,131,252,248,0,15,140,244,250,15,132,244,251,184,237,65,
  136,134,233,193,232,8,65,136,134,233,255,193,232,8,65,136,134,233,193,232,
  8,65,136,134,233,65,187,237,65,129,195,239,252,233,244,249,248,5,65,187,0,
  0,0,0,252,233,244,249,248,4,65,187,252,255,252,255,252,255,252,255,248,3,
  252,233,244,248,248,1,65,187,252,255,252,255,252,255,252,255,248,2,77,49,
  228,255,72,129,252,250,239,15,140,244,247,73,129,198,239,72,129,252,234,239,
  72,131,252,236,8,87,86,82,81,65,80,65,81,82,72,137,200,76,137,199,72,190,
  237,237,73,184,237,237,77,137,252,241,72,199,194,237,72,199,193,0,0,0,0,252,
  255,208,65,137,195,72,131,196,8,65,89,65,88,89,90,94,95,72,131,196,8,73,129,
  252,238,239,72,129,194,239,68,137,216,131,252,248,0,15,140,244,250,15,132,
  244,251,68,137,216,65,136,134,233,193,232,8,65,136,134,233,193,232,8,65,136,
  134,233,193,232,8,65,136,134,233,255,69,137,219,65,129,195,239,252,233,244,
  249,248,5,65,187,0,0,0,0,252,233,244,249,248,4,65,187,252,255,252,255,252,
  255,252,255,248,3,252,233,244,248,248,1,65,187,252,255,252,255,252,255,252,
  255,248,2,255,65,131,252,251,0,15,140,245,15,132,245,65,131,252,252,0,15,
  133,245,77,1,222,76,41,218,249,73,137,223,73,209,231,73,129,199,239,73,1,
  252,247,73,199,195,237,77,41,252,235,73,131,252,235,1,73,131,252,251,0,15,
  142,245,73,252,255,203,73,209,227,73,252,255,195,73,129,252,251,252,255,252,
  255,0,0,15,142,245,252,233,245,249,76,137,216,65,136,135,233,72,193,232,8,
  65,136,135,233,72,252,255,195,73,129,199,239,249,255,72,252,255,195,68,137,
  224,65,136,135,233,193,232,8,65,136,135,233,73,199,197,237,249,255,72,137,
  216,136,134,233,72,193,232,8,136,134,233,77,137,252,247,73,41,252,247,73,
  129,252,239,239,73,137,252,246,255,73,129,198,239,72,137,217,72,209,227,72,
  129,252,249,239,15,132,245,72,129,198,239,72,1,222,72,137,252,247,76,137,
  252,246,76,137,252,250,72,184,237,237,252,255,208,249,73,1,223,73,129,199,
  239,76,137,252,248,252,233,244,10,249,72,199,192,252,255,252,255,252,255,
  252,255,252,233,244,10,255,72,131,252,236,8,85,83,87,86,65,84,65,85,65,86,
  65,87,255,248,10,65,95,65,94,65,93,65,92,94,95,91,93,72,131,196,8,195,255
};

#line 5 "jitx64.desc"

//|.globals SPROTO_CODE_
enum {
  SPROTO_CODE_run_done,
  SPROTO_CODE__MAX
};
#line 7 "jitx64.desc"
static void* labels[SPROTO_CODE__MAX];

// call a function with a arg
//|.macro callp, addr
//| mov64  rax, (uintptr_t)addr
//| call   rax
//|.endmacro


// jit argument register
//|.define ST, rdi
//|.define DECODE_DATA, rsi
//|.define DECODE_SIZE, rdx
//|.define DECODE_CB,   rcx
//|.define DECODE_UD,   r8

//|.define ENCODE_DATA, rsi
//|.define ENCODE_SIZE, rdx
//|.define ENCODE_CB,   rcx
//|.define ENCODE_UD,   r8


//|.macro _pre
//| sub rsp, 8
//| push rbp
//| push rbx
//| push rdi
//| push rsi
//| push r12
//| push r13
//| push r14
//| push r15
//|.endmacro

//|.macro _ret
//|->run_done:
//| pop r15
//| pop r14
//| pop r13
//| pop r12
//| pop rsi
//| pop rdi
//| pop rbx
//| pop rbp
//| add rsp, 8
//| ret
//|.endmacro

//|.macro _return, value
//| mov rax, value
//| jmp ->run_done 
//|.endmacro


//|.macro _set_imm_value, value
//| mov64 r9, (uintptr_t)value
//|.endmacro

//|.macro _set_rg_value, value
//| mov r9, value
//|.endmacro

// argement rdi, rsi, rdx, rcx, r8, r9, rax
// R_OUT_RET is return value
//|.macro _call_cb, R_cb, ud, tagname, type, index, st, value, _set_value, length, R_OUT_RET
//| sub rsp, 8
//| push rdi
//| push rsi
//| push rdx
//| push rcx
//| push r8 
//| push r9
//|
//| push length
//| mov rax, R_cb
//| mov rdi, ud
//| mov64 rsi, (uintptr_t)tagname
//| mov64 r8, (uintptr_t)st
//| _set_value value
//| mov rdx, type
//| mov rcx, index
//| call rax
//| mov R_OUT_RET, eax
//|
//| add rsp, 8 // pop length
//| pop r9
//| pop r8
//| pop rcx
//| pop rdx
//| pop rsi
//| pop rdi
//| add rsp, 8  // for 16 aligned
//|.endmacro

//|.type HEADER, uint8_t,   ENCODE_DATA
#define Dt1(_V) (int)(ptrdiff_t)&(((uint8_t *)0)_V)
#line 102 "jitx64.desc"
//|.type DATA,   uint8_t,   r14
#define Dt2(_V) (int)(ptrdiff_t)&(((uint8_t *)0)_V)
#line 103 "jitx64.desc"
//|.type RECORD, uint8_t,   r15
#define Dt3(_V) (int)(ptrdiff_t)&(((uint8_t *)0)_V)
#line 104 "jitx64.desc"


//|.macro _fill_size, data, sz, R_out
//| mov eax, sz
//| cmp eax, 0
//| jl >4
//| je >5
//| mov eax, sz
//| mov data[0], al
//| shr eax, 8
//| mov data[1], al
//| shr eax, 8
//| mov data[2], al
//| shr eax, 8
//| mov data[3], al
//| mov R_out, sz
//| add R_out, SIZEOF_LENGTH
//| jmp >3
//|
//|5:
//| mov R_out, 0
//| jmp >3
//|4:
//| mov R_out, -1
//|3:
//|.endmacro


//|.macro _encode_uint64, u64, data, size, R_out
//| cmp size, SIZEOF_LENGTH + sizeof(uint64_t)
//| jl >1
//| mov rax, u64
//| mov data[4], al
//| shr rax, 8
//| mov data[5], al
//| shr rax, 8
//| mov data[6], al
//| shr rax, 8
//| mov data[7], al
//| shr rax, 8
//| mov data[8], al
//| shr rax, 8
//| mov data[9], al
//| shr rax, 8
//| mov data[10], al
//| shr rax, 8
//| mov data[11], al
//| shr rax, 8
//| _fill_size data, sizeof(uint64_t), R_out
//| jmp >2
//|
//|1:
//| mov R_out, -1
//|2:
//|.endmacro

//|.macro _encode_integer, u32, data, size, R_out
//| cmp size, SIZEOF_LENGTH + sizeof(uint32_t)
//| jl >1 
//| mov eax, u32
//| mov data[4], al
//| shr eax, 8
//| mov data[5], al
//| shr eax, 8
//| mov data[6], al
//| shr eax, 8
//| mov data[7], al
//| _fill_size data, sizeof(uint32_t), R_out
//| jmp >2
//|
//|1:
//| mov R_out, -1
//|2:
//|.endmacro


//|.macro _encode_buffer, cb, ud, sproto_type, name, st, data, size, R_out
//| cmp size, SIZEOF_LENGTH
//| jl >1
//| add data, SIZEOF_LENGTH
//| sub size, SIZEOF_LENGTH
//| _call_cb cb, ud, name, sproto_type, 0, st,  data, _set_rg_value, size, R_out
//| sub data, SIZEOF_LENGTH
//| add size, SIZEOF_LENGTH
//| _fill_size data, R_out, R_out
//| jmp >2
//| 
//|1:
//| mov R_out, -1
//|2:
//|.endmacro

// not jit
//|.macro _encode_integer_array, cb, ud, f, buffer, size
//| push rdi
//| push rsi
//| push rdx
//| push rcx
//| push r8
//|
//| mov rdi, cb
//| mov rsi, ud
//| mov64 rdx, (uintptr_t)f
//| mov rcx, buffer
//| mov r8, size
//| mov64 rax, (uintptr_t)encode_integer_array
//|
//| call rax
//|
//| pop r8
//| pop rcx
//| pop rdx
//| pop rsi
//| pop rdi
//|.endmacro

// toward, eax is return value
//|.macro _toword, p
//| xor rax, rax
//| mov al, p[0]
//| mov ah, p[1]
//|.endmacro

// todword, eax is return value
//|.macro _todword, p
//| xor rax, rax
//| mov al, p[2]
//| mov ah, p[3]
//| shl eax, 16
//| mov al, p[0]
//| mov ah, p[1]
//|.endmacro


//|.type JIT_P, struct sproto_jit, r9
#define Dt4(_V) (int)(ptrdiff_t)&(((struct sproto_jit *)0)_V)
#line 239 "jitx64.desc"
//|.macro _gt_u32, R_out
//| mov64 JIT_P, (uintptr_t)&(jit_instance) 
//| mov R_out, JIT_P->tmp_u.u32
//|.endmacro

//|.macro _gt_u64, R_out
//| mov64 JIT_P, (uintptr_t)&(jit_instance)
//| mov   R_out, JIT_P->tmp_u.u64
//|.endmacro

//|.macro _st_u64, v
//| mov64 JIT_P, (uintptr_t)&(jit_instance)
//| mov JIT_P->tmp_u.u64, v
//|.endmacro

//|.macro _st_u32, v
//| mov64 JIT_P, (uintptr_t)&(jit_instance)
//| mov JIT_P->tmp_u.u32, v
//|.endmacro

//|.macro _st_low, v32
//| mov64 JIT_P, (uintptr_t)&(jit_instance)
//| mov JIT_P->tmp_u.v64_op.low, v32
//|.endmacro

//|.macro _st_hi, v32
//| mov64 JIT_P, (uintptr_t)&(jit_instance)
//| mov JIT_P->tmp_u.v64_op.hi, v32
//|.endmacro


// tmp32 is parameter
//|.macro _expand64
//| xor rax, rax
//| mov eax, tmp32
//| cmp tmp32, 0
//| jge >5
//| xor rax, rax
//| not rax
//| shl rax, 32
//| or rax, tmp64
//|5:
//|.endmacro

//|.type   stream,      uint8_t,  DECODE_DATA
#define Dt5(_V) (int)(ptrdiff_t)&(((uint8_t *)0)_V)
#line 284 "jitx64.desc"
//|.type   currentdata, uint8_t,  r11
#define Dt6(_V) (int)(ptrdiff_t)&(((uint8_t *)0)_V)
#line 285 "jitx64.desc"
//|.type   tmp64,       uint8_t,  rdi
#define Dt7(_V) (int)(ptrdiff_t)&(((uint8_t *)0)_V)
#line 286 "jitx64.desc"
//|.define tmp32,                 edi
//|.define tmp8,                  r7b

static int
_gen_decode_array(struct field* f, unsigned int label_return_error){
  //| mov tmp64, currentdata
  //| _todword tmp64
  //| add currentdata, SIZEOF_LENGTH
  dasm_put(Dst, 0, Dt7([2]), Dt7([3]), Dt7([0]), Dt7([1]), SIZEOF_LENGTH);
#line 294 "jitx64.desc"
  
  void* tmp_u = &(jit_instance.tmp_u);
  int size_u = sizeof(jit_instance.tmp_u);

  assert(sizeof(uint32_t) == 4);
  assert(sizeof(uint64_t) == 8);
  dasm_growpc(Dst, maxpc+=2);

  unsigned int label_decode_array_end = maxpc -1;

  int type = f->type & ~SPROTO_TARRAY;
  switch(type){
    case SPROTO_TINTEGER: {
      //| cmp rax, 1
      //| jl =>(label_return_error)
      //| mov tmp8, currentdata[0] // len
      //| inc currentdata
      //| dec rax  // sz
      //| cmp tmp8, sizeof(uint32_t)
      //| jne >1
      //|
        //| mov rbp, rax
        //| and rax, 3
        //| jnz =>(label_return_error)
        //| shr rbp, 2
        //| xor rbx, rbx
        //| sub currentdata, sizeof(uint32_t)
        //|2:
        //| add currentdata, sizeof(uint32_t)
        //| mov tmp64, currentdata
        //| _todword tmp64
        //| mov tmp32, eax
        //| _expand64
        //| mov tmp64, rax
        //| _st_u64, tmp64
        dasm_put(Dst, 26, (label_return_error), Dt6([0]), sizeof(uint32_t), (label_return_error), sizeof(uint32_t), sizeof(uint32_t), Dt7([2]), Dt7([3]), Dt7([0]), Dt7([1]), (unsigned int)((uintptr_t)&(jit_instance)), (unsigned int)(((uintptr_t)&(jit_instance))>>32));
#line 329 "jitx64.desc"
        //| mov tmp64, currentdata    // back currentdata
        //|
        //| inc rbx
        //| _call_cb DECODE_CB, DECODE_UD, f->name, SPROTO_TINTEGER, rbx, NULL, tmp_u, _set_imm_value, size_u, eax
        //| mov currentdata, tmp64
        //| cmp rbp, rbx
        //| jg <2
        //| jmp =>(label_decode_array_end)
      //|
      //|1:
      //| cmp tmp8, sizeof(uint64_t)
      //| jne =>(label_return_error)
      //| 
        //| mov rbp, rax
        //| and rax, 7
        //| jnz =>(label_return_error)
        //| shr rbp, 3
        //| xor rbx, rbx
        //| sub currentdata, sizeof(uint64_t)
        //|3:
        //| add currentdata, sizeof(uint64_t)
        dasm_put(Dst, 146, Dt4(->tmp_u.u64), size_u, (unsigned int)((uintptr_t)f->name), (unsigned int)(((uintptr_t)f->name)>>32), (unsigned int)((uintptr_t)NULL), (unsigned int)(((uintptr_t)NULL)>>32), (unsigned int)((uintptr_t)tmp_u), (unsigned int)(((uintptr_t)tmp_u)>>32), SPROTO_TINTEGER, (label_decode_array_end), sizeof(uint64_t), (label_return_error), (label_return_error), sizeof(uint64_t));
#line 350 "jitx64.desc"
        //| mov tmp64, currentdata
        //| _todword tmp64
        //| _st_low rax
        //| add tmp64, sizeof(uint32_t)
        //| _todword tmp64
        //| _st_hi rax
        //| mov tmp64, currentdata    // back currentdata
        //|
        //| inc rbx
        //| _call_cb DECODE_CB, DECODE_UD, f->name, SPROTO_TINTEGER, rbx, NULL, tmp_u, _set_imm_value, size_u, eax
        dasm_put(Dst, 268, sizeof(uint64_t), Dt7([2]), Dt7([3]), Dt7([0]), Dt7([1]), (unsigned int)((uintptr_t)&(jit_instance)), (unsigned int)(((uintptr_t)&(jit_instance))>>32), Dt4(->tmp_u.v64_op.low), sizeof(uint32_t), Dt7([2]), Dt7([3]), Dt7([0]), Dt7([1]), (unsigned int)((uintptr_t)&(jit_instance)), (unsigned int)(((uintptr_t)&(jit_instance))>>32), Dt4(->tmp_u.v64_op.hi), size_u, (unsigned int)((uintptr_t)f->name), (unsigned int)(((uintptr_t)f->name)>>32), (unsigned int)((uintptr_t)NULL), (unsigned int)(((uintptr_t)NULL)>>32), (unsigned int)((uintptr_t)tmp_u), (unsigned int)(((uintptr_t)tmp_u)>>32));
#line 360 "jitx64.desc"
        //| mov currentdata, tmp64
        //| cmp rbp, rbx
        //| jg <3
        //| jmp =>(label_decode_array_end)
      //|
      dasm_put(Dst, 372, SPROTO_TINTEGER, (label_decode_array_end));
#line 365 "jitx64.desc"

    }break;
    
    case SPROTO_TBOOLEAN: {
      //| mov rbp, rax
      //| xor rbx, rbx
      //| mov tmp64, currentdata
      //|
      //|4:
      //| xor rax, rax
      //| mov al, tmp64[0]
      //| _st_u32 rax
      //|
      //| inc rbx
      //| _call_cb DECODE_CB, DECODE_UD, f->name, SPROTO_TBOOLEAN, rbx, NULL, tmp_u, _set_imm_value, size_u, eax
      //| inc tmp64
      //| cmp rbp, rbx
      //| jg <4
      //| jmp =>(label_decode_array_end)
      dasm_put(Dst, 415, Dt7([0]), (unsigned int)((uintptr_t)&(jit_instance)), (unsigned int)(((uintptr_t)&(jit_instance))>>32), Dt4(->tmp_u.u32), size_u, (unsigned int)((uintptr_t)f->name), (unsigned int)(((uintptr_t)f->name)>>32), (unsigned int)((uintptr_t)NULL), (unsigned int)(((uintptr_t)NULL)>>32), (unsigned int)((uintptr_t)tmp_u), (unsigned int)(((uintptr_t)tmp_u)>>32), SPROTO_TBOOLEAN, (label_decode_array_end));
#line 384 "jitx64.desc"
    }break;

    case SPROTO_TSTRING:
    case SPROTO_TSTRUCT: {
      //| mov rbp, rax
      //| mov rbx, 1
      //| mov tmp64, currentdata
      //|
      //|5:
      //| cmp rbp, 0
      //| jle =>(label_decode_array_end)
      //| cmp rbp, SIZEOF_LENGTH
      //| jl =>(label_return_error)
      //| _todword tmp64
      //| add tmp64, SIZEOF_LENGTH
      //| sub rbp, SIZEOF_LENGTH
      //|
      //| cmp rax, rbp
      //| jg =>(label_return_error)
      //|
      //| mov r9, rax
      //| mov currentdata, tmp64
      //| _call_cb DECODE_CB, DECODE_UD, f->name, type, rbx, f->st, currentdata, _set_rg_value, r9, eax
      //| cmp eax, 0
      //| jne =>(label_return_error)
      //| sub rbp, r9
      dasm_put(Dst, 520, (label_decode_array_end), SIZEOF_LENGTH, (label_return_error), Dt7([2]), Dt7([3]), Dt7([0]), Dt7([1]), SIZEOF_LENGTH, SIZEOF_LENGTH, (label_return_error), (unsigned int)((uintptr_t)f->name), (unsigned int)(((uintptr_t)f->name)>>32), (unsigned int)((uintptr_t)f->st), (unsigned int)(((uintptr_t)f->st)>>32), type, (label_return_error));
#line 410 "jitx64.desc"
      //| add tmp64, r9
      //| inc rbx
      //| jmp <5
      dasm_put(Dst, 659);
#line 413 "jitx64.desc"

    }break;

    default:
      return 0;
  }

  //|=>(label_decode_array_end):
  //|
  dasm_put(Dst, 674, (label_decode_array_end));
#line 422 "jitx64.desc"
  return 1;
}

static int 
_gen_decode_type(struct sproto_type* st){
  dasm_growpc(Dst, maxpc+=2);
  unsigned int label_return_error = maxpc-1;
  unsigned int label_end = maxpc-2;

  void* tmp_u = &(jit_instance.tmp_u);
  int size_u = sizeof(jit_instance.tmp_u);

  assert(SIZEOF_FIELD==2); // for optimize

  //|.define size, edx // DECODE_SIZE u32
  //|.type datastream, uint8_t, r15
#define Dt8(_V) (int)(ptrdiff_t)&(((uint8_t *)0)_V)
#line 438 "jitx64.desc"
  //|.define d_value64, r10
  //|.define d_value, r10d
  //|.define d_tag,   r14d
  //|.define fn,      r12d
  //|.define d_index, r13d

  //|.macro _next_tag
  //|1:
  //| cmp d_index, fn
  //| jge =>(label_end)
  //| inc d_tag
  //| xor tmp64, tmp64
  //| mov tmp32, d_index
  //| shl tmp32, 1
  //| add tmp64, stream
  //| _toword, tmp64
  //| mov d_value, eax
  //| and eax, 1
  //| jp >2
  //|
    //| mov eax, d_value
    //| shr eax, 1
    //| add d_tag, eax 
    //| inc d_index
    //| jmp <1
  //|
  //|2:
  //| inc d_index
  //| shr d_value, 1
  //| dec d_value
  //|.endmacro

  //|
  //| cmp DECODE_SIZE, SIZEOF_HEADER
  //|
    //| jl =>(label_return_error)
  //|
  //| _toword, stream  // eax is fn
  //| add stream, SIZEOF_HEADER
  //| sub size, SIZEOF_HEADER
  //| shl eax, 1 // fn * SIZEOF_FIELD
  //| cmp size, eax
  //|
    //| jl =>(label_return_error)
  //|
  //| mov datastream, stream
  //| add datastream, rax
  //| sub size, eax
  //| shr eax, 1
  //|
  //| mov fn, eax
  //| xor d_value64, d_value64
  //| xor d_index, d_index
  //| xor r10, r10
  //| mov d_tag, -1
  dasm_put(Dst, 676, SIZEOF_HEADER, (label_return_error), Dt5([0]), Dt5([1]), SIZEOF_HEADER, SIZEOF_HEADER, (label_return_error));
#line 493 "jitx64.desc"

  //|
  //| _next_tag
  //|
  dasm_put(Dst, 743, (label_end), Dt7([0]), Dt7([1]));
#line 497 "jitx64.desc"

  int i;
  for(i=0; i<st->n; i++){
    struct field *f = &st->f[i];
    int _tag = f->tag;
    int type = f->type;

    dasm_growpc(Dst, maxpc+=9);

    //| cmp d_tag, _tag
    //| jne =>(maxpc-1)
    //|
    //| mov currentdata, datastream
    //| cmp d_value, 0
    //| jge =>(maxpc-2)
    //| 
      //| cmp size, SIZEOF_LENGTH
      //| jl =>(label_return_error)
      //| mov tmp64, datastream
      //| _todword, tmp64
      //| add eax, SIZEOF_LENGTH
      //| cmp size, eax
      //| jl =>(label_return_error)
      //| add datastream, rax
      //| sub size, eax
    //|
    //|=>(maxpc-2):
    //|
    dasm_put(Dst, 819, _tag, (maxpc-1), (maxpc-2), SIZEOF_LENGTH, (label_return_error), Dt7([2]), Dt7([3]), Dt7([0]), Dt7([1]), SIZEOF_LENGTH, (label_return_error), (maxpc-2));
#line 525 "jitx64.desc"

    if(type & SPROTO_TARRAY){
      int success = _gen_decode_array(f, label_return_error);
      if(! success) return success;
    } else {
      switch(type){
        case SPROTO_TINTEGER:
        case SPROTO_TBOOLEAN: {
          //| cmp d_value, 0
          //| jl =>(maxpc-3)
          //| _st_u64 d_value64
          //| _call_cb DECODE_CB,  DECODE_UD, f->name, f->type, 0, NULL, tmp_u, _set_imm_value, size_u, eax
          //| jmp =>(maxpc-4) 
          //|
          //|=>(maxpc-3):
          //| mov tmp64, currentdata
          //| _todword, tmp64
          //| cmp eax, sizeof(uint32_t)
          dasm_put(Dst, 883, (maxpc-3), (unsigned int)((uintptr_t)&(jit_instance)), (unsigned int)(((uintptr_t)&(jit_instance))>>32), Dt4(->tmp_u.u64), size_u, (unsigned int)((uintptr_t)f->name), (unsigned int)(((uintptr_t)f->name)>>32), (unsigned int)((uintptr_t)NULL), (unsigned int)(((uintptr_t)NULL)>>32), (unsigned int)((uintptr_t)tmp_u), (unsigned int)(((uintptr_t)tmp_u)>>32), f->type, (maxpc-4), (maxpc-3), Dt7([2]), Dt7([3]), Dt7([0]), Dt7([1]));
#line 543 "jitx64.desc"
          //|
            //| jne >1
          //|
          //| add tmp64, SIZEOF_LENGTH
          //| _todword, tmp64
          //| mov tmp32, eax
          //| _expand64
          //| mov tmp64, rax
          //| _st_u64, tmp64
          //| _call_cb DECODE_CB, DECODE_UD, f->name, SPROTO_TINTEGER, 0, NULL, tmp_u, _set_imm_value, size_u, eax
          dasm_put(Dst, 990, sizeof(uint32_t), SIZEOF_LENGTH, Dt7([2]), Dt7([3]), Dt7([0]), Dt7([1]), (unsigned int)((uintptr_t)&(jit_instance)), (unsigned int)(((uintptr_t)&(jit_instance))>>32), Dt4(->tmp_u.u64), size_u, (unsigned int)((uintptr_t)f->name), (unsigned int)(((uintptr_t)f->name)>>32), (unsigned int)((uintptr_t)NULL), (unsigned int)(((uintptr_t)NULL)>>32), (unsigned int)((uintptr_t)tmp_u), (unsigned int)(((uintptr_t)tmp_u)>>32));
#line 553 "jitx64.desc"
          //| jmp =>(maxpc-4)
          //|1:
          //| cmp eax, sizeof(uint64_t)
          //|
            //| jne =>(label_return_error)
          //|
          //| mov tmp64, currentdata
          //| add tmp64, SIZEOF_LENGTH
          //| _todword tmp64
          //| _st_low rax
          //| add tmp64, sizeof(uint32_t)
          //| _toword tmp64
          //| _st_hi rax
          dasm_put(Dst, 1098, SPROTO_TINTEGER, (maxpc-4), sizeof(uint64_t), (label_return_error), SIZEOF_LENGTH, Dt7([2]), Dt7([3]), Dt7([0]), Dt7([1]), (unsigned int)((uintptr_t)&(jit_instance)), (unsigned int)(((uintptr_t)&(jit_instance))>>32), Dt4(->tmp_u.v64_op.low), sizeof(uint32_t), Dt7([0]), Dt7([1]), (unsigned int)((uintptr_t)&(jit_instance)), (unsigned int)(((uintptr_t)&(jit_instance))>>32));
#line 566 "jitx64.desc"
          //| _call_cb DECODE_CB, DECODE_UD, f->name, SPROTO_TINTEGER, 0, NULL, tmp_u, _set_imm_value, size_u, eax
          //|
          //|=>(maxpc-4):
          //|
          dasm_put(Dst, 1193, Dt4(->tmp_u.v64_op.hi), size_u, (unsigned int)((uintptr_t)f->name), (unsigned int)(((uintptr_t)f->name)>>32), (unsigned int)((uintptr_t)NULL), (unsigned int)(((uintptr_t)NULL)>>32), (unsigned int)((uintptr_t)tmp_u), (unsigned int)(((uintptr_t)tmp_u)>>32), SPROTO_TINTEGER, (maxpc-4));
#line 570 "jitx64.desc"
        }break;

        case SPROTO_TSTRING:
        case SPROTO_TSTRUCT:{
          //| mov tmp64, currentdata 
          //| _todword, tmp64
          //| add currentdata, SIZEOF_LENGTH
          //| mov r10, rax
          //| _call_cb DECODE_CB, DECODE_UD, f->name, f->type, 0, f->st, currentdata, _set_rg_value, r10, eax
          //| cmp rax, 0
          //| jne =>(label_return_error)
          //|
          dasm_put(Dst, 1264, Dt7([2]), Dt7([3]), Dt7([0]), Dt7([1]), SIZEOF_LENGTH, (unsigned int)((uintptr_t)f->name), (unsigned int)(((uintptr_t)f->name)>>32), (unsigned int)((uintptr_t)f->st), (unsigned int)(((uintptr_t)f->st)>>32), f->type, (label_return_error));
#line 582 "jitx64.desc"
        }break;

        default:
          assert(0);
      }
    }

    //| _next_tag
    //|
    //|=>(maxpc-1):  // next field
    dasm_put(Dst, 1365, (label_end), Dt7([0]), Dt7([1]), (maxpc-1));
#line 592 "jitx64.desc"
  }

  //|
  //|=>(label_return_error):
  //| _return, -1
  //|
  //|=>(label_end):
  //| _return, 0
  dasm_put(Dst, 1442, (label_return_error), (label_end));
#line 600 "jitx64.desc"

  return 1;
}


//|.type   ea_buffer, uint8_t, r15
#define Dt9(_V) (int)(ptrdiff_t)&(((uint8_t *)0)_V)
#line 606 "jitx64.desc"
//|.define ea_index, rbp
//|.define ea_size, tmp64
//|.define sz_64,  r11
//|.define sz,    r11d

static int 
_gen_encode_array(struct field* f, unsigned int label_return_error){
  //| cmp ENCODE_SIZE, SIZEOF_LENGTH
  //| jl =>(label_return_error)
  //| mov ea_size, ENCODE_SIZE
  //| sub ea_size, SIZEOF_LENGTH
  //| mov ea_buffer, DATA
  //| add ea_buffer, SIZEOF_LENGTH
  dasm_put(Dst, 1471, SIZEOF_LENGTH, (label_return_error), SIZEOF_LENGTH, SIZEOF_LENGTH);
#line 619 "jitx64.desc"

  void* tmp_u = &(jit_instance.tmp_u);

  int type = f->type & ~SPROTO_TARRAY;
  switch(type){
    case SPROTO_TINTEGER:
        //| _encode_integer_array ENCODE_CB, ENCODE_UD, f, ea_buffer, ea_size
        //| mov ea_buffer, rax
        //| cmp ea_buffer, 0
        //| je =>(label_return_error)
        dasm_put(Dst, 1496, (unsigned int)((uintptr_t)f), (unsigned int)(((uintptr_t)f)>>32), (unsigned int)((uintptr_t)encode_integer_array), (unsigned int)(((uintptr_t)encode_integer_array)>>32), (label_return_error));
#line 629 "jitx64.desc"
      break;

    case SPROTO_TBOOLEAN:{
        //| mov ea_index, 1
        //|1:
        //| _call_cb ENCODE_CB, ENCODE_UD, f->name, type, ea_index, f->st, tmp_u, _set_imm_value, sizeof(uint32_t), eax
        //| cmp eax, 0
        //| jl =>(label_return_error)
        //| je >2
        //| cmp ea_size, 1
        //| jl =>(label_return_error)
        //| mov al, 1
        //| mov ea_buffer[0], al
        //| _gt_u32 rax
        //| cmp rax, 0
        //| jne >3
        //| mov al, 0
        dasm_put(Dst, 1545, sizeof(uint32_t), (unsigned int)((uintptr_t)f->name), (unsigned int)(((uintptr_t)f->name)>>32), (unsigned int)((uintptr_t)f->st), (unsigned int)(((uintptr_t)f->st)>>32), (unsigned int)((uintptr_t)tmp_u), (unsigned int)(((uintptr_t)tmp_u)>>32), type, (label_return_error), (label_return_error), Dt9([0]), (unsigned int)((uintptr_t)&(jit_instance)), (unsigned int)(((uintptr_t)&(jit_instance))>>32), Dt4(->tmp_u.u32));
#line 646 "jitx64.desc"
        //| mov ea_buffer[0], al 
        //|3:
        //| dec ea_size
        //| inc ea_buffer
        //| inc ea_index
        //| jmp <1 
        //|
        //|2:
        dasm_put(Dst, 1659, Dt9([0]));
#line 654 "jitx64.desc"
      }break;

    default:{
        //| mov ea_index, 1
        //|1:
        //| cmp ea_size, SIZEOF_LENGTH
        //| jl =>(label_return_error)
        //| sub ea_size, SIZEOF_LENGTH
        //| add ea_buffer, SIZEOF_LENGTH
        //| _call_cb ENCODE_CB, ENCODE_UD, f->name, type, ea_index, f->st, ea_buffer, _set_rg_value, ea_size, r10d
        //| cmp r10d, 0
        //| jl =>(label_return_error)
        //| je >2
        //| sub ea_buffer, SIZEOF_LENGTH
        //| _fill_size ea_buffer, r10d, eax
        dasm_put(Dst, 1686, SIZEOF_LENGTH, (label_return_error), SIZEOF_LENGTH, SIZEOF_LENGTH, (unsigned int)((uintptr_t)f->name), (unsigned int)(((uintptr_t)f->name)>>32), (unsigned int)((uintptr_t)f->st), (unsigned int)(((uintptr_t)f->st)>>32), type, (label_return_error), SIZEOF_LENGTH);
#line 669 "jitx64.desc"
        //| add ea_buffer, SIZEOF_LENGTH
        //| add ea_buffer, r10
        //| sub ea_size, r10
        //| inc ea_index
        //| jmp <1
        //|
        //|2:
        //| sub ea_buffer, SIZEOF_LENGTH
        dasm_put(Dst, 1807, Dt9([0]), Dt9([1]), Dt9([2]), Dt9([3]), SIZEOF_LENGTH, SIZEOF_LENGTH, SIZEOF_LENGTH);
#line 677 "jitx64.desc"
      }break;
  }

  //| sub ea_buffer, DATA
  //| sub ea_buffer, SIZEOF_LENGTH
  //| cmp ea_buffer, 0
  //| je >1
  //| _fill_size DATA, r15d, sz
  //| jmp >2
  //|1:
  //| mov sz, 0
  dasm_put(Dst, 1895, SIZEOF_LENGTH, Dt2([0]), Dt2([1]), Dt2([2]), Dt2([3]), SIZEOF_LENGTH);
#line 688 "jitx64.desc"
  //|2:
  dasm_put(Dst, 2003);
#line 689 "jitx64.desc"

  return 1;
}

static int 
_gen_encode_type(struct sproto_type* st){
  assert(SIZEOF_FIELD == 2);
  int header_sz = SIZEOF_HEADER + st->maxn * SIZEOF_FIELD;

  dasm_growpc(Dst, ++maxpc);
  unsigned int label_return_error = maxpc-1;

  //| cmp ENCODE_SIZE, header_sz
  //| jl =>(label_return_error)
  //|
  //| mov DATA, HEADER
  //| add DATA, header_sz
  //| sub ENCODE_SIZE, header_sz
  dasm_put(Dst, 2012, header_sz, (label_return_error), header_sz, header_sz);
#line 707 "jitx64.desc"

  void* tmp_u = &(jit_instance.tmp_u);
  int size_u = sizeof(jit_instance.tmp_u);

  
  int i;

  //|.define index,   rbx
  //|.define lasttag, r13
  //| xor index, index
  //| mov lasttag, -1
  dasm_put(Dst, 2034);
#line 718 "jitx64.desc"

  for(i=0; i<st->n; i++){
    struct field *f = &st->f[i];
    int _tag = f->tag;
    int type = f->type;
    dasm_growpc(Dst, maxpc+=9);

    //|.define datasz, r15 
    //|.define tag,    r11
    //|.define value, r12d
    //|.define value64, r12

    //| xor r11, r11
    //| xor r12, r12
    //| mov sz, -1
    //| xor value, value
    dasm_put(Dst, 2049);
#line 734 "jitx64.desc"

    if(type & SPROTO_TARRAY){
      int ret = _gen_encode_array(f, label_return_error);
      if(!ret) return ret;
    } else {
      switch(type){
        case SPROTO_TINTEGER:
        case SPROTO_TBOOLEAN:{
          //| _call_cb ENCODE_CB, ENCODE_UD, f->name, type, 0, NULL, tmp_u, _set_imm_value, size_u, sz
          //| cmp sz, 0
          //| jl =>(label_return_error)
          //| je =>(maxpc-2)
          //| cmp sz, sizeof(uint32_t)
          //| jne =>(maxpc-3)
          //|
            //| _gt_u32 value
            //| cmp value, 0
            //| jl =>(maxpc-4)
            //| inc value
            dasm_put(Dst, 2069, size_u, (unsigned int)((uintptr_t)f->name), (unsigned int)(((uintptr_t)f->name)>>32), (unsigned int)((uintptr_t)NULL), (unsigned int)(((uintptr_t)NULL)>>32), (unsigned int)((uintptr_t)tmp_u), (unsigned int)(((uintptr_t)tmp_u)>>32), type, (label_return_error), (maxpc-2), sizeof(uint32_t), (maxpc-3), (unsigned int)((uintptr_t)&(jit_instance)), (unsigned int)(((uintptr_t)&(jit_instance))>>32), Dt4(->tmp_u.u32), (maxpc-4));
#line 753 "jitx64.desc"
            //| sal value, 1
            //| mov sz, 2
            //| jmp =>(maxpc-5)
            //| 
            //|=>(maxpc-4):
            //| _encode_integer value, DATA, ENCODE_SIZE, sz
            dasm_put(Dst, 2171, (maxpc-5), (maxpc-4), SIZEOF_LENGTH + sizeof(uint32_t), Dt2([4]), Dt2([5]), Dt2([6]), Dt2([7]), sizeof(uint32_t), sizeof(uint32_t), Dt2([0]), Dt2([1]), Dt2([2]), Dt2([3]));
#line 759 "jitx64.desc"
            //| xor value, value
            //| jmp =>(maxpc-5)
          //|
          //|=>(maxpc-3):
          //| cmp sz, sizeof(uint64_t)
          //| jne =>(label_return_error)
          //| _gt_u64, value64
          dasm_put(Dst, 2267, sizeof(uint32_t), SIZEOF_LENGTH, (maxpc-5), (maxpc-3), sizeof(uint64_t), (label_return_error), (unsigned int)((uintptr_t)&(jit_instance)), (unsigned int)(((uintptr_t)&(jit_instance))>>32));
#line 766 "jitx64.desc"
          //| _encode_uint64 value64, DATA, ENCODE_SIZE, sz
          dasm_put(Dst, 2342, Dt4(->tmp_u.u64), SIZEOF_LENGTH + sizeof(uint64_t), Dt2([4]), Dt2([5]), Dt2([6]), Dt2([7]), Dt2([8]), Dt2([9]), Dt2([10]), Dt2([11]), sizeof(uint64_t), sizeof(uint64_t), Dt2([0]), Dt2([1]));
#line 767 "jitx64.desc"
          //| xor value64, value64
          dasm_put(Dst, 2450, Dt2([2]), Dt2([3]), sizeof(uint64_t), SIZEOF_LENGTH);
#line 768 "jitx64.desc"
        }break;

        case SPROTO_TSTRING:{
          //| _encode_buffer ENCODE_CB, ENCODE_UD, SPROTO_TSTRING, f->name, NULL, DATA, ENCODE_SIZE, sz
          dasm_put(Dst, 2523, SIZEOF_LENGTH, SIZEOF_LENGTH, SIZEOF_LENGTH, (unsigned int)((uintptr_t)f->name), (unsigned int)(((uintptr_t)f->name)>>32), (unsigned int)((uintptr_t)NULL), (unsigned int)(((uintptr_t)NULL)>>32), SPROTO_TSTRING, SIZEOF_LENGTH, SIZEOF_LENGTH, Dt2([0]), Dt2([1]), Dt2([2]), Dt2([3]));
          dasm_put(Dst, 2659, SIZEOF_LENGTH);
#line 772 "jitx64.desc"
        }break;

        case SPROTO_TSTRUCT: {
          //| _encode_buffer ENCODE_CB, ENCODE_UD, SPROTO_TSTRUCT, f->name, f->st, DATA, ENCODE_SIZE, sz
          dasm_put(Dst, 2523, SIZEOF_LENGTH, SIZEOF_LENGTH, SIZEOF_LENGTH, (unsigned int)((uintptr_t)f->name), (unsigned int)(((uintptr_t)f->name)>>32), (unsigned int)((uintptr_t)f->st), (unsigned int)(((uintptr_t)f->st)>>32), SPROTO_TSTRUCT, SIZEOF_LENGTH, SIZEOF_LENGTH, Dt2([0]), Dt2([1]), Dt2([2]), Dt2([3]));
          dasm_put(Dst, 2659, SIZEOF_LENGTH);
#line 776 "jitx64.desc"
        }break;

        default:
          return 0;
      }
      //|=>(maxpc-5): // switch end
      dasm_put(Dst, 674, (maxpc-5));
#line 782 "jitx64.desc"
    }
    
    //| cmp sz, 0
    //| jl =>(label_return_error)
    //| je =>(maxpc-2)
    //|
      //| cmp value, 0
      //| jne =>(maxpc-7)
      //| add DATA, sz_64
      //| sub ENCODE_SIZE, sz_64
      //|=>(maxpc-7): 
      //| mov RECORD, index
      //| sal RECORD, 1  // for replace imul RECORD, SIZEOF_FIELD
      //| add RECORD, SIZEOF_HEADER
      //| add RECORD, HEADER
      //| mov tag, _tag
      //| sub tag, lasttag
      //| sub tag, 1
      //| cmp tag, 0
      //| jle =>(maxpc-6)
      //|
        //| dec tag
        //| sal tag, 1
        //| inc tag
        //| cmp tag, 0xffff
        //| jle =>(maxpc-8)
          //| jmp =>(label_return_error)
        //|=>(maxpc-8):
        //| mov rax, tag
        //| mov RECORD[0], al
        //| shr rax, 8
        //| mov RECORD[1], al
        //| inc index
        //| add RECORD, SIZEOF_FIELD
      //|
      //|=>(maxpc-6):
      //| inc index
      dasm_put(Dst, 2715, (label_return_error), (maxpc-2), (maxpc-7), (maxpc-7), SIZEOF_HEADER, _tag, (maxpc-6), (maxpc-8), (label_return_error), (maxpc-8), Dt3([0]), Dt3([1]), SIZEOF_FIELD, (maxpc-6));
#line 819 "jitx64.desc"
      //| mov eax, value
      //| mov RECORD[0], al
      //| shr eax, 8  
      //| mov RECORD[1], al
      //| mov lasttag, _tag
    //| 
    //|=>(maxpc-2): // for next
    dasm_put(Dst, 2829, Dt3([0]), Dt3([1]), _tag, (maxpc-2));
#line 826 "jitx64.desc"
  }
  //| mov rax, index
  //| mov HEADER[0], al
  //| shr rax, 8
  //| mov HEADER[1], al
  //|
  //| mov datasz, DATA
  //| sub datasz, HEADER
  //| sub datasz, header_sz
  //| mov DATA, HEADER
  dasm_put(Dst, 2853, Dt1([0]), Dt1([1]), header_sz);
#line 836 "jitx64.desc"

  //| add DATA, header_sz
  //|
  //| mov rcx, index
  //| sal index, 1 // for replace  imul index, SIZEOF_FIELD
  //| cmp rcx, st->maxn
  //| je =>(maxpc-9)
  //|
    //|
    //| add HEADER, SIZEOF_HEADER
    //| add HEADER, index
    //| mov rdi, HEADER
    //| mov rsi, DATA
    //| mov rdx, datasz
    //| mov64 rax, (uintptr_t)memmove
    //| call rax
  //|
  //|=>(maxpc-9):
  //| add datasz, index
  //| add datasz, SIZEOF_HEADER
  //| _return, datasz
  //|
  //|=>(label_return_error):
  //| _return, -1
  dasm_put(Dst, 2884, header_sz, st->maxn, (maxpc-9), SIZEOF_HEADER, (unsigned int)((uintptr_t)memmove), (unsigned int)(((uintptr_t)memmove)>>32), (maxpc-9), SIZEOF_HEADER, (label_return_error));
#line 860 "jitx64.desc"

  return 1;
}

static void* 
_gen_decode(struct sproto_type* st){
  _new_env(Dst, actions);

  //| _pre
  dasm_put(Dst, 2961);
   int success = _gen_decode_type(st);
#line 870 "jitx64.desc"
  //|
  //| _ret
  dasm_put(Dst, 2979);
#line 872 "jitx64.desc"
  
  void* ret = (success)?(_jitcode_new(Dst)):(NULL);  
  _free_env(Dst);
  return ret;
}

static void* 
_gen_encode(struct sproto_type* st){
  _new_env(Dst, actions);

  //| _pre
  dasm_put(Dst, 2961);
   int success =  _gen_encode_type(st);
#line 884 "jitx64.desc"
  //|
  //| _ret
  dasm_put(Dst, 2979);
#line 886 "jitx64.desc"

  void* ret = (success)?(_jitcode_new(Dst)):(NULL);
  _free_env(Dst);
  return ret;
}
