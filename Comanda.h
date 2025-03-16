#ifndef COMANDA_H
#define COMANDA_H
using namespace std;
#include "Produs.h"
#include <iostream>
#include <cstring>
#include <fstream>

class Comanda {
protected:
    int id;
    int zi, luna, an;             
    int nrProduse;               
    Produs* produse;              

public:
    Comanda (){};
    Comanda(int id, int zi, int luna, int an, int nrProduse, Produs* produse);
    ~Comanda();
    void scrieInFisier(ofstream& fisier) const;
    float calculeazaTotal() const;

    Produs* getProduse() const {
        return produse;
    }
};

#endif
