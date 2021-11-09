#ifndef CNODO_H
#define CNODO_H

#include "cinfopueblo.h"

class cNodo {
private:
    cInfoPueblo* infoNodo;
    cNodo* pAnt;
    cNodo* pSig;

    cNodo();
    cNodo(cInfoPueblo* info);

    void insertarAdelante(cInfoPueblo* info);
    cInfoPueblo* eliminarAdelante();

    friend class cIterador;
    friend class cLista;
};

#endif // CNODO_H
