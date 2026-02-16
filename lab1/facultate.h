#pragma once
#include <vector>
#include <string>
using namespace std;

class Student;
class Profesor;
class Materie;

class Facultate {
public:
   vector<Student*> studentiAn[3];
   vector<Profesor*> profesori;
   vector<Materie*> materii;

   void adaugaStudent(string studentMatricol, int an, string grupa,
         string nume, string prenume, int anNastere);

   void adaugaProfesor(int id, string nume, string prenume, int anNastere);

   void adaugaMaterie(Materie *materie);
};