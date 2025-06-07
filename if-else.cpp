#include <iostream>

using namespace std;

int main()
{
    int dia;
    cout << "Ingrese dia del mes 1-31" << endl;
    cin >> dia;

    if (dia <= 7)
    {
        cout << "Es la primera semana" << endl;
    }

    else if (dia > 7 and dia <= 14)
    {
        cout << "Es la segunda semana" << endl;
    }

    else if (dia > 14 and dia <= 21)
    {
        cout << "Es la tercera semana" << endl;
    }

    else
        cout << "Es otra semana" << endl;
    

    return 0;
}