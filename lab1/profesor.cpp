#include "profesor.h"
#include "materie.h"

Profesor::Profesor(int id, string nume, string prenume, int anNastere)
   : Persoana(nume, prenume, anNastere)
{
   this->id = id;
}

void Profesor::adaugaNota(int materieId, string studentMatricol, string tipNota, float nota) {
   materii[materieId]->note[studentMatricol][tipNota] = nota;
}

float Profesor::calculeazaMedie(int materieId, string studentMatricol) {
   return materii[materieId]->medii[studentMatricol] = materii[materieId]->evaluare(studentMatricol);
}