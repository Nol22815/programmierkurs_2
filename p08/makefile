main: main.c++ Risiko.o AkzeptablesRisiko.o InakzeptablesRisiko.o ExtremesRisiko.o
	g++ -o main main.c++ Risiko.o AkzeptablesRisiko.o InakzeptablesRisiko.o ExtremesRisiko.o

Risiko.o: Risiko.c++
	g++ -c Risiko.c++

AkzeptablesRisiko.o: AkzeptablesRisiko.c++
	g++ -c AkzeptablesRisiko.c++

InakzeptablesRisiko.o: InakzeptablesRisiko.c++
	g++ -c InakzeptablesRisiko.c++

ExtremesRisiko.o: ExtremesRisiko.c++
	g++ -c ExtremesRisiko.c++

clean:
	rm main Risiko.o AkzeptablesRisiko.o InakzeptablesRisiko.o ExtremesRisiko.o