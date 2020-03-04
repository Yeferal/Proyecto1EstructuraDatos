/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carta.cpp
 * Author: yefer
 * 
 * Created on 27 de febrero de 2020, 08:42 PM
 */

#include "Carta.h"
#include <iostream>
#include <stdlib.h>
#include <string> 
using namespace std;

Carta::Carta() {
}

Carta::Carta(const Carta& orig) {
}

Carta::~Carta() {
}

Carta::Carta(int num, string nom, int color){
    numero = num;
    nombre = nom;
    this->color = color;
    estado = 0;
}
    int Carta::GetEstado(){
        return estado;
    }

    void Carta::SetEstado(int estado) {
        this->estado = estado;
    }
    string Carta::GetNombre(){
        return nombre;
    }

    void Carta::SetNombre(string nombre) {
        this->nombre = nombre;
    }

    int Carta::GetNumero(){
        return numero;
    }

    void Carta::SetNumero(int numero) {
        this->numero = numero;
    }
    void Carta::pintar(){
        if(estado==0){
            cout<<"|###|" <<endl;
        }else{
            cout<<"|"<<numero<<" "<<nombre<<""<<getColorS()<<"|"<<endl;
        }
    }
    int Carta::GetColor(){
        return color;
    }
    void Carta::SetColor(int color){
        this->color = color;
    }
    
    string Carta::getColorS(){
        if(color==0){
            return "N";
        }else{
            return "R";
        }
    }
            
    string Carta::getNumeroS(){
        switch(numero){
            case 1:
                return "A ";
            case 2:
                return "2 ";
            case 3:
                return "3 ";
            case 4:
                return "4 ";
            case 5:
                return "5 ";
            case 6:
                return "6 ";
            case 7:
                return "7 ";
            case 8:
                return "8 ";
            case 9:
                return "9 ";
            case 10:
                return "10";
            case 11:
                return "J ";
            case 12:
                return "Q ";
            case 13:
                return "K ";
        }
        return "";
    }
    