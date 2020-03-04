/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pila.h
 * Author: yefer
 *
 * Created on 28 de febrero de 2020, 03:05 PM
 */

#ifndef PILA_H
#define PILA_H
#include <iostream>
#include <stdlib.h>
#include "Carta.h"
using namespace std;

class Pila {
    class NodoPila
    {
    public:
        NodoPila* siguiente;
        Carta carta;
        NodoPila(Carta &c)
        {
            c.pintar();
            carta = c;
            siguiente = NULL;
        }
    };

    NodoPila* cima;
    public:
    Pila ();
    Pila(const Pila& orig);
    void insertar(Carta &);
    Carta quitar();
    Carta &cimaPila();
    int pilaVacia();
    void limpiarPila();
    ~Pila();

};

#endif /* PILA_H */

