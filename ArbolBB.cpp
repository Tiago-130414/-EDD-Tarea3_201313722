#include "ArbolBB.h"
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;
string cad="";
string cad3="";
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
    if(estaVacio(raiz)){
        ArbolBB *nuevo = crearNodo(imagen);
        raiz = nuevo;
    }else{
        string r = raiz->nombreIMG;
        if(imagen>r){
            insertarNodo(raiz->derecha,imagen);
        }else{
            insertarNodo(raiz->izquierda,imagen);
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

void ArbolBB::graficarArbol(ArbolBB *&raiz,string nom)
{

    string cad2;
    string cad4;
    ofstream archivo;
    archivo.open("C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\"+nom,ios::out);
    if(archivo.fail())
    {
        cout<<"Error al crear archivo";
        exit(1);
    }
    archivo<<"digraph arbol\n{"<<endl;
    archivo<<"\trankdir=TB;"<<endl;
    archivo<<"\tordering=out;";
    archivo<<"\tgraph [splines=compound,nodesep=0.5];"<<endl;
    //archivo<<"\tsubgraph cluster_0{"<<endl;
    //archivo<<"\tstyle=filled;"<<endl;
   // archivo<<"\tcolor=lightgrey;"<<endl;
    //archivo<<"\tlabelloc=t;"<<endl;
    archivo<<"\tnode [shape = record, style=\"rounded,filled\", fillcolor=\"orange:red\",width=0.7,height=0.2];"<<endl;
    cad2 = listadoNodos(raiz);
    cad4 = apuntadores(raiz);
    archivo<<"\n";
    archivo<<cad2<<endl;
    archivo<<"\n";
    archivo<<cad4<<endl;
    archivo<<"\n";
    //archivo<<"\tlabel=\"Arbol Binario De Busqueda\";"<<endl;
    //archivo<<"\t}"<<endl;
    archivo<<"}"<<endl;
    archivo.close();
    //system("dot C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\arbol.dot -o C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\arbol.png -Tpng -Gcharset=utf8");
    //system("C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\arbol.png");
}

string ArbolBB::listadoNodos(ArbolBB *&raiz)
{
    if(estaVacio(raiz))
    {
        return cad;
    }else
    {
        listadoNodos(raiz->izquierda);
        cad+= "\tNodo"+raiz->nombreIMG+"[label=\"<izquierda>|"+raiz->nombreIMG+"|<derecha>\"];\n";
        listadoNodos(raiz->derecha);
    }
    return cad;
}

string ArbolBB::apuntadores(ArbolBB *raiz)
{
      if(estaVacio(raiz))
    {
        return cad3;
    }else
    {

        apuntadores(raiz->izquierda);
        if(raiz->izquierda!=nullptr){
        cad3 += "\tNodo"+raiz->nombreIMG+":izquierda->Nodo"+raiz->izquierda->nombreIMG+";\n";
        }

        if(raiz->derecha!=nullptr){
        cad3 += "\tNodo"+raiz->nombreIMG+":derecha->Nodo"+raiz->derecha->nombreIMG+";\n";
         }
        apuntadores(raiz->derecha);

    }
    return cad3;
}

void ArbolBB::limpiarCadenas(){
    cad = "";
    cad3= "";
}
