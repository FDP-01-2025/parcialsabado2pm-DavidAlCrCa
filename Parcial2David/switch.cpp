#include <iostream>

using namespace std;

int main()
{
    int color;
    cout << "--Ingrese un color--" << endl;
    cout << "1-rojo" << endl;
    cout << "2-verde" << endl;
    cout << "3-azul" << endl;
    cin >> color;

    switch (color)
    {
    case 1:
        cout << "El color del amor" << endl;
        break;
    case 2:
        cout << "El color de la naturaleza" << endl;
        break;
    case 3:
        cout << "El color de la serenidad" << endl;
        break;
    
    default:
        break;
    }
    return 0;
}