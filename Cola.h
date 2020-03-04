/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cola.h
 * Author: yefer
 *
 * Created on 28 de febrero de 2020, 03:11 PM
 */

#ifndef COLA_H
#define COLA_H
#include <iostream>
#include <stdlib.h>
#include "Carta.h"
using namespace std;

class Cola {
protected:
    class NodoCola
    {
    public:
        NodoCola* siguiente;
        Carta carta;
        NodoCola (Carta &c)
        {
            carta = c;
            siguiente = NULL;
        }
    };
    NodoCola* frente;
    NodoCola* fin;
public:
    Cola(const Cola& orig);
    Cola();
    void insertar(Carta &c);
    void quitar();
    void borrarCola();
    Carta &frenteCola();
    int colaVacia();
    
    ~Cola();
    //{
        //borrarCola ();
    //}

};

#endif /* COLA_H */

