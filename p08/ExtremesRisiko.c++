#include "ExtremesRisiko.h"
#include <iomanip>
#include <iostream>

ExtremesRisiko::ExtremesRisiko(std::string bez, float ew, float kosten, std::string m, float beitrag) 
    : InakzeptablesRisiko(bez, ew, kosten, m), versicherungsbeitrag(beitrag) {}

float ExtremesRisiko::ermittleRueckstellung() const {
    return versicherungsbeitrag;
}

void ExtremesRisiko::druckeDaten() const {
    std::cout << "Id " << getId() 
              << " ExtremesRisiko \"" << getBezeichnung() 
              << "\" aus " << getErstellungsdatum() << ";\n"
              << "Versicherungsbeitrag " << std::fixed << std::setprecision(2) << versicherungsbeitrag
              << "; Massnahme \"" << getMassnahme() << "\"" << std::endl;
}