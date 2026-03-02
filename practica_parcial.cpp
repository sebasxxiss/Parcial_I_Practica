#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void leer_lista(Nodo *n)
{
    cout << "nodo con direccion " << n << endl;
    cout << "dato: " << n->dato << endl;
    cout << "siguiente: " << n->siguiente << endl;
    if (n->siguiente != nullptr)
    {
        leer_lista(n->siguiente);
    }
}

int main()
{
    int count = 1;
    int temp = 0;
    Nodo *cola = nullptr;
    Nodo *N = nullptr;
    Nodo *tempptr = nullptr;
    int MAX = 3;

    while (count <= MAX)
    {
        cout << "Escribe el valor número " << count << endl;
        cin >> temp;
        if (count == MAX)
        {
            N = tempptr;
            N->dato = temp;
            N->siguiente = nullptr;
            break;
        }
        if (count == 1)
        {
            cola = new Nodo;
            cola->dato = temp;
            cola->siguiente = new Nodo;
            tempptr = cola->siguiente;
        }
        else
        {
            N = tempptr;
            N->dato = temp;
            N->siguiente = new Nodo;
            tempptr = N->siguiente;
        }
        count++;
    }
    leer_lista(cola);
    cout << "Sebastián Rodas Melgar" << endl;

    Nodo *actual = cola;

    while (actual != nullptr)
    {
        Nodo *temp = actual;
        actual = actual->siguiente;
        delete temp;
    }

    cola = nullptr;
    return 0;
}