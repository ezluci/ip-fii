#pragma once
#include <unordered_map>
#include <string>
using namespace std;

class Facultate;
class Profesor;

class Materie {
public:
   int id;
   int anDeStudiu;
   string nume;
   int credite;
   unordered_map<int, Profesor*> titulariCurs;
   unordered_map<string, unordered_map<string, float>> note; // <studentMatricol, tipnota, nota>
   unordered_map<string, float> medii;
   virtual float evaluare(string studentMatricol) = 0;

   Materie(int id, int anDeStudiu, string nume, int credite,
         unordered_map<int, Profesor*> titulariCurs, Facultate *facultate);
};