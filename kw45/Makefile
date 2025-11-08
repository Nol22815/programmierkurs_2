main: libmy.a main.c
	gcc main.c -L. -lmy -o main -lm

dictionary.o:
	gcc -c dictionary.c

list.o:
	gcc -c list.c

libmy.a: list.o dictionary.o
	ar r libmy.a *.o

clean:
	rm *.o main libmy.a
