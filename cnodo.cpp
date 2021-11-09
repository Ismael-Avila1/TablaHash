#include "cnodo.h"

cNodo::cNodo() {
    pAnt = nullptr;
    pSig = nullptr;
}

cNodo::cNodo(cInfoPueblo* info) {
    infoNodo = info;
    pAnt = nullptr;
    pSig = nullptr;
}

void cNodo::insertarAdelante(cInfoPueblo* info) {
    cNodo* newNode = new cNodo(info);

    newNode->pSig = this->pSig;
    newNode->pAnt =this;

    this->pSig = newNode;
    this->pSig->pSig->pAnt = newNode;
}

cInfoPueblo* cNodo::eliminarAdelante() {
    cInfoPueblo* info;
    info = this->pSig->infoNodo;

    this->pSig = this->pSig->pSig;
    delete this->pSig->pAnt;
    this->pSig->pAnt = this;

    return info;
}
