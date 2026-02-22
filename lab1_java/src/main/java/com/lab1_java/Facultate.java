package com.lab1_java;

import java.util.ArrayList;
import java.util.List;

public class Facultate {
    public List<List<Student>> studentiAn;
    public List<Profesor> profesori;
    public List<Materie> materii;
    
    Facultate() {
        this.studentiAn = new ArrayList<>(4);
        for (int i = 0; i < 4; i++) {
            this.studentiAn.add(new ArrayList<>());
        }
        
        this.profesori = new ArrayList<>();
        this.materii = new ArrayList<>();
    }
    
    public void adaugaStudent(String studentMatricol, int an, String grupa, String nume, String prenume, int anNastere) {
        this.studentiAn.get(an).add(new Student(nume, prenume, anNastere, studentMatricol, an, grupa));
    }
    
    public void adaugaProfesor(int id, String nume, String prenume, int anNastere) {
        this.profesori.add(new Profesor(id, nume, prenume, anNastere));
    }
    
    public void adaugaMaterie(Materie materie) {
        this.materii.add(materie);
    }
}
