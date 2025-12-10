#include <iostream>
#include "Risiko.h"
#include "AkzeptablesRisiko.h"
#include "InakzeptablesRisiko.h"
#include "ExtremesRisiko.h"

int main() {
    const int ANZAHL = 3;
    Risiko* risiken[ANZAHL];
    risiken[0] = new AkzeptablesRisiko("Lizenzkosten der IDE steigen", 0.5f, 8000.0f);
    risiken[1] = new ExtremesRisiko("Hauptauftraggeber meldet Insolvenz an", 0.8f, 100000.0f, "Versicherung abschliessen", 50000.0f);
    risiken[2] = new InakzeptablesRisiko("DB Experte verlaesst das Projekt", 0.8f, 20000.0f, "Ersatz bei Dienstleister reservieren");

    for (int i = 0; i < ANZAHL; ++i) {
        risiken[i]->druckeDaten();
        std::cout << std::endl;
    }
    for (int i = 0; i < ANZAHL; ++i) {
        delete risiken[i];
    }
    return 0;
}