#include <iostream>
#include <fstream>

#include "ctablahash.h"
#include "cinfopueblo.h"

using namespace std;

int main()
{
    cTablaHash th;

    cInfoPueblo* pueblo1= new cInfoPueblo("Mazamitla", "Jalisco", 2005, "Semiseco y semi calido", 1, "Mundo Aventura Parque Ecologico");
    cInfoPueblo* pueblo2 = new cInfoPueblo("Sayulita", "Nayarit", 2015, "Tropical", 25, "Campamento tortuguero Sayulita");
    cInfoPueblo* pueblo3 = new cInfoPueblo("Isla Mujeres", "Quintana Roo", 2015, "Calido", 27, "Cabo Catoche");
    cInfoPueblo* pueblo4 = new cInfoPueblo("Tepoztlan", "Morelos", 2010, "Nublado", 18, "Sitio arqueologico Tepozteco");
    cInfoPueblo* pueblo5 = new cInfoPueblo("San Pedro Tlaquepaque", "Jalisco", 2018, "Semicalido", 20, "El Parian");

    cInfoPueblo* pueblo6 = new cInfoPueblo("Tapalpa", "Jalisco", 2002, "Fresco", 16, "Las Pilas");
    cInfoPueblo* pueblo7 = new cInfoPueblo("Casas Grandes", "Chihuahua", 2015, "Desertico", 17, "Zona Arqueologica Paquime");
    cInfoPueblo* pueblo8 = new cInfoPueblo("Valle de Bravo", "Estado de Mexico", 2005, "Templado", 18, "Monte Alto");
    cInfoPueblo* pueblo9 = new cInfoPueblo("Valladolid", "Yucatan", 2012, "Semi humedo", 25, "Cenote Yokzonot");
    cInfoPueblo* pueblo10 = new cInfoPueblo("Bernal", "Queretaro", 2005, "Semiseco y seco", 18, "Cadereyta de Montes");

    cInfoPueblo* pueblo11 = new cInfoPueblo("Real de Catorce", "San Luis Potosi", 2001, "Arido, templado", 18, "Tunel de Ogarrio");
    cInfoPueblo* pueblo12 = new cInfoPueblo("Cholula", "Puebla", 2012, "Calido y templado", 17, "Piramide de Cholula");
    cInfoPueblo* pueblo13 = new cInfoPueblo("Creel", "Chihuahua", 2007, "Seco", 24, "Barrancas del Cobre");
    cInfoPueblo* pueblo14 = new cInfoPueblo("Mapimi", "Durango", 2012, "Fresco y seco", 26, "Sierra del Sarnoso");
    cInfoPueblo* pueblo15 = new cInfoPueblo("Zacatlan", "Puebla", 2011, "Templado, subhumedo", 14, "Barranca de los Jilgueros");

    cInfoPueblo* pueblo16 = new cInfoPueblo("Huasca de Ocampo", "Hidalgo", 2001, "Templado, semi frio", 15, "Bosque de las Truchas");
    cInfoPueblo* pueblo17 = new cInfoPueblo("Mazunte", "Oaxaca", 2015, "Tropical", 27, "Iguanario de Barra del Potrero");
    cInfoPueblo* pueblo18 = new cInfoPueblo("Patzcuaro", "Michoacan", 2002, "Calido y templado", 15, "Casa de los Once Patios");
    cInfoPueblo* pueblo19 = new cInfoPueblo("Chiapa de Corzo", "Chiapas", 2012, "Calido, Subhumedo", 24, "Canion del Sumidero");
    cInfoPueblo* pueblo20 = new cInfoPueblo("Tequila", "Jalisco", 2003, "Semiarido, Subtropical", 23, "Tren Jose Cuervo Express");

    th.insertar(pueblo1);
    th.insertar(pueblo2);
    th.insertar(pueblo3);
    th.insertar(pueblo4);
    th.insertar(pueblo5);
    th.insertar(pueblo6);
    th.insertar(pueblo7);
    th.insertar(pueblo8);
    th.insertar(pueblo9);
    th.insertar(pueblo10);
    th.insertar(pueblo11);
    th.insertar(pueblo12);
    th.insertar(pueblo13);
    th.insertar(pueblo14);
    th.insertar(pueblo15);
    th.insertar(pueblo16);
    th.insertar(pueblo17);
    th.insertar(pueblo18);
    th.insertar(pueblo19);
    th.insertar(pueblo20);

    // Se imprimen los elementos insertados
    cout << "**********************************************************************************************" << endl << endl;
    cout << "\t\t\tImprimiendo elementos insertados" << endl << endl;
    th.imprimir();



    cout << "**********************************************************************************************" << endl << endl;
    cout << "\t\t\tBusquedas" << endl << endl;

    // Se realizan 4 busquedas

    cInfoPueblo* aux;

    // Caso exitoso
    aux = th.buscar("Sayulita", "Nayarit", 25);
    if(aux == nullptr)
        cout << "Pueblo inexistente" << endl;
    else
        aux->imprimir();

    cout << endl << endl;

    // caso exitoso
    aux = th.buscar("Cholula", "Puebla", 17);
    if(aux == nullptr)
        cout << "Pueblo inexistente" << endl;
    else
        aux->imprimir();

    cout << endl << endl;

    // caso fallido -> No existe en la tabla
    aux = th.buscar("Mier", "Tamaulipas", 40);
    if(aux == nullptr)
        cout << "Pueblo inexistente" << endl;
    else
        aux->imprimir();

    cout << endl << endl;

    // caso fallido -> parametro incorrecto
    aux = th.buscar("Cholula", "Puebla", 18);
    if(aux == nullptr)
        cout << "Pueblo inexistente" << endl;
    else
        aux->imprimir();



    cout << "**********************************************************************************************" << endl << endl;
    cout << "\t\t\tImpresion despues de eliminar" << endl << endl;

    th.eliminar("Mazunte", "Oaxaca", 27);
    th.eliminar("Tepoztlan", "Morelos", 18);
    th.eliminar("Chiapa de Corzo", "Chiapas", 24);

    th.imprimir();


    fstream salida("contenido.txt", ios_base::out);
    th.serializar(salida);
    salida.close();

    return 0;
}
