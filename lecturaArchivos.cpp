#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>// Incluye fixed y setprecision(2) para mostrar valores con dos decimales

using namespace std;

int main() {
    const int IGV = 21;
    string ruc, producto;
    int unidades;
    double precio, neto, total, igv;
    char aux;
    ifstream archivo;
    int contador = 0;  
    archivo.open("Compras.txt");

    if (archivo.is_open()) {
        cout << "Archivo abierto correctamente" << endl;  
        archivo >> ruc; 
        while (ruc != "X") {
            archivo >> unidades >> precio;
            archivo.get(aux);
            getline(archivo, producto);
            contador++;

            neto = unidades * precio;
            igv = neto * IGV / 100;
            total = neto + igv;

            cout << "Compra " << contador << ".-" << endl;
            cout << "  " << producto << ": " << unidades << " x " << fixed << setprecision(2) << precio 
                 << " = " << neto << " - I.G.V: " << igv << " - Total: " << total << endl;

            archivo >> ruc;
        }  
        archivo.close();
    } else {
        cout << "ERROR" << endl;
    }  
    
    return 0;
}
