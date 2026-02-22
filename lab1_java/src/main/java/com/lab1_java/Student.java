package com.lab1_java;

import java.util.HashMap;

public class Student extends Persoana {
    public HashMap<String, Materie> materii;
    public String nrMatricol;
    public int an;
    public String grupa;
    
    Student(String nume, String prenume, int anNastere, String nrMatricol, int an, String grupa) {
        super(nume, prenume, anNastere);
        this.materii = new HashMap<>();
        this.nrMatricol = nrMatricol;
        this.an = an;
        this.grupa = grupa;
    }
}
