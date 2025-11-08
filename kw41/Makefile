main: libmy.a main.c
	gcc main.c -L. -lmy -o main -lm
	#-lm muss ans Ende sonst funktioniert es nicht

printAscii.o: printAscii.c printAscii.h
	gcc -c printAscii.c

einMalEins.o: einMalEins.c einMalEins.h 
	gcc -c einMalEins.c

dualZahl.o: dualZahl.c dualZahl.h
	gcc -c dualZahl.c

libmy.a: printAscii.o einMalEins.o dualZahl.o
	ar r libmy.a *.o

clean: 
	rm *.o main libmy.a
