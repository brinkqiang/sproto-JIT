CC = gcc
UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S), Linux)
	CFLAG += -fPIC
else ifeq ($(UNAME_S), Darwin)
	CFLAG += -fPIC  -dynamiclib -Wl,-undefined,dynamic_lookup
endif


.PHONY : all  clean
all : sproto.so

sproto.so : sproto.c lsproto.c sproto_jit.c
	CC -g  -o2 -Wall --shared $(CFLAG) -o $@ $^


clean :
	rm -f sproto.so
