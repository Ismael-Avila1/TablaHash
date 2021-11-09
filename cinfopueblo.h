#ifndef CINFOPUEBLO_H
#define CINFOPUEBLO_H

#include <iostream>
#include <string>

class cInfoPueblo {
private:
    std::string nombre;
    std::string estado;
    int MagicoDesde;
    std::string tipoClima;
    int tempMedia;
    std::string atraccPrincipal;

    cInfoPueblo();
    cInfoPueblo(std::string nombre, std::string estado, int magicoDesde, std::string clima, int temp, std::string atraccion);

    void imprimir();

    friend class cNodo;
    friend class cLista;
};

#endif // CINFOPUEBLO_H
