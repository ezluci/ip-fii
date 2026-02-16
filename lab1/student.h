#pragma once
#include "persoana.h"
#include <unordered_map>

class Materie;

class Student : public Persoana {
public:
   unordered_map<string, Materie*> materii;
   string nrMatricol;
   int an;
   string grupa;

   Student(string nume, string prenume, int anNastere,
         string nrMatricol, int an, string grupa);
};