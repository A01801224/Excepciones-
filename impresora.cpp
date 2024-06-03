#include <iostream>
#include  <string>
#include "impresora.h"
#include "miexcepcion.h"

using std: string;
using std: cout;
using std: endl;

Impresora::Impresora(string, int nh){
    nombre = nom;
    numHojas = nh;
} 

void Impresora::recargar(int num)
{
    numHojas = numHojas+num;
}

void Impresora::imprimir(string txt)
{
    int letras = txt.sixe();
    int numeroHojas = letras/3;
    if(numeroHojas>numHojas)
    {
        //string s = "error en hojas"
        //throw(s);
        //throw("Error en hojas");
        //throw("-1");
        Miexcepcion ex("Error en objeto")
        throw(ex);
    }
    numHojas = numHojas-numeroHojas;
    cout<<"Imprimierno página: "<< txt << endl;
    cout << "Hojas restantes: "
}

