package com.lab1_java;

import java.util.HashMap;

public abstract class Materie {
    public int id;
    public int anDeStudiu;
    public String nume;
    public int credite;
    public HashMap<Integer, Profesor> titulariCurs;
    public HashMap<String, HashMap<String, Float>> note; // <studentMatricol, tipnota, nota>
    public HashMap<String, Float> medii;
    
    Materie(int id, int anDeStudiu, String nume, int credite, HashMap<Integer, Profesor> titulariCurs, Facultate facultate) {
        this.id = id;
        this.anDeStudiu = anDeStudiu;
        this.nume = nume;
        this.credite = credite;
        this.titulariCurs = titulariCurs;
        this.note = new HashMap<>();
        this.medii = new HashMap<>();
        
        for (Student student : facultate.studentiAn.get(anDeStudiu)) {
            this.note.put(student.nrMatricol, new HashMap<>());
        }
    }
    
    public abstract float evaluare(String studentMatricol);
}
