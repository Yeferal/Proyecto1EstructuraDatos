/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carta.h
 * Author: yefer
 *
 * Created on 27 de febrero de 2020, 08:42 PM
 */

#ifndef CARTA_H
#define CARTA_H
#include <iostream>
#include <stdlib.h>
#include <string> 
using namespace std;

class Carta {
public:
    Carta();
    Carta(const Carta& orig);
    Carta(int,string,int);
    int GetEstado();
    void SetEstado(int);
    void SetNombre(string);
    void SetNumero(int);
    string GetNombre();
    int GetNumero();
    void pintar();
    int GetColor();
    void SetColor(int);
    string getColorS();
    string getNumeroS();
    //char getString();
    ~Carta();
    //Carta(const Carta& orig);
    //virtual ~Carta();
    
private:
    int numero;
    string nombre;
    int estado;
    int color;

};



#endif /* CARTA_H */

