/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.h
 * Author: yefer
 *
 * Created on 29 de febrero de 2020, 12:50 PM
 */

#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <stdlib.h>
#include "Carta.h"
using namespace std;

class Lista {
public:
    class NodoLista{
        
    public:
        NodoLista *anterio;
        NodoLista *siguiente;
        Carta carta;
        int posicion;
        NodoLista(Carta &c){
            
            carta = c;
        }
    };
    NodoLista* primero;
    NodoLista* ultimo;
    
public:
    Lista();
    Lista(const Lista& orig);
    void insertar(Carta &c);
    void quitarPrimero();
    void quitarUltimo();
    void quitarBloque(int numero);
    void borrarLista();
    void desplegarLista();
    Lista getListaTamanio(int numero);
    bool isTamanio(int numero);
    Carta &getPrimero();
    void getSiguiente(int numero);
    void getAnterior(int numero);
    Carta &getUltimo();
    bool isListaVacia();
    virtual ~Lista();
private:
    int tamanio;
};

#endif /* LISTA_H */

