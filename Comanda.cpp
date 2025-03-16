#include "Comanda.h"



Comanda::Comanda(int id, int zi, int luna, int an, int nrProduse, Produs* produse)
    : id(id), zi(zi), luna(luna), an(an), nrProduse(nrProduse) {  //, produse(produse) {
    this->produse = new Produs[nrProduse];
     for (int i = 0; i < nrProduse; i++) {
         this->produse[i] = produse[i];
     }
}

// void Comanda::adaugaProdus(int index, Produs* produs, int k, int cantitate)
// {
//     produse[index] = &(produs[k]);
//     cantitate_produs[index] = cantitate;
// }

Comanda::~Comanda() {
    delete[] produse;
}

void Comanda::scrieInFisier(ofstream& fisier) const {
    //if(id) fisier << "\n";
    fisier << "Comanda ID: " << id << "\n";
    fisier << "Data comenzii: " << zi << "/" << luna << "/" << an << "\n"
           << "Produse comandate:\n";
    for (int i = 0; i < nrProduse; i++) 
    {
        fisier << produse[i].getCantitate() << " X " << produse[i].getDenumire()
               << " (" << produse[i].getPret() << ")\n";
    }
    fisier << "Total comanda: " << calculeazaTotal() << " RON\n";
}

float Comanda::calculeazaTotal() const {
    float total = 0;
    for (int i = 0; i < nrProduse; i++) {
        total += produse[i].getCantitate() * produse[i].getPret();
    }
    return total;
}
