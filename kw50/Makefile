main: Main.cpp List.h Risko.o AkzeptablesRisiko.o InakzeptablesRisiko.o ExtremesRisiko.o
	g++ -o main -std=c++17 Main.cpp List.o Risiko.o AkzeptablesRisiko.o InakzeptablesRisiko.o ExtremesRisiko.o

List.o:
	g++ -c -std=c++17 List.cpp
Risiko.o: Risiko.c++Ex
	g++ -c Risiko.c++

AkzeptablesRisiko.o: AkzeptablesRisiko.c++
	g++ -c AkzeptablesRisiko.c++

InakzeptablesRisiko.o: InakzeptablesRisiko.c++
	g++ -c InakzeptablesRisiko.c++

ExtremesRisiko.o: ExtremesRisiko.c++
	g++ -c ExtremesRisiko.c++

clean:
	rm *.o
