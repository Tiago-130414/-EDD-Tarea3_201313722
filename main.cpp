#include <iostream>
#include "ArbolBB.h"
#include <string>
using namespace std;

int main()
{
    ArbolBB arbolitoObj;
    ArbolBB *arbolito = NULL;
    arbolitoObj.insertarNodo(arbolito,"Mario1");
    arbolitoObj.insertarNodo(arbolito,"Pikachu");
    arbolitoObj.insertarNodo(arbolito,"Boo");
    arbolitoObj.insertarNodo(arbolito,"Geoff");
    arbolitoObj.insertarNodo(arbolito,"Mario2");
    arbolitoObj.insertarNodo(arbolito,"Mushroom");
    arbolitoObj.insertarNodo(arbolito,"santiago1");
    arbolitoObj.insertarNodo(arbolito,"santiago2");
    arbolitoObj.insertarNodo(arbolito,"Andre");
    arbolitoObj.recorridoInO(arbolito);
    cout<<"\n"<<"-------"<<endl;
     arbolitoObj.graficarArbol(arbolito);
    cout<<"\n"<<"-------"<<endl;
   /* arbolitoObj.recorridoInO(arbolito);
    cout<<"\n"<<"-------"<<endl;
    arbolitoObj.recorridoPre(arbolito);
    cout<<"\n"<<"-------"<<endl;
    arbolitoObj.recorridoPost(arbolito);*/
    return 0;
}
