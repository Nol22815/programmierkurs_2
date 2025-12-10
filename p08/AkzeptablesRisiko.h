#ifndef AKZEPTABLESRISIKO_H
#define AKZEPTABLESRISIKO_H

#include "Risiko.h"

class AkzeptablesRisiko : public Risiko {
public:
    AkzeptablesRisiko(std::string bez, float ew, float kosten);
    
    float ermittleRueckstellung() const override;
    void druckeDaten() const override;
};

#endif