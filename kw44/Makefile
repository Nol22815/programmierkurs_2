main: libmy.a main.c 
	gcc main.c -L. -lmy -o main -lm

dictionary.o:
	gcc -c dictionary.c

libmy.a: dictionary.o
	ar r libmy.a *.o

clean: 
	rm *.o main libmy.a
