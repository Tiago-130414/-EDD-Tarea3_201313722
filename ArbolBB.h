#ifndef ARBOLBB_H
#define ARBOLBB_H
#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class ArbolBB
{
    public:
        //attributes
        string nombreIMG;
        ArbolBB *izquierda;
        ArbolBB *derecha;
        //prototypes of function
        ArbolBB();
        bool estaVacio(ArbolBB *&raiz);
        ArbolBB* crearNodo(string imagen);
        void insertarNodo(ArbolBB *&raiz,string imagen);
        void recorridoPre(ArbolBB *&raiz);
        void recorridoInO(ArbolBB *&raiz);
        void recorridoPost(ArbolBB *&raiz);
        ArbolBB* eliminarNodo(ArbolBB *&raiz,string elimina);
        void graficarArbol(ArbolBB *&raiz,string nom);
        string listadoNodos(ArbolBB *&raiz);
        string apuntadores(ArbolBB *raiz);
        void limpiarCadenas();
    protected:

    private:
};

#endif // ARBOLBB_H
