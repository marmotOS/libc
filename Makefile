CC = gcc
CCFLAGS = -Wall -Werror -ggdb3 -I./src

HEADERS = $(wildcard ./src/*.h)
SRC     = $(wildcard ./src/*.c)
OBJ     = $(subst .c,.o,$(SRC))


all: shared static test

clean:
	rm -f $(OBJ) *.a *.o libc_test

test: $(OBJ) test/test.c
	$(CC) -o libc_test test/test.c $(OBJ)

%.o: %.c $(HEADERS) Makefile
	$(CC) $(CCFLAGS) -c $< -o $@