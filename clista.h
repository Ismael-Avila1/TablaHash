#ifndef CLISTA_H
#define CLISTA_H

#include <fstream>

#include "cnodo.h"
#include "citerador.h"

#define CLSID_LISTA 1000

class cLista {
private:
    cNodo inicio;
    cNodo final;

    cIterador itBegin;
    cIterador itEnd;

public:
    cLista();
    ~cLista();

    void insertar(cInfoPueblo* info);   // Inserta al final de la lista
    cInfoPueblo* eliminar(std::string nombrePueblo);    // Busca elemento a eliminar
    cInfoPueblo* buscar(std::string nombrePueblo);

    int size();

    bool isEmpty();
    bool isFull();

    void imprimir();

    cIterador& begin();
    cIterador& end();

    void serializar(std::fstream& out);
};

#endif // CLISTA_H
