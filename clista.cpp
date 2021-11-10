#include "clista.h"

cLista::cLista() {
    inicio.pSig = &final;
    final.pAnt = &inicio;
}

cLista::~cLista() {
    cNodo* temp;

    while (inicio.pSig != &final) {
        temp = inicio.pSig;
        inicio.pSig = inicio.pSig->pSig;

        delete temp;
    }
    final.pAnt = &inicio;
}

void cLista::insertar(cInfoPueblo *info) {
    final.pAnt->insertarAdelante(info);
}

cInfoPueblo *cLista::eliminar(std::string nombrePueblo) {
    cIterador it;

    for(it=begin(); it!=end(); it++)
        if(it.pActual->infoNodo->nombre == nombrePueblo)
            return it.pActual->pAnt->eliminarAdelante();

    return nullptr;
}

cInfoPueblo *cLista::buscar(std::string nombrePueblo) {
    cIterador it;

    for(it=begin(); it!=end(); it++)
        if(it.pActual->infoNodo->nombre == nombrePueblo)
            return it.pActual->infoNodo;

    return nullptr;
}

int cLista::size() {
    int contNodes = 0;
    cIterador it;

    for(it=begin(); it!=end(); it++)
        contNodes++;

    return contNodes;
}

bool cLista::isEmpty() {
    return inicio.pSig == &final;
}

bool cLista::isFull() {
    return false;
}

void cLista::imprimir() {
    cIterador it;

    std::cout << "List size: " << size() << std::endl;

    for(it=begin(); it!=end(); it++) {
        it.pActual->infoNodo->imprimir();
        std::cout << std::endl << std::endl;
    }

    std::cout << std::endl << std::endl;
}

cIterador &cLista::begin() {
    itBegin.setNodo(inicio.pSig);

    return itBegin;
}

cIterador &cLista::end() {
    itEnd.setNodo(&final);

    return itEnd;
}

void cLista::serializar(std::fstream &out) {
    out << CLSID_LISTA << std::endl;
    out << size() << std::endl;

    cIterador it;

    for(it=begin(); it!=end(); it++)
        it.pActual->infoNodo->serializar(out);
}
