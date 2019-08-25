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
    arbolitoObj.recorridoInO(arbolito);
    cout<<"\n"<<"-------"<<endl;
    arbolito = arbolitoObj.eliminarNodo(arbolito,"Boo");
    arbolitoObj.recorridoInO(arbolito);
    cout<<"\n"<<"-------"<<endl;
   /* arbolitoObj.recorridoInO(arbolito);
    cout<<"\n"<<"-------"<<endl;
    arbolitoObj.recorridoPre(arbolito);
    cout<<"\n"<<"-------"<<endl;
    arbolitoObj.recorridoPost(arbolito);*/
    return 0;
}
