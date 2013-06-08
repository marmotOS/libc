# Test Makefile
#
# Bryant Moscon - June 2013
#

test: assert.o test.c
	gcc -ggdb3 -Wall -I../src/ -o test test.c assert.o

assert.o: ../src/assert.c ../src/assert.h
	gcc -ggdb3 -Wall -I../src/ -c -o assert.o ../src/assert.c

clean:
	rm *.o test