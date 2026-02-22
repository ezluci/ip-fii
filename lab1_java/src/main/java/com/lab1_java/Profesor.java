package com.lab1_java;

import java.util.HashMap;

public class Profesor extends Persoana {
    public int id;
    public HashMap<Integer, Materie> materii;
    
    Profesor(int id, String nume, String prenume, int anNastere) {
        super(nume, prenume, anNastere);
        this.materii = new HashMap<>();
        this.id = id;
    }
    
    public void adaugaNota(int materieId, String studentMatricol, String tipNota, float nota) {
        var notele = this.materii.get(materieId).note;
        if (!notele.containsKey(studentMatricol)) {
            notele.put(studentMatricol, new HashMap<>());
        }
        notele.get(studentMatricol).put(tipNota, nota);
    }
    
    public float calculeazaMedie(int materieId, String studentMatricol) {
        var newValue = this.materii.get(materieId).evaluare(studentMatricol);
        this.materii.get(materieId).medii.put(studentMatricol, newValue);
        return newValue;
    }
}
