#include "cinfopueblo.h"

cInfoPueblo::cInfoPueblo() {}

cInfoPueblo::cInfoPueblo(std::string nombre, std::string estado, int magicoDesde, std::string clima, int temp, std::string atraccion) {
    this->nombre = nombre;
    this->estado = estado;
    this->MagicoDesde = magicoDesde;
    this->tipoClima = clima;
    this->tempMedia = temp;
    this->atraccPrincipal = atraccion;
}

void cInfoPueblo::imprimir() {
    std::cout << "\t-----------------------------------------------------------------------------------";
    std::cout << "\n\n\t\t\t" << nombre << std::endl;
    std::cout << "\tEsta ubicado en el estado de " << estado << std::endl;
    std::cout << "\tEs considerado un pueblo magico por la Secretaria de Turismo desde " << MagicoDesde << std::endl;
    std::cout << "\tTiene un clima mayormente " << tipoClima << std::endl;
    std::cout << "\tLa temperatura media es de " << tempMedia << " grados Centigrados" << std::endl;
    std::cout << "\tSu atraccion principal es " << atraccPrincipal << std::endl;
}
