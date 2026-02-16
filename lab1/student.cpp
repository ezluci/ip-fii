#include "student.h"

Student::Student(string nume, string prenume, int anNastere,
      string nrMatricol, int an, string grupa)
   : Persoana(nume, prenume, anNastere)
{
   this->nrMatricol = nrMatricol;
   this->an = an;
   this->grupa = grupa;
}