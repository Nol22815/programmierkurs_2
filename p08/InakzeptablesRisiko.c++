#include "InakzeptablesRisiko.h"
#include <iomanip>

InakzeptablesRisiko::InakzeptablesRisiko(std::string bez, float ew, float kosten, std::string m) 
    : Risiko(bez, ew, kosten), massnahme(m) {}

float InakzeptablesRisiko::ermittleRueckstellung() const {
    return berechneRisikowert();
}

void InakzeptablesRisiko::druckeDaten() const {
    std::cout << "Id " << getId() 
              << " Inakzeptables Risiko \"" << getBezeichnung() 
              << "\" aus " << getErstellungsdatum() << ";\n"
              << "Risikowert " << std::fixed << std::setprecision(2) << berechneRisikowert() 
              << "; Rueckstellung " << ermittleRueckstellung() << ";\n"
              << "Massnahme \"" << massnahme << "\"" << std::endl;
}