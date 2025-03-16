#ifndef CLIENT_H
#define CLIENT_H
using namespace std;
#include "Comanda.h"
#include <iostream>
#include <cstring>
#include <fstream>

class Client {
private:
    char nume[60];  // Numele clientului
    Comanda comanda; //comanda clientului

public:
    Client();
    Client(const char* nume, const Comanda comanda);
    ~Client();
    const char* getNume();
    void setNume(const char* numeNou);
    Comanda getComanda();
    void setComanda(const Comanda& comanda);

    void scrie(ofstream& fisier) const;
};

#endif