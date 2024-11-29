#ifndef REGISTRO_H
#define REGISTRO_H

const int MAX =80;
struct tRegistroCod{
    int codigo;
    char item[MAX];
    double valor;
};

struct tRegistroNom{
  char nombre[30];
  int cantidad;
  double precio;
};

const int codtam = sizeof(tRegistroCod);
const int nomtam = sizeof(tRegistroNom);
void mostrarCod(const tRegistroCod &registro);
void mostrarNom(const tRegistroNom &registro);

#endif // REGISTRO_H
