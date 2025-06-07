#include <iostream>

using namespace std;

int main()
{
    string Estudiante, carnet;
    int sizecarnet;

    cout << "Ingrese nombre del estudiante" << endl;
    cin >> Estudiante;

    while (sizecarnet != 6)
    {
        cout << "Ingrese carnet" << endl;
        cin >> carnet;

        sizecarnet = carnet.length();
    }

    int opcion;
    int numnotaa, numnota = 0;
    int libro[9];
    int nomlibro;
    while (opcion != 4)
    {
        cout << "1- agregar nota" << endl;
        cout << "2-consultar notas" << endl;
        cout << "3- calcular promedio" << endl;
        cout << "4-salir" << endl;
        cin >> opcion;

        if (opcion == 1)
        {
            while (nomlibro < 0 or nomlibro >= 9)
            {
                cout << "Ingrese la nota que deseas agreagar" << endl;
                cin >> nomlibro;
                libro[numnota] = nomlibro;
    
                cout << "Nota agregada" << endl;
                numnota++;
                
            }
        }

        else if (opcion == 2)
        {
            cout << "Libros prestados " << libro[0] << libro[1] << libro[2] << libro[3] << libro[4] << libro[5] << libro[6] << libro[7] << libro[8] << endl;
        }
        else if (opcion == 3)
        {
            float promedio;
            promedio =  libro[0] + libro[1] + libro[2] + libro[3] + libro[4] + libro[5] + libro[6] + libro[7] + libro[8];
            promedio = promedio / 9;
            cout << promedio << endl;

        }
    }
    return numnota;
}
