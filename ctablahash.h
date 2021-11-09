#ifndef CTABLAHASH_H
#define CTABLAHASH_H

#include "clista.h"

#define SIZE 17

class cTablaHash {
private:
    cLista arr[SIZE];

    int fnHash(std::string nombre, std::string estado, int temp);

public:
    cTablaHash();

    void insertar(cInfoPueblo* info);
    cInfoPueblo* buscar(std::string nombre, std::string estado, int temp);
    void eliminar(std::string nombre, std::string estado, int temp);

    void imprimir();
    void serializar(std::fstream& out);
};

#endif // CTABLAHASH_H
