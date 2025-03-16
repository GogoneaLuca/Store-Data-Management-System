Gogonea Luca 324AB
Am folosit VS Code, sistemul de operare Windows 11

In primul rand, as vrea sa dau un feedback scurt, tema aceasta pentru mine cel putin a fost in felul urmator: 40% pregatirea terenului (sa setez Vs code, sa instalez compilatorul, si tot ce mai era nevoie sa inteleg pentru a rula checkerul local), 50% sa inteleg cum functioneaza clasele(credeam ca stiu bine), mai exact cum sa repar erorile de compilare(care apareau mereu altele) si warning urile, si 10% a fost tema in sine, pentru ca parea foarte simpla de la inceput si pana la urma chiar asa a fost, dar a fost greu cu alte prostii.
Cred ca mi-a luat doar o zi, o zi si putin maxim, saptamana trecuta, ca sa fac tema in mare si strucuta, in rest nu m-am atins de ea sau am modificat doar putin.

Descrierea temei:
Aceasta tema reprezinta un program pentru gestionarea comenzilor intr-un magazin, care implica doua tipuri de fisiere de intrare:
Un fisier de stoc ce contine informatii despre produsele disponibile. Un fisier de clienti ce contine informatii despre comenzile plasate de clienti. Scopul principal al programului este sa citeasca datele din fisiere, sa genereze comenzile clientilor si sa actualizeze stocul de produse.Apoi scrie rezultatele in doua fisiere de iesire.

Am vrut sa iau ceea ce am facut in main si sa le bag in niste functii separate in functii.cpp, dar nu am reusit pana la urma ca am tot facut erori peste erori si dupa nu mai stiam nici sa ma intorc inapoi, dar am reusit si am zis sa las asa pt ca nu mai am timp.

Functia main:
primeste doua argumente la linia de comanda, care reprezinta numele fisierelor de intrare (f_in_Stoc pentru produse si f_in_Clienti pentru comenzi). Dupa ce deschide f_in_Stoc, programul citeste numarul total de produse si creeaza un vector dinamic de obiecte Produs.
Fiecare produs este initializat cu denumire, pret si cantitate citite din fisier.

Apoi deschide fisierele output_comenzi.txt si output_stoc_ramas.txt pentru a scrie datele rezultate si face procesarea comenzilor si actualizarea stocului.

Pentru fiecare client, programul citeste datele de identificare si data comenzii. Pentru fiecare produs din comanda, verifica disponibilitatea in stoc, actualizeaza stocul prin scaderea cantitatii comandate si adauga produsul la comanda curenta.

Scrierea stocului ramas:
Dupa procesarea tuturor comenzilor, se scriu informatiile actualizate despre fiecare produs din stoc adica denumirea produsului, cantitatea ramasa, pretul si acel i care reprezinta id ul pentru ca nu am reusit cu const int, am inteles cred abia la ultimul laborator.

Curatarea Memoriei si Inchiderea Fisierelor:
La final, toate obiectele alocate dinamic pentru produse sunt eliberate din memorie, si fisierele deschise sunt inchise pentru a preveni scurgerile de memorie si la inchiderea programului compilatorul (cred) apeleaza si destructorii ~

A fost fun tema, dar nu prea. Am invatat multe, dar au fost multi nervi la mijloc, asa mi-e felul.