#include <iostream>

using namespace std;

int main()
{
    string usuario, carnet;
    int sizecarnet;

    cout << "Ingrese nombre de ususario" << endl;
    cin >> usuario;
    
    while (sizecarnet != 8)
    {
        cout << "Ingrese carnet" << endl;
        cin >> carnet;
        
        sizecarnet = carnet.length();
    }

    int opcion;
    string libro[1] {"Sin datos"};
    while (opcion != 3)
    {
        cout << "1-Prestar libros" << endl;
        cout << "2-Devolver libro" << endl;
        cout << "3-Salir" << endl;
        cin >> opcion;
    
        if (opcion == 1)
        {
            string nomlibro;
            cout << "Ingrese que libro desea guardar" << endl;
            cin >> nomlibro;
            libro[0] = nomlibro;
    
            cout << "Prestamo exitoso" << endl;
        }
    
        else if (opcion == 2)
        {
            cout << "Libros prestados "<< libro[0] <<endl;
            libro[0] = "Sin datos";
            cout << "Libro devuelto" << endl;
        }
        
        
    }
    
    






    return 0;
}