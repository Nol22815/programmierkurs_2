#ifndef INAKZEPTABLESRISIKO_H
#define INAKZEPTABLESRISIKO_H

#include "Risiko.h"

class InakzeptablesRisiko : public Risiko {
private:
    std::string massnahme;

public:
    InakzeptablesRisiko(std::string bez, float ew, float kosten, std::string m);

    float ermittleRueckstellung() const override;
    void druckeDaten() const override;

    inline std::string getMassnahme() const { return massnahme; }
};

#endif