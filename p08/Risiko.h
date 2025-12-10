#ifndef RISIKO_H
#define RISIKO_H

#include <string>
#include <iostream>

class Risiko {
private:
    const int id; 
    std::string bezeichnung;
    float eintrittswahrscheinlichkeit;
    float kosten_im_schadensfall;
    std::string erstellungsdatum;
    
    static int idCounter;

public:
    Risiko(std::string bez, float ew, float kosten);
    virtual ~Risiko();

    float berechneRisikowert() const;

    virtual float ermittleRueckstellung() const = 0;
    virtual void druckeDaten() const = 0;

    inline int getId() const { return id; }
    inline std::string getBezeichnung() const { return bezeichnung; }
    inline std::string getErstellungsdatum() const { return erstellungsdatum; }
    inline float getEintrittswahrscheinlichkeit() const { return eintrittswahrscheinlichkeit; }
    inline float getKostenImSchadensfall() const { return kosten_im_schadensfall; }
};

#endif