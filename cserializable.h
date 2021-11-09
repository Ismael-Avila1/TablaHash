#ifndef CSERIALIZABLE_H
#define CSERIALIZABLE_H

#include <fstream>

class cSerializable {
public:
    cSerializable();

    virtual void Salvar(std::fstream& out) = 0;
    virtual void Cargar(std::fstream& in) = 0;
    virtual int GetCLSID() = 0;

    virtual ~cSerializable();
};

#endif // CSERIALIZABLE_H
