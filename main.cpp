#include "Produs.h"     
#include "Comanda.h"
#include "functii.h"
using namespace std;

   

int main(int argc, char* argv[]) {

    //cout << argv[1] << endl;
    //cout << argv[2] << endl;  
    ifstream f_in_Stoc(argv[1]);
    ifstream f_in_Clienti(argv[2]);

    int numarProduse;
    
     //iau stocul
    f_in_Stoc >> numarProduse;
    Produs* produse = new Produs[numarProduse];
    for (int i = 0; i < numarProduse; i++) 
    {
        int id, cantitate;
        float pret;
        char denumire[50];
        f_in_Stoc >> denumire >> pret >> cantitate;
        //id = i;
        // produse[i].setDenumire(denumire);
        // produse[i].setCantitate(cantitate);
        // produse[i].setPret(pret);
        produse[i] = Produs(id, denumire, pret, cantitate);
    }
    cout<<numarProduse<<" ";

    ofstream fisierOutputComenzi("output_comenzi.txt");
    ofstream fisierOutputStoc("output_stoc_ramas.txt");

    //fac comenzile
    int numarClienti;
    f_in_Clienti >> numarClienti;
    if (f_in_Clienti.eof())
    {
       fisierOutputComenzi << "Nu exista clienti in magazin.";
    } else 
    {
        for (int i = 0; i < numarClienti; i++) 
        {
            int id, zi, luna, an, nrProduse;
            id = i;
            char numeClient[60];
            f_in_Clienti >> ws;
            f_in_Clienti.getline(numeClient, 60);
            if(id) fisierOutputComenzi << "\n";
            fisierOutputComenzi << "Nume: " << numeClient << "\n";
            f_in_Clienti >> zi >> luna >> an >> nrProduse;
            Produs* lista = new Produs[nrProduse];
            for (int j=0; j<nrProduse; j++)
            {
                int cantitate, id2;
                float pret ;
                char denumire[50];
                f_in_Clienti >> ws >> denumire;
                f_in_Clienti >> cantitate;
                //scad din stoc
                for (int k=0; k<numarProduse; k++){
                    if (strcmp(produse[k].getDenumire(), denumire) == 0){
                        pret = produse[k].getPret();
                        produse[k].setCantitate(produse[k].getCantitate()-cantitate);
                        break;
                    }
                }
                lista[j] = Produs(id2, denumire, pret, cantitate);
            }
            Comanda clienti(id, zi, luna, an, nrProduse, lista);
            clienti.scrieInFisier(fisierOutputComenzi);
            delete[] lista;
        }
    }

    fisierOutputStoc << "Stoc ramas";
    for (int i = 0; i < numarProduse; i++) {
        produse[i].scrieInFisier(fisierOutputStoc, i);
    }

    f_in_Stoc.close();
    f_in_Clienti.close();
    fisierOutputComenzi.close();
    fisierOutputStoc.close();

    return 0;
}