#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;

struct Carti {

    unsigned an;
    char nume[20];
    char autor[20];
    unsigned vechime;
};
class Carte
{
public:
    unsigned an;
    char nume[20];
    char autor[20];
    unsigned vechime;
    Carte(unsigned an1, char* num1, char* autor1)
    {
        an = an1;
        strcpy_s(nume, 20, num1);
        strcpy_s(autor, 20, autor1);
    }
    Carte() {}
    unsigned arata_an() { return this->an; }
    char* arata_nume() { return this->nume; }
};

int main()
{
    Console::WriteLine("Introduceti numarul de carti: ");
    int nr_carti;
    cin >> nr_carti;
    Carte* carti = new Carte[nr_carti];
    for (int i = 0; i < nr_carti; i++) {
        Console::WriteLine("Introduceti titlul cartii {0}: ", i + 1);
        char nume[20];
        cin >> nume;
        strcpy_s(carti[i].nume, 20, nume);
        Console::WriteLine("Introduceti numele autorului {0}: ", i + 1);
        char autor[20];
        cin >> autor;
        strcpy_s(carti[i].autor, 20, autor);
        Console::WriteLine("Introduceti anul aparitiei {0}: ", i + 1);
        unsigned an;
        cin >> an;
        carti[i].an = an;
        carti[i].vechime = 2024 - an;
    }
    Console::WriteLine("Afisam titlul cartilor, numele autorilor si anul aparitiei: ");
    for (int i = 0; i < nr_carti; i++) {
        cout << carti[i].nume << "\t" << carti[i].autor << "\t" << carti[i].an << "\t" << carti[i].vechime << endl;
    }
    Console::ReadKey();

}