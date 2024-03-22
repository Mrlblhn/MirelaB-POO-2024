#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;
struct Persoana
{
	unsigned vs;
	char nume[20];
	char prenume[20];
};
class Pers
{
private:
	unsigned vs;
	char nume[20];
	char prenume[20];
public:
	// 2 metode cu acelasi nume cu cel al clasei, adica Pers
	// o metoda cu paramas si una fara paramas
	Pers(unsigned vs1, char* num1, char* prenume1)
	{
		vs = vs1;
		strcpy_s(nume, 20, num1);
		strcpy_s(prenume, 20, prenume1);

	}
	Pers() {}
	unsigned arata_vs() {return this->vs;}
	char* arata_nume() { return this->nume; }

};
int main()
{

Console::WriteLine("Introduceti numarul de persoane: ");
int nr_persoane;
cin >> nr_persoane;
Persoana* persoane = new Persoana[nr_persoane];
for (int i = 0; i < nr_persoane; i++); {
	Console::WriteLine("Introduceti numele persoanei {0}: ", i + 1);
	char nume[20];
	cin >> nume;
	Console::Write("Introduceti prenumele persoanei {0}: ", i + 1);
	char prenume[20];
	cin >> prenume;
	strcpy_s(persoane[i].nume, 20, nume);
	Console::WriteLine("Introduceti varsta persoanei {0}: ", i + 1);
	unsigned vs;
	cin >> vs
	persoane[i].vs = vs;
}
	Console::WriteLine("Afisamn numele persoanelor sivarstelor aferente: ");
	for (int i = 0; i < nr_persoane, i++) {
		cout << persoane[i].nume << "\t" << persoane[i].vs << endl;
		Console::ReadKey();
	}
}
