all: dsPerfTest

dsPerfTest: perf_main.c libmydslib.a
	gcc -lm -o dsPerfTest perf_main.c -L. -lmydslib -I include/

sllist.o: src/sllist.c include/sllist.h
	gcc -O -c src/sllist.c -I./include

dllist.o: src/dllist.c include/dllist.h
	gcc -O -c src/dllist.c -I./include

stack.o: src/stack.c include/stack.h
	gcc -O -c src/stack.c -I./include

queue.o: src/queue.c include/queue.h
	gcc -O -c src/queue.c -I./include

bst.o: src/bst.c include/bst.h
	gcc -O -c src/bst.c -I./include

vector.o: src/vector.c include/vector.h
	gcc -O -c src/vector.c -I./include

libmydslib.a: sllist.o dllist.o stack.o queue.o bst.o vector.o #let's link library files into a static library
	ar rcs libmydslib.a sllist.o stack.o dllist.o queue.o bst.o vector.o

clean:
	rm -f dsPerfTest *.o *.a *.gch #This way is cleaner than your clean
