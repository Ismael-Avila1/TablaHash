#include "ctablahash.h"

cTablaHash::cTablaHash() {}

int cTablaHash::fnHash(std::string nombre, std::string estado, int temp) {
    int index;

    index = nombre.length() + estado.length();
    index = index*temp;

    index = index % SIZE;

    return index;
}

void cTablaHash::insertar(cInfoPueblo *info) {
    int index = fnHash(info->nombre, info->estado, info->tempMedia);

    arr[index].insertar(info);
}

cInfoPueblo* cTablaHash::buscar(std::string nombre, std::string estado, int temp) {
    int index = fnHash(nombre, estado, temp);

    return arr[index].buscar(nombre);
}

void cTablaHash::eliminar(std::string nombre, std::string estado, int temp) {
    int index = fnHash(nombre, estado, temp);

    arr[index].eliminar(nombre);
}

void cTablaHash::imprimir() {
    for(int i=0; i<SIZE; i++)
        arr[i].imprimir();
}

void cTablaHash::serializar(std::fstream &out) {
    for(int i=0; i<SIZE; i++)
        arr[i].serializar(out);
}
