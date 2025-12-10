#include "AkzeptablesRisiko.h"
#include <iomanip>

AkzeptablesRisiko::AkzeptablesRisiko(std::string bez, float ew, float kosten) 
    : Risiko(bez, ew, kosten) {}

float AkzeptablesRisiko::ermittleRueckstellung() const {
    return 0.0f;
}

void AkzeptablesRisiko::druckeDaten() const {
    std::cout << "Id " << getId() 
              << " Akzeptables Risiko \"" << getBezeichnung() 
              << "\" aus " << getErstellungsdatum() << "\n"
              << "Risikowert " << std::fixed << std::setprecision(2) << berechneRisikowert() 
              << "; Rueckstellung " << ermittleRueckstellung() << std::endl;
}