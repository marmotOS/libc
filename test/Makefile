# Test Makefile
#
# Bryant Moscon - June 2013
#

test: assert.o ctype.o test.c
	gcc -ggdb3 -Wall -I../src/ -o test test.c assert.o ctype.o

assert.o: ../src/assert.c ../src/assert.h
	gcc -ggdb3 -Wall -I../src/ -c -o assert.o ../src/assert.c

ctype.o: ../src/ctype.c ../src/ctype.h
	gcc -ggdb3 -Wall -I../src/ -c -o ctype.o ../src/ctype.c


clean:
	rm *.o test
