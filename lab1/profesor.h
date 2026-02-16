#pragma once
#include "persoana.h"
#include <unordered_map>

class Materie;

class Profesor : public Persoana {
public:
   int id;
   unordered_map<int, Materie*> materii;

   Profesor(int id, string nume, string prenume, int anNastere);

   void adaugaNota(int materieId, string studentMatricol, string tipNota, float nota);

   float calculeazaMedie(int materieId, string studentMatricol);
};