main: Main.cpp List.h Risiko.o AkzeptablesRisiko.o InakzeptablesRisiko.o ExtremesRisiko.o
	g++ -o main -std=c++17 Main.cpp Risiko.o AkzeptablesRisiko.o InakzeptablesRisiko.o ExtremesRisiko.o

Risiko.o: ../p08/Risiko.c++
	g++ -c ../p08/Risiko.c++

AkzeptablesRisiko.o: ../p08/AkzeptablesRisiko.c++
	g++ -c ../p08/AkzeptablesRisiko.c++

InakzeptablesRisiko.o: ../p08/InakzeptablesRisiko.c++
	g++ -c ../p08/InakzeptablesRisiko.c++

ExtremesRisiko.o: ../p08/ExtremesRisiko.c++
	g++ -c ../p08/ExtremesRisiko.c++

clean:
	rm *.o
