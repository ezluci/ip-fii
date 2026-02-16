#include "materie.h"
#include "facultate.h"
#include "student.h"
#include <string>
using namespace std;

Materie::Materie(int id, int anDeStudiu, string nume, int credite,
      unordered_map<int, Profesor*> titulariCurs, Facultate *facultate) {
   this->id = id;
   this->anDeStudiu = anDeStudiu;
   this->nume = nume;
   this->credite = credite;
   this->titulariCurs = titulariCurs;

   for (const auto &student : facultate->studentiAn[anDeStudiu]) {
      this->note[student->nrMatricol] = unordered_map<string, float>();
   }
   facultate->materii.push_back(this);
}