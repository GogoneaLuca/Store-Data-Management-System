#include "Client.h"

Client::Client(){}

// Client::Client(const char* nume,const Comanda comanda)
// {
//     if (nume != NULL) {
//         //this->nume = new char[strlen(nume) + 1];
//         strcpy(this->nume, nume);
//     } else {
//         //this->nume = NULL;
//     }
//     this->comanda = comanda;
// }

Client::~Client() {

}



const char* Client::getNume()
{
    return nume;
}

void Client::setNume(const char* numeNou)
{
    if(nume==NULL)  return;
    strcpy(nume,numeNou);
}

Comanda Client::getComanda()
{
    return comanda;
}

void Client :: setComanda(const Comanda& comanda)
{
    this->comanda=comanda;
}