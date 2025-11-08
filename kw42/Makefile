main: libmy.a main.c 
	gcc main.c -L. -lmy -o main -lm

upper.o:
	gcc -c upper.c

queue.o:
	gcc -c queue.c

libmy.a: upper.o queue.o
	ar r libmy.a *.o

clean: 
	rm *.o main libmy.a
