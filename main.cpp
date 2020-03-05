/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yefer
 *
 * Created on 27 de febrero de 2020, 08:42 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include<time.h>
#include "Carta.h"
#include "Pila.h"
#include "Cola.h"
#include "Lista.h"
#include <string> 

using namespace std;

Carta baraja [52];
Lista* lista1 = new Lista();
Lista* lista2 = new Lista();
Lista* lista3 = new Lista();
Lista* lista4 = new Lista();
Lista* lista5 = new Lista();
Lista* lista6 = new Lista();
Lista* lista7 = new Lista();

Cola* cola1 = new Cola();
Cola* cola2 = new Cola();

Pila* pila1 = new Pila();
Pila* pila2 = new Pila();
Pila* pila3 = new Pila();
Pila* pila4 = new Pila();

Lista siclar(int n);
Cola siclarCola();
void pintar();
void seccion1();
void seccion2();
void seccion3();
bool moverHaciaSeccion2(Carta &cD,int hacia);
void moverBoque(int tamanio,int desde,int hacia);


void iniciarBaraja(){
    baraja[0]= Carta(1,"♥",1);
    baraja[1]= Carta(2,"♥",1);
    baraja[2]= Carta(3,"♥",1);
    baraja[3]= Carta(4,"♥",1);
    baraja[4]= Carta(5,"♥",1);
    baraja[5]= Carta(6,"♥",1);
    baraja[6]= Carta(7,"♥",1);
    baraja[7]= Carta(8,"♥",1);
    baraja[8]= Carta(9,"♥",1);
    baraja[9]= Carta(10,"♥",1);
    baraja[10]= Carta(11,"♥",1);
    baraja[11]= Carta(12,"♥",1);
    baraja[12]= Carta(13,"♥",1);
    
    baraja[14]= Carta(1,"♦",1);
    baraja[15]= Carta(2,"♦",1);
    baraja[16]= Carta(3,"♦",1);
    baraja[17]= Carta(4,"♦",1);
    baraja[18]= Carta(5,"♦",1);
    baraja[19]= Carta(6,"♦",1);
    baraja[20]= Carta(7,"♦",1);
    baraja[21]= Carta(8,"♦",1);
    baraja[22]= Carta(9,"♦",1);
    baraja[23]= Carta(10,"♦",1);
    baraja[24]= Carta(11,"♦",1);
    baraja[25]= Carta(12,"♦",1);
    baraja[26]= Carta(13,"♦",1);
    
    baraja[27]= Carta(1,"♣",0);
    baraja[28]= Carta(2,"♣",0);
    baraja[29]= Carta(3,"♣",0);
    baraja[30]= Carta(4,"♣",0);
    baraja[31]= Carta(5,"♣",0);
    baraja[32]= Carta(6,"♣",0);
    baraja[33]= Carta(7,"♣",0);
    baraja[34]= Carta(8,"♣",0);
    baraja[35]= Carta(9,"♣",0);
    baraja[36]= Carta(10,"♣",0);
    baraja[37]= Carta(11,"♣",0);
    baraja[38]= Carta(12,"♣",0);
    baraja[39]= Carta(13,"♣",0);
    
    baraja[40]= Carta(1,"♠",0);
    baraja[41]= Carta(2,"♠",0);
    baraja[42]= Carta(3,"♠",0);
    baraja[43]= Carta(4,"♠",0);
    baraja[44]= Carta(5,"♠",0);
    baraja[45]= Carta(6,"♠",0);
    baraja[46]= Carta(7,"♠",0);
    baraja[47]= Carta(8,"♠",0);
    baraja[48]= Carta(9,"♠",0);
    baraja[49]= Carta(10,"♠",0);
    baraja[50]= Carta(11,"♠",0);
    baraja[51]= Carta(12,"♠",0);
    baraja[13]= Carta(13,"♠",0);
}

void barajear(){
    srand(time(NULL));
    /*lista1 = new Lista();
    lista2 = new Lista();
    lista3 = new Lista();
    lista4 = new Lista();
    lista5 = new Lista();
    lista6 = new Lista();
    lista7 = new Lista();
    cola1 = new Cola();
    cola2 = new Cola();
    pila1 = new Pila();
    pila2 = new Pila();
    pila3 = new Pila();
    pila4 = new Pila();*/
    int num = 0;
    for (int i = 0; i < 1; i++) {
        num = rand()%52;
        while (baraja[num].GetNumero()==0) {
            num = rand()%52;
        }
        Carta &c = baraja[num];
        c.SetEstado(0);
        lista1->insertar(c);

        baraja[num].SetNumero(0);
                
    }
    lista1->ultimo->carta.SetEstado(1);
    for (int i = 0; i < 2; i++) {
        num = rand()%52;
        while (baraja[num].GetNumero()==0) {
            num = rand()%52;
        }
        Carta &c = baraja[num];
        c.SetEstado(0);
        lista2->insertar(c);

        baraja[num].SetNumero(0);
                
    }
    lista2->ultimo->carta.SetEstado(1);
    for (int i = 0; i < 3; i++) {
        num = rand()%52;
        while (baraja[num].GetNumero()==0) {
            num = rand()%52;
        }
        Carta &c = baraja[num];
        c.SetEstado(0);
        lista3->insertar(c);

        baraja[num].SetNumero(0);
                
    }
    lista3->ultimo->carta.SetEstado(1);
    for (int i = 0; i < 4; i++) {
        num = rand()%52;
        while (baraja[num].GetNumero()==0) {
            num = rand()%52;
        }
        Carta &c = baraja[num];
        c.SetEstado(0);
        lista4->insertar(c);

        baraja[num].SetNumero(0);
                
    }
    lista4->ultimo->carta.SetEstado(1);
    for (int i = 0; i < 5; i++) {
        num = rand()%52;
        while (baraja[num].GetNumero()==0) {
            num = rand()%52;
        }
        Carta &c = baraja[num];
        c.SetEstado(0);
        lista5->insertar(c);

        baraja[num].SetNumero(0);
                
    }
    lista5->ultimo->carta.SetEstado(1);
    for (int i = 0; i < 6; i++) {
        num = rand()%52;
        while (baraja[num].GetNumero()==0) {
            num = rand()%52;
        }
        Carta &c = baraja[num];
        c.SetEstado(0);
        lista6->insertar(c);

        baraja[num].SetNumero(0);
                
    }
    lista6->ultimo->carta.SetEstado(1);
    for (int i = 0; i < 7; i++) {
        num = rand()%52;
        while (baraja[num].GetNumero()==0) {
            num = rand()%52;
        }
        Carta &c = baraja[num];
        c.SetEstado(0);
        lista7->insertar(c);

        baraja[num].SetNumero(0);
         //lista7->ultimo->carta.SetEstado(1);       
    }
    lista7->ultimo->carta.SetEstado(1);

    for (int i = 0; i < 52; i++) {
        //num = rand()%52;
        if(baraja[i].GetNumero()!=0) {
            Carta &c = baraja[i];
            //c.pintar();
            cola1->insertar(c);
            num++;
            baraja[i].SetNumero(0);
        }
        
    }
    
}

void pintar(){
    cout<<endl;
    cout<<endl;
    cout<<"______________________________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<"______________________________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"Seccion 1--------------------------------------------------------------------------"<<endl;
    
    if(!cola1->colaVacia()){
        cola1->frenteCola().SetEstado(1);
        Carta &t = cola1->frenteCola();
        cout<<"       "<<"_______"<<"    "<<"_______"<<endl;
        cout<<"       "<<"|"<<t.getNumeroS()<<" "<<t.GetNombre()<<""<<t.getColorS()<<"|"<<ends;
    }else{
        cout<<"       "<<"_______"<<"    "<<"_______"<<endl;
        cout<<"       "<<"|     |"<<ends;
    }
        
    if(cola2->colaVacia()){
        cout<<"    "<<"|     |"<<endl;
    }else{
        cout<<"    "<<"|#####|"<<endl;
    }
    cout<<"       "<<"¯¯¯¯¯¯¯"<<"    "<<"¯¯¯¯¯¯¯"<<endl;
    cout<<"Seccion 2--------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"[1]"<<ends;
    lista1->desplegarLista();
    cout<<"[2]"<<ends;
    lista2->desplegarLista();
    cout<<"[3]"<<ends;
    lista3->desplegarLista();
    cout<<"[4]"<<ends;
    lista4->desplegarLista();
    cout<<"[5]"<<ends;
    lista5->desplegarLista();
    cout<<"[6]"<<ends;
    lista6->desplegarLista();
    cout<<"[7]"<<ends;
    lista7->desplegarLista();
    
    cout<<"Seccion 3--------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"       "<<"_______"<<"    "<<"_______"<<"    "<<"_______"<<"    "<<"_______"<<endl;
    if(!pila1->pilaVacia()){
         Carta &c = pila1->cimaPila();
         cout<<"       "<<"|"<<c.getNumeroS()<<" "<<c.GetNombre()<<""<<c.getColorS()<<"|"<<ends;
    }else{
        cout<<"       "<<"|     |"<<ends;
    }
    
    if(!pila2->pilaVacia()){
         Carta &c = pila2->cimaPila();
         cout<<"    "<<"|"<<c.getNumeroS()<<" "<<c.GetNombre()<<""<<c.getColorS()<<"|"<<ends;
    }else{
        cout<<"    "<<"|     |"<<ends;
    }
    
    if(!pila3->pilaVacia()){
         Carta &c = pila3->cimaPila();
         cout<<"    "<<"|"<<c.getNumeroS()<<" "<<c.GetNombre()<<""<<c.getColorS()<<"|"<<ends;
    }else{
        cout<<"    "<<"|     |"<<ends;
    }
    
    if(!pila4->pilaVacia()){
         Carta &c = pila4->cimaPila();
         cout<<"    "<<"|"<<c.getNumeroS()<<" "<<c.GetNombre()<<""<<c.getColorS()<<"|"<<endl;
    }else{
        cout<<"    "<<"|     |"<<endl;
    }
    cout<<"       "<<"¯¯¯¯¯¯¯"<<"    "<<"¯¯¯¯¯¯¯"<<"    "<<"¯¯¯¯¯¯¯"<<"    "<<"¯¯¯¯¯¯¯"<<endl;
    cout<<"       "<<"  [8]  "<<"    "<<"  [9]  "<<"    "<<" [10]  "<<"    "<<"  [11]  "<<endl;
    cout<<endl;
    
}
void siguienteCarta(){
    
       Carta &temp = cola1->frenteCola(); 
       cola2->insertar(temp);
       cola1->quitar();
       if(cola1->colaVacia() && !cola2->colaVacia()){
            while (!cola2->colaVacia()) {
                Carta &tem = cola2->frenteCola();
                cola1->insertar(tem);
                cola2->quitar();
            }
        }
}

void moverCarta(int de,int hacia){
    if(de==0){
        if (!cola1->colaVacia()) {
            Carta &cDe=cola1->frenteCola();
            if(moverHaciaSeccion2(cDe,hacia)){
                cola1->quitar();
            }else{
                cout<<"No se puede mover esta carta"<<endl;
            }
        }else{
            cout<<"No existe carta"<<endl;
        }

        if(cola1->colaVacia() && !cola2->colaVacia()){
            while (!cola2->colaVacia()) {
                Carta &tem = cola2->frenteCola();
                cola1->insertar(tem);
                cola2->quitar();
            }
        }
        
    }else if(de!=hacia){
        switch(de){
            case 1:
                if (!lista1->isListaVacia()) {
                    Carta &cDe= lista1->ultimo->carta;
                    if(moverHaciaSeccion2(cDe,hacia)){
                        lista1->quitarUltimo();
                    }else{
                        cout<<"No se puede mover esta carta"<<endl;
                    }   
                }else{
                    cout<<"No existe carta"<<endl;
                }
                break;
            case 2:
                if (!lista2->isListaVacia()) {
                    Carta &cDe= lista2->ultimo->carta;
                    if(moverHaciaSeccion2(cDe,hacia)){
                        lista2->quitarUltimo();
                    }else{
                        cout<<"No se puede mover esta carta"<<endl;
                    }   
                }else{
                    cout<<"No existe carta"<<endl;
                }
                break;
            case 3:
                if (!lista3->isListaVacia()) {
                    Carta &cDe= lista3->ultimo->carta;
                    if(moverHaciaSeccion2(cDe,hacia)){
                        lista3->quitarUltimo();
                    }else{
                        cout<<"No se puede mover esta carta"<<endl;
                    }   
                }else{
                    cout<<"No existe carta"<<endl;
                }
                break;
            case 4:
                if (!lista4->isListaVacia()) {
                    Carta &cDe= lista4->ultimo->carta;
                    if(moverHaciaSeccion2(cDe,hacia)){
                        lista4->quitarUltimo();
                    }else{
                        cout<<"No se puede mover esta carta"<<endl;
                    }   
                }else{
                    cout<<"No existe carta"<<endl;
                }
                break;
            case 5:
                if (!lista5->isListaVacia()) {
                    Carta &cDe= lista5->ultimo->carta;
                    if(moverHaciaSeccion2(cDe,hacia)){
                        lista5->quitarUltimo();
                    }else{
                        cout<<"No se puede mover esta carta"<<endl;
                    }   
                }else{
                    cout<<"No existe carta"<<endl;
                }
                break;
            case 6:
                if (!lista6->isListaVacia()) {
                    Carta &cDe= lista6->ultimo->carta;
                    if(moverHaciaSeccion2(cDe,hacia)){
                        lista6->quitarUltimo();
                    }else{
                        cout<<"No se puede mover esta carta"<<endl;
                    }   
                }else{
                    cout<<"No existe carta"<<endl;
                }
                break;
            case 7:
                if (!lista7->isListaVacia()) {
                    Carta &cDe= lista7->ultimo->carta;
                    if(moverHaciaSeccion2(cDe,hacia)){
                        lista7->quitarUltimo();
                    }else{
                        cout<<"No se puede mover esta carta"<<endl;
                    }   
                }else{
                    cout<<"No existe carta"<<endl;
                }
                break;
            case 8:
                if (!pila1->pilaVacia()) {
                    Carta &cDe= pila1->cimaPila();
                    if(moverHaciaSeccion2(cDe,hacia)){
                        pila1->quitar();
                    }else{
                        cout<<"No se puede mover esta carta"<<endl;
                    }   
                }else{
                    cout<<"No existe carta"<<endl;
                }
                break;
            case 9:
                if (!pila2->pilaVacia()) {
                    Carta &cDe= pila2->cimaPila();
                    if(moverHaciaSeccion2(cDe,hacia)){
                        pila2->quitar();
                    }else{
                        cout<<"No se puede mover esta carta"<<endl;
                    }   
                }else{
                    cout<<"No existe carta"<<endl;
                }
                break;
            case 10:
                if (!pila3->pilaVacia()) {
                    Carta &cDe= pila3->cimaPila();
                    if(moverHaciaSeccion2(cDe,hacia)){
                        pila3->quitar();
                    }else{
                        cout<<"No se puede mover esta carta"<<endl;
                    }   
                }else{
                    cout<<"No existe carta"<<endl;
                }
                break;
            case 11:
                if (!pila4->pilaVacia()) {
                    Carta &cDe= pila4->cimaPila();
                    if(moverHaciaSeccion2(cDe,hacia)){
                        pila4->quitar();
                    }else{
                        cout<<"No se puede mover esta carta"<<endl;
                    }   
                }else{
                    cout<<"No existe carta"<<endl;
                }
                break;
        }
    }
}

bool moverHaciaSeccion2(Carta &cD,int hacia){
    cD.pintar();
    switch(hacia){
        case 1:
            if(!lista1->isListaVacia()){
                Carta &cH = lista1->ultimo->carta;
                cout<<cD.GetColor()<<"!="<<cH.GetColor()<<endl;
                if(cD.GetColor()!=cH.GetColor() && cD.GetNumero()==(cH.GetNumero()-1)){
                    lista1->insertar(cD);
                    return true;
                }else{
                    return false;
                }
            }
            lista1->insertar(cD);
            return true;
        case 2:
            if(!lista2->isListaVacia()){
                Carta &cH = lista2->ultimo->carta;
                if(cD.GetColor()!=cH.GetColor() && cD.GetNumero()==(cH.GetNumero()-1)){
                    lista2->insertar(cD);
                    return true;
                }else{
                    return false;
                }
            }
            lista2->insertar(cD);
            return true;
        case 3:
            if(!lista3->isListaVacia()){
                Carta &cH = lista3->ultimo->carta;
                if(cD.GetColor()!=cH.GetColor() && cD.GetNumero()==(cH.GetNumero()-1)){
                    lista3->insertar(cD);
                    return true;
                }else{
                    return false;
                }
            }
            lista3->insertar(cD);
            return true;
        case 4:
            if(!lista4->isListaVacia()){
                Carta &cH = lista4->ultimo->carta;
                if(cD.GetColor()!=cH.GetColor() && cD.GetNumero()==(cH.GetNumero()-1)){
                    lista4->insertar(cD);
                    return true;
                }else{
                    return false;
                }
            }
            lista4->insertar(cD);
            return true;
        case 5:
            if(!lista5->isListaVacia()){
                Carta &cH = lista5->ultimo->carta;
                if(cD.GetColor()!=cH.GetColor() && cD.GetNumero()==(cH.GetNumero()-1)){
                    lista5->insertar(cD);
                    return true;
                }else{
                    return false;
                }
            }
            lista5->insertar(cD);
            return true;
        case 6:
            if(!lista6->isListaVacia()){
                Carta &cH = lista6->ultimo->carta;
                if(cD.GetColor()!=cH.GetColor() && cD.GetNumero()==(cH.GetNumero()-1)){
                    lista6->insertar(cD);
                    return true;
                }else{
                    return false;
                }
            }
            lista6->insertar(cD);
            return true;
        case 7:
            if(!lista7->isListaVacia()){
                Carta &cH = lista7->ultimo->carta;
                if(cD.GetColor()!=cH.GetColor() && cD.GetNumero()==(cH.GetNumero()-1)){
                    lista7->insertar(cD);
                    return true;
                }else{
                    return false;
                }
            }
            lista7->insertar(cD);
            return true;
        case 8:
            if(!pila1->pilaVacia()){
                Carta &cH = pila1->cimaPila();
                if(cD.GetNombre()==cH.GetNombre() && cD.GetNumero()==(cH.GetNumero()+1)){
                    pila1->insertar(cD);
                    return true;
                }else{
                    return false;
                }
            }else{
                if(cD.GetNumero()==1){
                    pila1->insertar(cD);
                    return true;
                }
                return false;
            }
            return true;
        case 9:
            if(!pila2->pilaVacia()){
                Carta &cH = pila2->cimaPila();
                if(cD.GetNombre()==cH.GetNombre() && cD.GetNumero()==(cH.GetNumero()+1)){
                    pila2->insertar(cD);
                    return true;
                }else{
                    return false;
                }
            }else{
                if(cD.GetNumero()==1){
                    pila2->insertar(cD);
                    return true;
                }
                return false;
            }
            return true;
        case 10:
            if(!pila3->pilaVacia()){
                Carta &cH = pila3->cimaPila();
                if(cD.GetNombre()==cH.GetNombre() && cD.GetNumero()==(cH.GetNumero()+1)){
                    pila3->insertar(cD);
                    return true;
                }else{
                    return false;
                }
            }else{
                if(cD.GetNumero()==1){
                    pila3->insertar(cD);
                    return true;
                }
                return false;
            }
            return true;
        case 11:
            if(!pila4->pilaVacia()){
                Carta &cH = pila4->cimaPila();
                if(cD.GetNombre()==cH.GetNombre() && cD.GetNumero()==(cH.GetNumero()+1)){
                    pila4->insertar(cD);
                    return true;
                }else{
                    return false;
                }
            }else{
                if(cD.GetNumero()==1){
                    pila4->insertar(cD);
                    return true;
                }
                return false;
            }
            return true;
    }
    return false;
}
void verCarta(int opcion,int fila,int numero){
    switch(fila){
        case 1:
            if(opcion==3){
                lista1->getSiguiente(numero);
            }else{
               lista1->getAnterior(numero); 
            }
            break;
        case 2:
            if(opcion==3){
                lista2->getSiguiente(numero);
            }else{
               lista2->getAnterior(numero); 
            }
            break;
        case 3:
            if(opcion==3){
                lista3->getSiguiente(numero);
            }else{
               lista3->getAnterior(numero); 
            }
            break;
        case 4:
            if(opcion==3){
                lista4->getSiguiente(numero);
            }else{
               lista4->getAnterior(numero); 
            }
            break;
        case 5:
            if(opcion==3){
                lista5->getSiguiente(numero);
            }else{
               lista5->getAnterior(numero); 
            }
            break;
        case 6:
            if(opcion==3){
                lista6->getSiguiente(numero);
            }else{
               lista6->getAnterior(numero); 
            }
            break;
        case 7:
            if(opcion==3){
                lista7->getSiguiente(numero);
            }else{
               lista7->getAnterior(numero); 
            }
            break;
    }
}



void seccion1(){
    bool opcion = true;
    int ipc;
    while (opcion) {
        cout<<"1: Ver siguiente\n2: Mover Carta"<<endl;
        cin>>ipc;
        switch(ipc){
            case 1:
                siguienteCarta();
                opcion = false;
            break;
            case 2:
                int op;
                cout<<"Escribe el Numero de fila Hacia donde movera"<<endl;
                cin>>op;
                moverCarta(0,op);
                opcion = false;
            break;
            
                
        }
    }

}
void seccion2(){
    bool opcion = true;
    int ipc1;
    int ipc;
    int tamanio;
    while (opcion) {
        cout<<"1: Mover Carta\n2: Mover Grupo\n3: Ver Siguiente\n4: Ver anterior"<<endl;
        cin>>ipc1;
        switch(ipc1){
            case 1:
                cout<<"Escribe el Numero de fila de la carta que desea mover"<<endl;
                cin>>ipc;
                switch(ipc){
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                        int op;
                        cout<<"Escribe el Numero de fila Hacia donde movera"<<endl;
                        cin>>op;
                        moverCarta(ipc,op);
                        opcion=false;
                        break;
                }
                break;
            case 2:
                int op;
                cout<<"Escribe el Numero Cartas que desea Mover"<<endl;
                cin>>tamanio;
                cout<<"Escribe el Numero de Fila de la carta que desea mover"<<endl;
                cin>>ipc;
                cout<<"Escribe el Numero de Fila Hacia donde movera"<<endl;
                cin>>op;
                moverBoque(tamanio,ipc,op);
                opcion=false;
                break;
            case 3:
                cout<<"Escribe el Numero de la Cartas de la que desea ver"<<endl;
                cin>>tamanio;
                cout<<"Escribe el Numero de Fila de la carta"<<endl;
                cin>>ipc;
                verCarta(3,ipc,tamanio);
                opcion=false;
                break;
            case 4:
                cout<<"Escribe el Numero de la Cartas de la que desea ver"<<endl;
                cin>>tamanio;
                cout<<"Escribe el Numero de Fila de la carta"<<endl;
                cin>>ipc;
                verCarta(4,ipc,tamanio);
                opcion=false;
                break;
        }
    }
    
}

void moverBoque(int tamanio,int desde,int hacia){
    switch(desde){
        case 1:
            if(lista1->isTamanio(tamanio)){
                Lista listTemp = lista1->getListaTamanio(tamanio);
                cout<<"tamanioLIsta: "<<listTemp.ultimo->posicion<<endl;
                while (!listTemp.isListaVacia()) {
                    cout<<"no es vacia"<<endl;
                    Carta &cartaPrimera = listTemp.getPrimero();
                    cartaPrimera.pintar();
                    if(moverHaciaSeccion2(cartaPrimera,hacia)){
                        listTemp.quitarPrimero();
                    }else{
                        cout<<"No se puede"<<endl;
                        tamanio =0;
                        break;
                    }
                    
                }
                lista1->quitarBloque(tamanio);
            }else{
                cout<<"No se puede mover este bloque"<<endl;
            }
            break;
        case 2:
            if(lista2->isTamanio(tamanio)){
                Lista listTemp = lista2->getListaTamanio(tamanio);
                cout<<"tamanioLIsta: "<<listTemp.ultimo->posicion<<endl;
                while (!listTemp.isListaVacia()) {
                    cout<<"no es vacia"<<endl;
                    Carta &cartaPrimera = listTemp.getPrimero();
                    cartaPrimera.pintar();
                    if(moverHaciaSeccion2(cartaPrimera,hacia)){
                        listTemp.quitarPrimero();
                    }else{
                        cout<<"No se puede"<<endl;
                        tamanio =0;
                        break;
                    }
                    
                }
                lista2->quitarBloque(tamanio);
            }else{
                cout<<"No se puede mover este bloque"<<endl;
            }
            break;
        case 3:
            if(lista3->isTamanio(tamanio)){
                Lista listTemp = lista3->getListaTamanio(tamanio);
                cout<<"tamanioLIsta: "<<listTemp.ultimo->posicion<<endl;
                while (!listTemp.isListaVacia()) {
                    cout<<"no es vacia"<<endl;
                    Carta &cartaPrimera = listTemp.getPrimero();
                    cartaPrimera.pintar();
                    if(moverHaciaSeccion2(cartaPrimera,hacia)){
                        listTemp.quitarPrimero();
                    }else{
                        cout<<"No se puede"<<endl;
                        tamanio =0;
                        break;
                    }
                    
                }
                lista3->quitarBloque(tamanio);
            }else{
                cout<<"No se puede mover este bloque"<<endl;
            }
            break;
        case 4:
            if(lista4->isTamanio(tamanio)){
                Lista listTemp = lista4->getListaTamanio(tamanio);
                cout<<"tamanioLIsta: "<<listTemp.ultimo->posicion<<endl;
                while (!listTemp.isListaVacia()) {
                    cout<<"no es vacia"<<endl;
                    Carta &cartaPrimera = listTemp.getPrimero();
                    cartaPrimera.pintar();
                    if(moverHaciaSeccion2(cartaPrimera,hacia)){
                        listTemp.quitarPrimero();
                    }else{
                        cout<<"No se puede"<<endl;
                        tamanio =0;
                        break;
                    }
                    
                }
                lista4->quitarBloque(tamanio);
            }else{
                cout<<"No se puede mover este bloque"<<endl;
            }
            break;
        case 5:
            if(lista5->isTamanio(tamanio)){
                Lista listTemp = lista5->getListaTamanio(tamanio);
                cout<<"tamanioLIsta: "<<listTemp.ultimo->posicion<<endl;
                while (!listTemp.isListaVacia()) {
                    cout<<"no es vacia"<<endl;
                    Carta &cartaPrimera = listTemp.getPrimero();
                    cartaPrimera.pintar();
                    if(moverHaciaSeccion2(cartaPrimera,hacia)){
                        listTemp.quitarPrimero();
                    }else{
                        cout<<"No se puede"<<endl;
                        tamanio =0;
                        break;
                    }
                    
                }
                lista5->quitarBloque(tamanio);
            }else{
                cout<<"No se puede mover este bloque"<<endl;
            }
            break;
        case 6:
            if(lista6->isTamanio(tamanio)){
                Lista listTemp = lista6->getListaTamanio(tamanio);
                cout<<"tamanioLIsta: "<<listTemp.ultimo->posicion<<endl;
                while (!listTemp.isListaVacia()) {
                    cout<<"no es vacia"<<endl;
                    Carta &cartaPrimera = listTemp.getPrimero();
                    cartaPrimera.pintar();
                    if(moverHaciaSeccion2(cartaPrimera,hacia)){
                        listTemp.quitarPrimero();
                    }else{
                        cout<<"No se puede"<<endl;
                        tamanio =0;
                        break;
                    }
                    
                }
                lista6->quitarBloque(tamanio);
            }else{
                cout<<"No se puede mover este bloque"<<endl;
            }
            break;
        case 7:
            if(lista7->isTamanio(tamanio)){
                Lista listTemp = lista7->getListaTamanio(tamanio);
                cout<<"tamani: "<<listTemp.ultimo->posicion<<endl;
                while (!listTemp.isListaVacia()) {
                    cout<<"no es vacia"<<endl;
                    Carta &cartaPrimera = listTemp.getPrimero();
                    cartaPrimera.pintar();
                    if(moverHaciaSeccion2(cartaPrimera,hacia)){
                        listTemp.quitarPrimero();
                    }else{
                        cout<<"No se puede"<<endl;
                        tamanio =0;
                        break;
                    }
                    
                }
                lista7->quitarBloque(tamanio);
            }else{
                cout<<"No se puede mover este bloque"<<endl;
            }
            break;
    }
}

void seccion3(){
    bool opcion = true;
    int ipc;
    while (opcion) {
        cout<<"Escribe el Numero de fila de la carta que desea mover"<<endl;
        cin>>ipc;
        switch(ipc){
            case 8:
            case 9:
            case 10:
            case 11:
                int op;
                cout<<"Escribe el Numero de fila Hacia donde movera"<<endl;
                cin>>op;
                moverCarta(ipc,op);
                opcion=false;
                break;
        }
    }
    
}
bool isCompleto(){
    if(cola1->colaVacia() && cola2->colaVacia() && lista1->isListaVacia() && lista2->isListaVacia() && lista3->isListaVacia() && lista4->isListaVacia() && lista5->isListaVacia() && lista6->isListaVacia() && lista7->isListaVacia()){
        return false;
    }
    return true;
}


int main(int argc, char** argv) {

    iniciarBaraja();
    barajear();
    pintar();
    bool opcion = true;
    int ipc;
    
    while (opcion) {
        cout<<"1: Seccion 1\n2: Seccion 2\n3: Seccion 3\n4: Salir"<<endl;
        cin>>ipc;
        switch(ipc){
            case 1:
                seccion1();
                pintar();
                opcion = isCompleto();
            break;
            case 2:
                seccion2();
                pintar();
                opcion = isCompleto();
            break;
            case 3:
                seccion3();
                pintar();
                opcion = isCompleto();
            break;
            case 4:
                opcion = false;
                cola1->~Cola();
                cola2->~Cola();
                lista1->~Lista();
                lista2->~Lista();
                lista3->~Lista();
                lista4->~Lista();
                lista5->~Lista();
                lista6->~Lista();
                lista7->~Lista();
                pila1->~Pila();
                pila2->~Pila();
                pila3->~Pila();
                pila4->~Pila();
            break;
            
                
        }
    }
    
    pintar();
    
    return 0;
}

