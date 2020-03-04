/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pila.cpp
 * Author: yefer
 * 
 * Created on 28 de febrero de 2020, 03:05 PM
 */

#include "Pila.h"
#include <iostream>
#include <stdlib.h>
#include "Carta.h"
using namespace std;

Pila::Pila() {
    cima = NULL;
}

Pila::Pila(const Pila& orig) {
}

Pila::~Pila() {
}


int Pila::pilaVacia()
{
    return cima == NULL;
}


void Pila::insertar(Carta &c)
{   
    NodoPila* nuevo;
    nuevo = new NodoPila(c);
    nuevo -> siguiente = cima;
    cima = nuevo;
}


Carta Pila::quitar()
{
    if (pilaVacia())
        throw "Pila vacía, no se puede extraer.";
    Carta aux = cima -> carta;
    cima = cima -> siguiente;
    return aux;
}


Carta& Pila:: cimaPila(){
    if (pilaVacia())
        throw "Pila vacía";
    return cima -> carta;
}

void Pila:: limpiarPila()
{
    NodoPila* n;
    while(!pilaVacia())
    {
        n = cima;
        cima = cima -> siguiente;
        delete n;
    }
}

