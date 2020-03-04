/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cola.cpp
 * Author: yefer
 * 
 * Created on 28 de febrero de 2020, 03:11 PM
 */

#include "Cola.h"
#include <iostream>
#include <stdlib.h>
#include "Carta.h"
using namespace std;

Cola::Cola() {
    frente = NULL;
}

Cola::Cola(const Cola& orig) {
}

Cola::~Cola() {
}

void Cola :: insertar(Carta &c)
{
    NodoCola* nuevo;
    nuevo = new NodoCola (c);
    nuevo->siguiente = NULL;
    if (colaVacia())
    {
        
        frente = nuevo;
        Carta &c1 = frente->carta;
        
    }
    else
    {
        
        fin -> siguiente = nuevo;
        
        Carta &c1 = frente->siguiente->carta;
    }
    fin = nuevo;
}

void Cola :: quitar(){
    if (colaVacia()){
        throw "Cola vacía, no se puede extraer.";
    }
    else if(frente==fin){
        frente = NULL;
        fin = NULL;
    }else{
        
    Carta &aux = frente ->siguiente->carta;
    NodoCola* a = frente;
    frente = frente -> siguiente;

    delete a;
    }
    

}

Carta& Cola :: frenteCola()
{
    if (colaVacia())
        throw "Cola vacía";
    return frente -> carta;
}


void Cola :: borrarCola()
{
    for (; frente != NULL;)
    {
        NodoCola* a;
        a = frente;
        frente = frente -> siguiente;
        delete a;
    }
    fin = NULL;
}


int Cola :: colaVacia()
{
    return frente == NULL;
}

