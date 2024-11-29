#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string ruc, producto;
    int unidades;
    double precio;
    char aux;
    ofstream archivo;
    archivo.open("output.txt");

    while (true) {
        cout << "RUC del cliente (X para terminar): ";
        cin >> ruc;
        if (ruc == "X") {
            break;
        }
        cout << endl;
        cin.get(aux); // Para capturar el salto de línea después del RUC
        cout << "Producto: ";
        getline(cin, producto);
        cout << "Unidades: ";
        cin >> unidades;
        cout << "Precio: ";
        cin >> precio;

        archivo << ruc << endl;
        archivo << unidades << endl;
        archivo << precio << endl;
        archivo << producto << endl;
    }

    archivo << "X";
    archivo.close();
    return 0;
}
