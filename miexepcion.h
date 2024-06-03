#include <exception>
#include <<iostream>
using std::string
using std::cout;
using std::endl;
using std::exception

class Miexcepcion : public exception
{
    public:
    string mensaje;
    Miexepxion(string m)
    {
        mensaje = m;
    }
    void imprimir()
    {
        cout<<"En objeto miexcepcion el mensaje es: " <<mensaje<<endl;

    }
};