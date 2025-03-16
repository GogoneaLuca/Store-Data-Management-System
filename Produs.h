#ifndef PRODUS_H
#define PRODUS_H
using namespace std;
#include <iostream>
#include <cstring>
#include <fstream>


class Produs {
    const int id;           // Cod unic al produsului
    char denumire[50];      // Denumirea produsului (șir de caractere)
    float pret;             // Prețul produsului
    int cantitate;          // Cantitatea pe stoc a produsului

public:
    Produs();
    Produs(const int id, const char* denumire,const float &pret,const int &cantitate);
    //Produs(const char* denumire, const int &cantitate);
    Produs(const Produs& other);
    ~Produs();
    int getId() const;
    const char* getDenumire() const;
    float getPret() const;
    int getCantitate() const;
    void setCantitate(int cantitate);
    void setDenumire(const char *denumireNou);
    void setPret(float pret);
    Produs& operator=(const Produs& other);

    void scrieInFisier(ofstream& fisier, const int id) const;
};

#endif
