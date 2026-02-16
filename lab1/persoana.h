#pragma once
#include <string>
using namespace std;

class Persoana {
   string nume, prenume;
   int anNastere;

public:
   Persoana(string nume, string prenume, int anNastere)
      : nume(nume), prenume(prenume), anNastere(anNastere)
   { }
};