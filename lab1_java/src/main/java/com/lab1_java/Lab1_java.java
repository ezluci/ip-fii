package com.lab1_java;

import java.util.HashMap;

class BD extends Materie {
    
    BD(int id, int anDeStudiu, String nume, int credite, HashMap<Integer, Profesor> titulariCurs, Facultate facultate) {
        super(id, anDeStudiu, nume, credite, titulariCurs, facultate);
    }
    @Override
    public float evaluare(String studentMatricol) {
        var notele = this.note.get(studentMatricol);
        return notele.get("test1") * 0.25f + notele.get("test2") * 0.25f + notele.get("examen") * 0.5f;
    }
}

public class Lab1_java {
    
    public static void main(String[] args) {
    
        Facultate facultate = new Facultate();
        facultate.adaugaStudent("31091179RSLAVENITALEX", 2, "A1", "alexandru", "daniel", 2005);
        facultate.adaugaStudent("31091180RSLAVENITALEX", 3, "E2", "dani", "daniel", 2002);
        facultate.adaugaStudent("31091181RSLAVENITALEX", 1, "67", "bogdan", "daniel", 2003);
        facultate.adaugaStudent("31091182RSLAVENITALEX", 2, "B6", "ez", "daniel", 2001);
        facultate.adaugaProfesor(1, "mocanu", "luciana", 1998);
        facultate.adaugaProfesor(2, "alexandra", "ciocanu", 1994);

        var profesori = facultate.profesori;
        HashMap<Integer, Profesor> titulariCurs = new HashMap<>();
        titulariCurs.put(profesori.get(0).id, profesori.get(0));
        titulariCurs.put(profesori.get(1).id, profesori.get(1));
        
        BD bd = new BD(1, 2, "BD", 6, titulariCurs, facultate);
        for (var entry : titulariCurs.entrySet()) {
            entry.getValue().materii.put(bd.id, bd);
        }
        facultate.materii.add(bd);
        
        profesori.get(0).adaugaNota(1, "31091179RSLAVENITALEX", "test1", 10);
        profesori.get(0).adaugaNota(1, "31091179RSLAVENITALEX", "test2", 8);
        profesori.get(0).adaugaNota(1, "31091179RSLAVENITALEX", "examen", 10);
        
        System.out.println(profesori.get(0).calculeazaMedie(bd.id, "31091179RSLAVENITALEX"));
    }
}
