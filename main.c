#include <stdio.h>

using namespace std;

int main()
{
    int Usuarios[5][5];
    int opc, sw = 1, filas = (sizeof(Usuarios) / sizeof(Usuarios[0])) , columnas = (sizeof(Usuarios[0]) / sizeof(Usuarios[0][0]));
    for (int k = 1; k <= 25; k++)
    {
        cout << "HOLAA por favor seleccione una opcion usuario numero : " << k <<
            "\n 1. Se ingresan 8 valores y se obtiene el porcentaje de los mayores a 50"
            "\n 2. Se ingresan varios numeros y se muestra la suma de la serie de numeros anteriores a ese desde el 1"
            "\n 3. Se ingresan 9 numeros y se muestra el factorial de cada numero";
        cin >> opc;
        int** a;
        switch (opc)
        {
        case 1:
            int temp, Mayor60 = 0;
            double Porcentaje = 0;
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    cout << "ingrese un numero: " << endl;
                    cin >> temp;
                    Usuarios[i][j] = temp;
                    if (temp > 60)
                    {
                        Mayor60++;
                    }
                    cout << "Se ingreso el numero " + Usuarios[i][j];
                }
            }
            cout << "El porcentaje de numeros mayores DE 60 es de: " << Porcentaje << "%" << endl;
            break;
        case 2:
            temp = 0;
            int opc2, acum = 0;
            do
            {
                for (int i = 0; i < 25; i++)
                {
                    for (int j = 0; j < 25; j++)
                    {
                        cout << "Por favor ingrese un numero: " << endl;
                        cin >> temp;
                        Usuarios[i][j] = temp;
                        cout << "Se ingreso el numero " + Usuarios[i][j];
                        for (int m = temp; m = 1; m--)
                        {
                            acum += m;
                        }
                        cout << "La suma de la serie de numeros anteriores al seleccionado es: " << acum <<endl;
                    }
                    cout << "Desea seguir ingresando números? marque 1 si es aso y 0 si no" << endl;
                    cin >> opc2;
                    if (opc2 == 2)
                    {
                        break;
                    }
                }
            } while (opc2 == 1);
            break;
        case 3:
            int fact = 1;
            for (int i = 0; i < 9; i++)
            {
                for (int j = 0; j < 9; j++)
                {
                    cout << "Por favor ingrese un numero: " << endl;
                    cin >> temp;
                    Usuarios[i][j] = temp;
                    cout << "Se ingreso el numero " + Usuarios[i][j];
                    for (int n = temp - 1; n = 1 ; n--)
                    {
                        fact *= n;
                    }
                    cout << "El factorial del numero es: " << fact << endl;
                }
            }
            break;
        default:
            cout << "Opción no valida" << endl;
            break;
        }
    }
}
