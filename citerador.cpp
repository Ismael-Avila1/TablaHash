#include "citerador.h"

cIterador::cIterador() {}

void cIterador::setNodo(cNodo *pNodo) {
    pActual = pNodo;
}

void cIterador::insertarAdelante(cInfoPueblo *info) {
    pActual->insertarAdelante(info);
}

cInfoPueblo *cIterador::eliminarAdelante() {
    return pActual->eliminarAdelante();
}

void cIterador::operator =(cIterador &otro) {
    pActual = otro.pActual;
}

bool cIterador::operator ==(cIterador &otro) {
    return (pActual == otro.pActual);
}

bool cIterador::operator !=(cIterador &otro) {
    return (pActual != otro.pActual);
}

void cIterador::operator ++() {
    pActual = pActual->pSig;
}

void cIterador::operator --() {
    pActual = pActual->pAnt;
}

void cIterador::operator ++(int) {
    pActual = pActual->pSig;
}

void cIterador::operator --(int) {
    pActual = pActual->pAnt;
}
