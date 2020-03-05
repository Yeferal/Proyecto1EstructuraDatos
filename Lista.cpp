

#include "Lista.h"
#include <iostream>
#include <stdlib.h>
#include "Carta.h"
using namespace std;

Lista::Lista() {
    primero = NULL;
    
}

Lista::Lista(const Lista& orig) {
    
}



void Lista::insertar(Carta &c){
    NodoLista* nuevo;
    nuevo = new NodoLista(c);
    
    if(primero == NULL){
        nuevo->posicion=1;
        tamanio=1;
        primero = nuevo;
        primero->siguiente = NULL;
        primero->anterio = NULL;
        ultimo = primero;
    }else{
        tamanio++;
        nuevo->posicion=tamanio;
        ultimo->siguiente = nuevo;
        nuevo->siguiente=NULL;
        nuevo->anterio = ultimo;
        ultimo = nuevo;
    }
    
}
Lista Lista::getListaTamanio(int numero){
    Lista listaT = Lista();
    NodoLista* actual;
    actual = primero;

    while (actual!=NULL) {
        if(actual->posicion>(tamanio-numero)){

            Carta &c = actual->carta;
            listaT.insertar(c);
        }
        actual = actual->siguiente;
    }
    cout<<"tamanioLIsta: "<<listaT.tamanio<<endl;
    return listaT;

}

void Lista::quitarPrimero(){
    if (isListaVacia()) {
        throw "La lista esta vacia";
    }else if(primero==ultimo){
        primero = NULL;
        ultimo = NULL;
        tamanio=0;
    }else{
        
        NodoLista* nodo = primero;
        primero = primero->siguiente;
        primero->anterio = NULL;
        tamanio--;
        delete nodo;
    }
    
}

void Lista::quitarUltimo(){
    if (isListaVacia()) {
        throw "La lista esta vacia";
    }else if(primero==ultimo){
        primero = NULL;
        ultimo = NULL;
        tamanio=0;
    }else{
        //Carta &aux = ultimo->carta;
        //aux.pintar();
        
        NodoLista* nodo = ultimo;
        ultimo = ultimo->anterio;
        ultimo->siguiente = NULL;
        ultimo->carta.SetEstado(1);
        tamanio--;
        delete nodo;
    }

}
void Lista::quitarBloque(int numero){
    NodoLista* actual;
    actual = primero;
    for (int i = 0; i <numero; i++) {
        quitarUltimo();
    }
    cout<<"Quito"<<"_______"<<endl;
}

void Lista::borrarLista(){
    
}
bool Lista::isTamanio(int numero){
    cout<<tamanio<<"<="<<numero<<endl;
    if(numero<=tamanio){
        
        return true;
    }
    return false;
}


void Lista::desplegarLista(){
    NodoLista* actual;
    actual = primero;

    if (!isListaVacia()) {
        
        while (actual!=NULL) {
            Carta &c = actual->carta;
            //cout<<actual->posicion<<endl;
            if(c.GetNumero()<10){
                cout<<"      "<<ends;
            }else{
                cout<<"      "<<ends;
            }
            if(c.GetEstado()==1){
                cout<<"|"<<c.getNumeroS()<<" "<<c.GetNombre()<<""<<c.getColorS()<<"|"<<ends;

            }else{
                if(c.GetNumero()<10){
                    cout<<"|#####|"<<ends;
                }else{
                    cout<<"|#####|"<<ends;
                }

            }
            actual = actual->siguiente;
        }
        cout<<""<<endl;
        cout<<""<<endl;
    }else{
        cout<<"    _______"<<endl;
        cout<<"       "<<"|     |"<<endl;
        cout<<"       "<<"¯¯¯¯¯¯¯"<<endl;
    }
    
    if(!isListaVacia()){
        while (actual!=NULL) {
            cout<<"       "<<"¯¯¯¯¯¯¯"<<ends;
        }
        
    }

}
Carta& Lista::getPrimero(){
    cout<<"Primero"<<"_______"<<endl;
    if (isListaVacia())
        throw "Cola vacía";
    
    cout<<"retorna Primero "<<endl;
    return primero->carta;
    
}
Carta& Lista::getUltimo(){
    if (isListaVacia())
        throw "Cola vacía";
    return ultimo->carta;
}

bool Lista::isListaVacia(){
    
    return primero == NULL;
}


void Lista::getAnterior(int numero){
    NodoLista* actual;
    actual = primero;
    
    while (actual!=NULL) {
        if(actual->posicion==numero){
            if(actual->anterio!=NULL){
                Carta &c = actual->anterio->carta;
                c.SetEstado(1);
                cout<<endl;
                cout<<"LA CARTA ANTERIO DE LA NUMERO "<<numero<<"ES: "<<endl;
                c.pintar();
                cout<<endl;
                break;
            }else{
                cout<<"LA CARTA ANTERIO DE LA NUMERO "<<numero<<"NO EXISTE: "<<endl;
                break;
            }
            
        }
        actual = actual->siguiente;
    }
    
}
void Lista::getSiguiente(int numero){
    NodoLista* actual;
    actual = primero;
    
    while (actual!=NULL) {
        if(actual->posicion==numero){
            if(actual->siguiente!=NULL){
                Carta &c = actual->siguiente->carta;
                c.SetEstado(1);
                cout<<endl;
                cout<<"LA CARTA SIGUIENTE DE LA NUMERO "<<numero<<"ES: "<<endl;
                c.pintar();
                cout<<endl;
                break;
            }else{
                cout<<"LA CARTA SIGUIENTE DE LA NUMERO "<<numero<<"NO EXISTE: "<<endl;
                break;
            }
        }
        actual = actual->siguiente;
    }
}

Lista::~Lista() {
    
    if(!isListaVacia()){
        while (!isListaVacia()) {
        if (isListaVacia()) {
        throw "La lista esta vacia";
        }else if(primero==ultimo){
            primero = NULL;
            ultimo = NULL;
            tamanio=0;
        }else{
            //Carta &aux = ultimo->carta;
            //aux.pintar();

            NodoLista* nodo = ultimo;
            ultimo = ultimo->anterio;
            ultimo->siguiente = NULL;
            ultimo->carta.SetEstado(1);
            tamanio--;
            delete nodo;
        }
        }
        NodoLista* nodo = primero;
        primero=NULL;
        ultimo = NULL;
        delete nodo;
    }

}