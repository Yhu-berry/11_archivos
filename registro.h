#ifndef REGISTRO_H
#define REGISTRO_H

struct tRegistro {
  char nombre[30];
  int cantidad;
  double precio;
};

const int SIZE = sizeof(tRegistro);

void mostrar(const tRegistro &registro);

#endif // REGISTRO_H
