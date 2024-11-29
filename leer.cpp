#include "registro.h"
#include <fstream>
#include <iostream>
using namespace std;

void mostrar(const tRegistro &registro) {
  cout << "Nombre: " << registro.nombre << endl;
  cout << "Cantidad: " << registro.cantidad << endl;
  cout << "Precio: " << registro.precio << endl;
  cout << "--------------------------" << endl;
}

int main() {
  tRegistro registro;
  fstream archivo;
  archivo.open("bd.dat", ios::in | ios::binary);
  if (!archivo) {
    cerr << "Error al abrir el archivo!" << endl;
    return 1;
  }

  while (archivo.read((char *)&registro, SIZE)) {
    mostrar(registro);
  }

  archivo.close();
  return 0;
}
