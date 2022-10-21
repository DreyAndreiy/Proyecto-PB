#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Juegos {
    char numero[3];
    char juego[30];
    char anyo[4];
    char clasificacion[20];
    char caracteristicas[50];
    char descripcion[50];
    char genero[20];
    float precio;
    float impuesto;
    float total;
}juego1, juego2, juego3;

int a;
int b = 1;
int c;
int x = 0;

void agregarJuego() {

    if (x == 0) {
        cin.ignore();

        cout << "Ingrese el numero de articulo del nuevo juego." << endl;
        cin >> juego1.numero;

        cout << "\nIngrese el titulo del nuevo juego." << endl;
        cin >> juego1.juego;

        cout << "\nIngrese el anyo de estreno del nuevo juego." << endl;
        cin >> juego1.anyo;

        cout << "\nIngrese la clasificacion del nuevo juego." << endl;
        cin >> juego1.clasificacion;

        cout << "\nIngrese las caracteristicas del nuevo juego." << endl;
        cin >> juego1.caracteristicas;

        cout << "\nIngrese la descripcion del nuevo juego." << endl;
        cin >> juego1.descripcion;

        cout << "\nIngrese el genero del nuevo juego." << endl;
        cin >> juego1.genero;

        cout << "\nIngrese el precio del nuevo juego." << endl;
        cin >> juego1.precio;

        juego1.impuesto = (juego1.precio / 100) * 20;

        juego1.total = juego1.impuesto + juego1.precio;

    }
    if (x == 1) {
        cin.ignore();

        cout << "Ingrese el numero de articulo del nuevo juego." << endl;
        cin >> juego2.numero;

        cout << "\nIngrese el titulo del nuevo juego." << endl;
        cin >> juego2.juego;

        cout << "\nIngrese el anyo de estreno del nuevo juego." << endl;
        cin >> juego2.anyo;

        cout << "\nIngrese la clasificacion del nuevo juego." << endl;
        cin >> juego2.clasificacion;

        cout << "\nIngrese las caracteristicas del nuevo juego." << endl;
        cin >> juego2.caracteristicas;

        cout << "\nIngrese la descripcion del nuevo juego." << endl;
        cin >> juego2.descripcion;

        cout << "\nIngrese el genero del nuevo juego." << endl;
        cin >> juego2.genero;

        cout << "\nIngrese el precio del nuevo juego." << endl;
        cin >> juego2.precio;

        juego2.impuesto = (juego2.precio / 100) * 20;

        juego2.total = juego2.impuesto + juego2.precio;
    }
    if (x == 2) {
        cin.ignore();

        cout << "Ingrese el numero de articulo del nuevo juego." << endl;
        cin >> juego3.numero;

        cout << "\nIngrese el titulo del nuevo juego." << endl;
        cin >> juego3.juego;

        cout << "\nIngrese el anyo de estreno del nuevo juego." << endl;
        cin >> juego3.anyo;

        cout << "\nIngrese la clasificacion del nuevo juego." << endl;
        cin >> juego3.clasificacion;

        cout << "\nIngrese las caracteristicas del nuevo juego." << endl;
        cin >> juego3.caracteristicas;

        cout << "\nIngrese la descripcion del nuevo juego." << endl;
        cin >> juego3.descripcion;

        cout << "\nIngrese el genero del nuevo juego." << endl;
        cin >> juego3.genero;

        cout << "\nIngrese el precio del nuevo juego." << endl;
        cin >> juego3.precio;

        juego3.impuesto = (juego3.precio / 100) * 20;

        juego3.total = juego3.impuesto + juego3.precio;
    }
    x += 1;
    }

void verLista() {

    cout << "========================================================================================================================================================================" << endl;
    cout << "|     No. ARTICULO     |     TITULO     |     ANYO     |     CLASIFICACION     |     CARACTERISTICAS     |     DESCRIPCION     |     GENERO     |     PRECIO TOTAL     |" << endl;
    cout << juego1.numero << " || " << juego1.juego << " || " << juego1.anyo << " || " << juego1.clasificacion << " || " << juego1.caracteristicas << " || " << juego1.descripcion << " || " << juego1.genero << " || " << juego1.total << endl;
    if (x > 0) {
        cout << juego2.numero << " || " << juego2.juego << " || " << juego2.anyo << " || " << juego2.clasificacion << " || " << juego2.caracteristicas << " || " << juego2.descripcion << " || " << juego2.genero << " || " << juego2.total << endl;
    }
    if (x > 1) {
        cout << juego3.numero << " || " << juego3.juego << " || " << juego3.anyo << " || " << juego3.clasificacion << " || " << juego3.caracteristicas << " || " << juego3.descripcion << " || " << juego3.genero << " || " << juego3.total << endl;
    }
}

void main()
{

    system("color 02");
    do{
        cout << "\t\t***%%%======================MENU======================%%%***" << endl;
        cout << "\t\t***%               1. Agregar videojuego.               %***" << endl;
        cout << "\t\t***%                    2. Ver Lista.                   %***" << endl;
        cout << "\t\t***%                3. Limpiar pantalla.                %***" << endl;
        cout << "\t\t***%               4. Salir del programa.               %***" << endl;
        cout << "\t\t***%%%================================================%%%***" << endl;
        cin >> a;

        switch (a) {

        case 1: {
            if (x <= 2) {
                cout << "Vas a agregar un juego. (Max. 3)" << endl;
                agregarJuego();
            }
            else {
                cout << "Ya agregaste 3 juegos. Pulsa ENTER para continuar." << endl;
                _getch();
            }
            break;
        }

        case 2: {
            if (x > 0) {
                cout << "Vas a ver la lista de videojuegos." << endl;
                cout << "========================================================================================================" << endl;
                cout << "| No. ARTICULO | TITULO | ANYO | CLASIFICACION | CARACTERISTICAS | DESCRIPCION | GENERO | PRECIO TOTAL |" << endl;
                cout << juego1.numero << " || " << juego1.juego << " || " << juego1.anyo << " || " << juego1.clasificacion << " || " << juego1.caracteristicas << " || " << juego1.descripcion << " || " << juego1.genero << " || " << juego1.total << endl;
                if (x > 0) {
                    cout << juego2.numero << " || " << juego2.juego << " || " << juego2.anyo << " || " << juego2.clasificacion << " || " << juego2.caracteristicas << " || " << juego2.descripcion << " || " << juego2.genero << " || " << juego2.total << endl;
                }
                if (x > 1) {
                    cout << juego3.numero << " || " << juego3.juego << " || " << juego3.anyo << " || " << juego3.clasificacion << " || " << juego3.caracteristicas << " || " << juego3.descripcion << " || " << juego3.genero << " || " << juego3.total << endl;
                }
                _getch();
            }
            else {
                cout << "No has agregado juegos." << endl;
                _getch();
            }

        case 3: {
            system("cls");
            break;
        }

        case 4: {
            cout << "Saliendo del programa..." << endl;
            b = b + 1;
            system("PAUSE");
            break;
        }

        default: {
            cout << "Su opcion es incorrecta. Intente de nuevo." << endl;
            _getch();
            break;
        }
        }
        }
    } while (b == 1);
}

