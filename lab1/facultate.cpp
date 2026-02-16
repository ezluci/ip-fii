#include "facultate.h"
#include "student.h"
#include "profesor.h"
#include "materie.h"

void Facultate::adaugaStudent(string studentMatricol, int an, string grupa,
      string nume, string prenume, int anNastere)
{
   studentiAn[an].push_back(new Student(
      nume, prenume, anNastere, studentMatricol,
      an, grupa
   ));
}

void Facultate::adaugaProfesor(int id, string nume, string prenume, int anNastere)
{
   profesori.push_back(new Profesor(id, nume, prenume, anNastere));
}

void Facultate::adaugaMaterie(Materie *materie)
{
   materii.push_back(materie);
}