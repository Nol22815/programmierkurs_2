#ifndef EXTREMESRISIKO_H
#define EXTREMESRISIKO_H

#include "InakzeptablesRisiko.h"

class ExtremesRisiko : public InakzeptablesRisiko {
private:
    float versicherungsbeitrag;

public:
    ExtremesRisiko(std::string bez, float ew, float kosten, std::string m, float beitrag);

    float ermittleRueckstellung() const override;
    void druckeDaten() const override;
};

#endif