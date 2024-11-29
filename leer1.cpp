#include <iostream>
#include <fstream>
#include "registro.h"
using namespace std;

void mostrar(const tRegistroCod& registro) {
    cout << "Codigo: " << registro.codigo << endl;
    cout << "Nombre: " << registro.item << endl;
    cout << "Precio: " << registro.valor << endl;
    cout << "--------------------------" << endl;
}

int main() {
    tRegistroCod registro;
    fstream archivo;
    archivo.open("bd.dat", ios::out | ios::binary);
    bool seguir = true;
    while (seguir) {
        cout << "Codigo: ";
        cin.sync();
        cin >> registro.codigo;
        cout << "Nombre: ";
        cin.sync();
        cin.getline(registro.item, MAX); // MAX: 80
        cout << "Precio: ";
        cin.sync();
        cin >> registro.valor;
        archivo.write((char*)&registro, codtam);
        cout << "Otro [S/N]? ";
        char c;
        cin >> c;
        if ((c == 'n') || (c == 'N')) {
            seguir = false;
        }
    }
    archivo.close();
    return 0;
}
