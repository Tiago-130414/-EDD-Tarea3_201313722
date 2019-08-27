#include <iostream>
#include "ArbolBB.h"
#include <string>
using namespace std;

int main()
{
    ArbolBB arbolitoObj;
    ArbolBB *arbolito = NULL;
    arbolitoObj.insertarNodo(arbolito,"luigi");
    arbolitoObj.insertarNodo(arbolito,"hammer");
    arbolitoObj.insertarNodo(arbolito,"mario");
    arbolitoObj.insertarNodo(arbolito,"peach");
    arbolitoObj.insertarNodo(arbolito,"pow");
    arbolitoObj.insertarNodo(arbolito,"fermin");
    arbolitoObj.graficarArbol(arbolito,"imagen1.dot");
    system("dot C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen1.dot -o C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen1.png -Tpng -Gcharset=utf8");
    arbolito = arbolitoObj.eliminarNodo(arbolito,"peach");
    arbolitoObj.limpiarCadenas();
    arbolitoObj.graficarArbol(arbolito,"imagen2.dot");
    system("dot C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen2.dot -o C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen2.png -Tpng -Gcharset=utf8");
    arbolitoObj.insertarNodo(arbolito,"shy_guy");
    arbolitoObj.insertarNodo(arbolito,"edd");
    arbolitoObj.limpiarCadenas();
    arbolitoObj.graficarArbol(arbolito,"imagen3.dot");
    system("dot C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen3.dot -o C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen3.png -Tpng -Gcharset=utf8");
    arbolito = arbolitoObj.eliminarNodo(arbolito,"pow");
    arbolitoObj.limpiarCadenas();
    arbolitoObj.graficarArbol(arbolito,"imagen4.dot");
    system("dot C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen4.dot -o C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen4.png -Tpng -Gcharset=utf8");
    arbolitoObj.insertarNodo(arbolito,"Boo");
    arbolitoObj.insertarNodo(arbolito,"Kamek");
    arbolitoObj.insertarNodo(arbolito,"star");
    arbolitoObj.insertarNodo(arbolito,"whomp");
    arbolitoObj.limpiarCadenas();
    arbolitoObj.graficarArbol(arbolito,"imagen5.dot");
    system("dot C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen5.dot -o C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen5.png -Tpng -Gcharset=utf8");
    arbolito  = arbolitoObj.eliminarNodo(arbolito,"shy_guy");
    arbolitoObj.limpiarCadenas();
    arbolitoObj.graficarArbol(arbolito,"imagen6.dot");
    system("dot C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen6.dot -o C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen6.png -Tpng -Gcharset=utf8");
    arbolito = arbolitoObj.eliminarNodo(arbolito,"mario");
    arbolitoObj.limpiarCadenas();
    arbolitoObj.graficarArbol(arbolito,"imagen7.dot");
    system("dot C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen7.dot -o C:\\Users\\santi\\OneDrive\\Desktop\\[EDD]Tarea3_201313722\\imagen7.png -Tpng -Gcharset=utf8");

    return 0;
}
