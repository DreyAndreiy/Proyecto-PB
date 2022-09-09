#include <iostream>
#include <string>

using namespace std;

int a;
int b=1;
int c;

void agregarJuego() {
    char nombre[20];
    char id[10];
    char genero[20];

    cout << "Cuantos juegos vas a agregar?" << endl;
    cin >> c;
    for (int i = 0; i < c; i++) {
        cout << "Escriba el nombre del juego." << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.getline(nombre, 20, '\n');

        cout << "Escriba la ID del juego." << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.getline(id, 10, '\n');

        cout << "Escriba el genero del juego." << endl;
        cin.getline(genero, 20, '\n');
    }
}

int main()
{
    system("color 02");
    do{
        cout << "\t\t***%%%=======MENU=======%%%***" << endl;
        cout << "\t\t*** 1. Agregar videojuego. ***" << endl;
        cout << "\t\t***% 2. Limpiar pantalla. %***" << endl;
        cout << "\t\t*** 3. Salir del programa. ***" << endl;
        cout << "\t\t***%%%==================%%%***" << endl;
        cin >> a;

        switch (a) {
        case 1: {
            cout << "Vas a agregar un juego." << endl;
            agregarJuego();
            break;
        }

        case 2: {
            system("cls");
            break;
        }

        case 3: {
            cout << "Saliendo del programa..." << endl;
            b = b + 1;
            system("pause>null");
            break;
        }

        default: {
            cout << "Su opcion es incorrecta. Intente de nuevo." << endl;
            break;
        }
        }
    } while (b == 1);
    return 0;
}

