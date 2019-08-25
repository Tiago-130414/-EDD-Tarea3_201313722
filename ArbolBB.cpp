#include "ArbolBB.h"
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
ArbolBB::ArbolBB()
{
    //ctor
}

bool ArbolBB::estaVacio(ArbolBB *&raiz)
{
    return (raiz==NULL)? true:false;
}

ArbolBB* ArbolBB::crearNodo(string imagen)
{
    ArbolBB *nuevo_nodo = new ArbolBB();
    nuevo_nodo->nombreIMG = imagen;
    nuevo_nodo->izquierda = NULL;
    nuevo_nodo->derecha = NULL;
    return nuevo_nodo;
}

void ArbolBB::insertarNodo(ArbolBB *&raiz,string imagen){
    if(raiz==NULL){
        ArbolBB *nuevo = crearNodo(imagen);
        raiz = nuevo;
    }else{
        string r = raiz->nombreIMG;
        if(imagen<r){
            insertarNodo(raiz->izquierda,imagen);
        }else{
            insertarNodo(raiz->derecha,imagen);
        }
    }
}

void ArbolBB::recorridoPre(ArbolBB *&raiz)
{
    if(estaVacio(raiz))
    {
        return;

    }else
    {
        cout<<raiz->nombreIMG<<"-";
        recorridoPre(raiz->izquierda);
        recorridoPre(raiz->derecha);
    }
}

void ArbolBB::recorridoInO(ArbolBB *&raiz)
{
    if(estaVacio(raiz))
    {
        return;
    }else
    {
        recorridoInO(raiz->izquierda);
        cout<<raiz->nombreIMG<<"-";
        recorridoInO(raiz->derecha);
    }

}

void ArbolBB::recorridoPost(ArbolBB *&raiz)
{
    if(estaVacio(raiz))
    {
        return;

    }else
    {
        recorridoPost(raiz->izquierda);
        recorridoPost(raiz->derecha);
        cout<<raiz->nombreIMG<<"-";

    }

}

ArbolBB* ArbolBB::eliminarNodo(ArbolBB *&raiz,string elimina)
{
    if(estaVacio(raiz)){
        return raiz;
    }
    if(raiz->nombreIMG>elimina)
    {
       raiz->izquierda=eliminarNodo(raiz->izquierda,elimina);
       return raiz;
    }
    else if(raiz->nombreIMG<elimina)
    {
        raiz->derecha = eliminarNodo(raiz->derecha,elimina);
        return raiz;
    }

    if(raiz->izquierda==NULL)
    {
        ArbolBB *temp = raiz->derecha;
        delete raiz;
        return temp;
    }
    else if(raiz->derecha==NULL)
    {
        ArbolBB *temp = raiz->izquierda;
        delete raiz;
        return temp;
    }
    else{
        ArbolBB *scc = raiz->derecha;
        ArbolBB *temp = raiz->derecha;
        while(temp->izquierda!=NULL){
            scc = temp;
            temp = temp->izquierda;
        }

        scc->izquierda = temp->derecha;
        raiz->nombreIMG = temp->nombreIMG;
        delete temp;
        return raiz;
    }
}
