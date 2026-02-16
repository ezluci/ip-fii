#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include "materie.h"
#include "profesor.h"
#include "facultate.h"
using namespace std;

class BD : public Materie {
public:
   BD(int id, int anDeStudiu, string nume, int credite,
         unordered_map<int, Profesor*> titulariCurs, Facultate *facultate)
      : Materie(id, anDeStudiu, nume, credite, titulariCurs, facultate)
   { }

   float evaluare(string studentMatricol) {
      auto &notele = note[studentMatricol];
      return notele["test1"] * 0.25 + notele["test2"] * 0.25 + notele["examen"] * 0.5;
   }
};

int main()
{
   Facultate *facultate = new Facultate();

   facultate->adaugaStudent("31091179RSLAVENITALEX", 2, "A1", "alexandru", "daniel", 2005);
   facultate->adaugaStudent("31091180RSLAVENITALEX", 3, "E2", "dani", "daniel", 2002);
   facultate->adaugaStudent("31091181RSLAVENITALEX", 1, "67", "bogdan", "daniel", 2003);
   facultate->adaugaStudent("31091182RSLAVENITALEX", 2, "B6", "ez", "daniel", 2001);
   facultate->adaugaProfesor(1, "mocanu", "luciana", 1998);
   facultate->adaugaProfesor(2, "alexandra", "ciocanu", 1994);

   auto &profesori = facultate->profesori;
   unordered_map<int, Profesor*> titulari_curs;
   titulari_curs[profesori[0]->id] = profesori[0];
   titulari_curs[profesori[1]->id] = profesori[1];

   BD *bd = new BD(1, 2, "BD", 6, titulari_curs, facultate);
   for (auto profesor : titulari_curs) {
      profesor.second->materii[bd->id] = bd;
   }

   profesori[0]->adaugaNota(1, "31091179RSLAVENITALEX", "test1", 10);
   profesori[0]->adaugaNota(1, "31091179RSLAVENITALEX", "test2", 8);
   profesori[0]->adaugaNota(1, "31091179RSLAVENITALEX", "examen", 10);

   std::cout << profesori[0]->calculeazaMedie(bd->id, "31091179RSLAVENITALEX") << '\n';

   delete facultate;
}