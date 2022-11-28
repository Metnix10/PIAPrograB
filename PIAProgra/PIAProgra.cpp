#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int op;
int opcrgn;
int pr[100];
int i = 0, z = 1, r, m = 0, l, b;
string nombres[100][6];

void agregar();
void output();
void ver();
void modificar();
void eliminar();
//void leer();
void salir();

int main()
{
    do
    {
        cout << "===========MENU===========\n" << endl;
        cout << "1) Agregar" << endl;
        cout << "2) Modificar" << endl;
        cout << "3) Ver Art\241culos" << endl;
        cout << "4) Eliminar" << endl;
        cout << "5) Salir\n" << endl;
        cout << "Qu\202 acci\242n desea realizar?\n";
        cin >> op;
        switch (op)
        {
        case 1: {
            system("cls");
            agregar();
            r = 5;
            break;
        }
        case 2: {
            system("cls");
            modificar();
            r = 5;
            break;
        }
        case 3: {
            system("cls");
            ver();
            r = 5;
            break;
        }
        case 4: {
            system("cls");
            eliminar();
            r = 5;
            break;
        }
        case 5: {
            salir();
            return(0);
            break;
        }

        }
        r = 6;
    } while (r == 5);
}

void agregar() {
    i++;
    cout << "N\243mero de videojuego: " << i << endl;
    cout << "Introduzca el nombre del videojuego: ";
    getline(cin, nombres[i][5]);
    cout << "Introduzca el anio de lanzamiento: ";
    getline(cin, nombres[i][4]);
    cout << "Introduzca la clasificaci\242n: ";
    getline(cin, nombres[i][3]);
    cout << "Introduzca las caracter\241sticas: ";
    getline(cin, nombres[i][2]);
    cout << "Introduzca la descripci\242n: ";
    getline(cin, nombres[i][1]);
    cout << "Introduzca el g\202nero: ";
    getline(cin, nombres[i][0]);
    cout << "Introduzca el precio: ";
    cin >> pr[i];
    cout << endl;
    output();

}

void output() {
    cout << "Nombre: " << nombres[i][5] << endl;
    cout << "Anio de lanzamiento: " << nombres[i][4] << endl;
    cout << "Clasificaci\242n: " << nombres[i][3] << endl;
    cout << "Caracter\241sticas: " << nombres[i][2] << endl;
    cout << "Descripci\242n: " << nombres[i][1] << endl;
    cout << "G\202nero: " << nombres[i][0] << endl;
    cout << "El precio es de: $" << pr[i] << endl;
    cout << endl;
    cout << "Si desea agregar otro videojuego digite 1" << endl;
    cout << "Si desea regresar al men\243 digite 2" << endl;
    cin >> op;
    system("cls");
    if (op == 1) {
        agregar();
    }
    if (op == 2) {
        main();
    }
}

void ver() {
    cout << "===========LISTA===========\n" << endl;
    for (int j = 1; j <= i; j++)
    {
        cout << "Juego n\243mero " << j << endl;
        cout << "Nombre: " << nombres[j][5] << endl;
        cout << "Anio de lanzamiento: " << nombres[j][4] << endl;
        cout << "Clasificaci\242n: " << nombres[j][3] << endl;
        cout << "Caracter\241sticas: " << nombres[j][2] << endl;
        cout << "Descripci\242n: " << nombres[j][1] << endl;
        cout << "G\202nero: " << nombres[j][0] << endl;
        cout << "El precio es de: $" << pr[j] << endl;
        cout << endl;
    }
    cout << "Digite cualquier n\243mero para regresar al men\243" << endl;
    cin >> opcrgn;
    system("cls");
    main();
}

void modificar() {
    cout << "Qu\202 n\243mero de registro desea modificar?" << endl;
    cin >> m;
    cout << "N\243mero de videojuego: " << m << endl;
    cout << "Introduzca el nombre del videojuego: ";
    getline(cin, nombres[i][5]);
    cout << "Introduzca el anio de lanzamiento: ";
    getline(cin, nombres[i][4]);
    cout << "Introduzca la clasificaci\242n: ";
    getline(cin, nombres[i][3]);
    cout << "Introduzca las caracter\241sticas: ";
    getline(cin, nombres[i][2]);
    cout << "Introduzca la descripci\242n: ";
    getline(cin, nombres[i][1]);
    cout << "Introduzca el g\202nero: ";
    getline(cin, nombres[i][0]);
    cout << "Introduzca el precio: ";
    cin >> pr[m];
    cout << endl;
    cout << "Digite cualquier n\243mero para regresar al men\243" << endl;
    cin >> opcrgn;
    system("cls");
    main();
}

void eliminar() {
    cout << "Qu\202 registro desea eliminar?" << endl;
    cin >> l;
    if (l <= i) {
        nombres[l][5] = "";
        nombres[l][4] = "";
        nombres[l][3] = "";
        nombres[l][2] = "";
        nombres[l][1] = "";
        nombres[l][0] = "";
        pr[l] = 0;
        cout << "Se ha eliminado el registro " << l << endl;
    }
    else {
        cout << "No existe ese registro" << endl;
    }
    cout << "Digite cualquier n\243mero para regresar al men\243" << endl;
    cin >> opcrgn;
    system("cls");
    main();
}

//void leer() {
//    ifstream archivo_entrada("archivo.txt");
//    string linea;
//
//    if (archivo_entrada.fail()) {
//        cout << "El archivo no se abrio correctamente" << endl;
//    }
//    int i = 0;
//    while (!getline(archivo_entrada, linea).eof()) {
//        juegos[i].id = stoi(linea);
//        getline(archivo_entrada, linea);
//        juegos[i].nombre = linea;
//        i++;
//    }
//    for (int j = 0; !getline(archivo_entrada, linea).eof(); j++) {
//    }
//}

void salir() {
    op = 5;
}