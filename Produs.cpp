#include "Produs.h"

Produs::Produs() : id(0), denumire(), pret(0), cantitate(0) {}

Produs::Produs(const int id, const char* denumire,const float &pret,const int &cantitate) 
        : id(id), pret(pret), cantitate(cantitate)
    {
        //this->id=id;
        //strncpy(this->denumire, denumire, sizeof(this->denumire) - 1);
        //this->denumire[sizeof(this->denumire) - 1] = '\0';
        strcpy(this->denumire, denumire);
        //if (denumire != nullptr) {
            //this->denumire = new char[strlen(denumire) + 1];
            
        // } else {
        //     this->denumire = nullptr;
        // }
    }

// Produs::Produs(const char* denumire, const int &cantitate)
// : cantitate(cantitate)
//     {
//         if (denumire != nullptr) {
//             this->denumire = new char[strlen(denumire) + 1];
//             strcpy(this->denumire, denumire);
//         } else {
//             this->denumire = nullptr;
//         }
//     }

Produs::Produs(const Produs& other) 
    : id(other.id), pret(other.pret), cantitate(other.cantitate) 
{
    strncpy(this->denumire, other.denumire, sizeof(this->denumire) - 1);
    this->denumire[sizeof(this->denumire) - 1] = '\0';
    // if (other.denumire != nullptr) {
    //     this->denumire = new char[strlen(other.denumire) + 1];
         
    // } else {
    //     this->denumire = nullptr;
    // }
}

Produs::~Produs() {
        //delete[] denumire;
}

int Produs::getId() const {
    return id;
}

const char* Produs::getDenumire() const {
    return denumire;
}

float Produs::getPret() const {
    return pret;
}

int Produs::getCantitate() const {
    return cantitate;
}

void Produs::setCantitate(int cantitateNoua) {
    cantitate = cantitateNoua;
}

void Produs::setDenumire(const char *denumireNou){
    strcpy(denumire, denumireNou);
}

void Produs::setPret(float pretNou){
    pretNou = pret;
}
Produs& Produs::operator=(const Produs& other)
{
    //delete[] denumire;
    // if (other.denumire != nullptr) {
    //     denumire = new char[strlen(other.denumire) + 1];
    strncpy(this->denumire, other.denumire, sizeof(this->denumire) - 1);
    this->denumire[sizeof(this->denumire) - 1] = '\0';
    // } else {
    //     denumire = nullptr;
    // }
    this->pret = other.pret;
    this->cantitate = other.cantitate;
    return *this;
}

void Produs::scrieInFisier(ofstream& fisier, const int id) const {
    if (denumire != nullptr) {
        fisier << "\n" << id << ". " << denumire << ": " << cantitate << ", Pret: " << pret ;
    }
}