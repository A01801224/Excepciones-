#include <iostream>
#include <string>
#include "impresora.h"
#include "miexcepcion.h"

using std: string;
using std: cout;
using std: endl;

int main(){
    Impresora dell("Dell-4561", 50)
    try{
    dell.imprimir("imprimr");
    dell.imprimir("La investigación es el trabajo creativo y sistemático realizado para aumentar el acervo de conocimientos.​ Implica la recopilación, organización y análisis de información para aumentar la comprensión de un tema o problema. Un proyecto de investigación puede ser una expansión del trabajo anterior en el campo.");
    
    }

    catch(string &s)
    {
        cout<<"string lanzado, mensaje es: "<<s<<endl;
    }

    catch(Miexcepcion &m)
    {
        cout<<
    }

    catch(const char *  s)
    {
        cout<<"char lanzado, mensaje es: "<<s<<endl;
    }

    catch(int i)
    {
        cout<<"entero lanzado, mensaje es: "<<s<<endl;
    }

    catch(...)
    {
        cout<< "En el atrapa todo" << endl;
    } 
    return 0;
}