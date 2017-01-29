CC = gcc
CCFLAGS = -Wall -Werror -ggdb3 -I./src -fPIC
AR = ar

HEADERS = $(wildcard ./src/*.h)
SRC     = $(wildcard ./src/*.c)
OBJ     = $(subst .c,.o,$(SRC))
NAME    = libc
A       = $(NAME).a
SO      = $(NAME).so

all: shared static test

clean:
	rm -f $(OBJ) *.a *.so libc_test

static: $(OBJ)
	$(AR) -cvq $(A) $(OBJ)

shared: $(OBJ)
	$(CC) -shared -o $(SO) -Wl,-soname,$(SO) $(OBJ)

test: $(OBJ) test/test.c
	$(CC) -o libc_test test/test.c $(OBJ)

%.o: %.c $(HEADERS) Makefile
	$(CC) $(CCFLAGS) -c $< -o $@