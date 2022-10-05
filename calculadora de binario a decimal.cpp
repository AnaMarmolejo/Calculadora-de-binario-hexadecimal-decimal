#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int binario, resultado, resto = 0;
    int digito[8];
    string respuesta;

    cout << " 1-Introduce el numero en binario: " << endl;
    cin >> binario;

    for (int i = 0; i < 8; i++)
    {
        digito[i] = binario % 10;
        binario /= 10;
    }

    for (int i = 7; i >= 0; i--)
    {
        resultado = (resto * 2) + digito[i];
        resto = resultado;
    }

    cout << endl << "\n \nEl numero equivalente en decimal es:  " << resultado << endl;

    {
        int digitoex[20];
        int decimal, residuo, resultado, i = 0;

        cout << " \n \n 2-Introduce el numero decimal a convertir:  " << endl;
        cin >> decimal;

        do
        {
            residuo = decimal % 16;
            resultado = decimal / 16;
            digitoex[i] = residuo;
            decimal = resultado;
            i++;
        } while (resultado > 15);

        digitoex[i] = resultado;

        cout << "\n \nEl equivalente en hexadecimal es:  ";

        for (int j = i; j >= 0; j--)
        {
            if (digitoex[j] == 10)
            {
                cout << "A";
            }
            else if (digitoex[j] == 11)
            {
                cout << "B";
            }
            else if (digitoex[j] == 12)
            {
                cout << "C";
            }
            else if (digitoex[j] == 13)
            {
                cout << "D";
            }
            else if (digitoex[j] == 14)
            {
                cout << "E";
            }
            else if (digitoex[j] == 15)
            {
                cout << "F";
            }
            else
            {
                cout << digitoex[j];
            }
        }

        {
            int decimal;
            short binario[8];

            cout <<  "\n 3- Teclea el valor en decimal a convertir:  " << endl;
            cin >> decimal;

            for (int i = 0; i < 8; i++)
            {
                binario[i] = decimal % 2;
                decimal /= 2;
            }

            cout <<  "\n \n El numero en binario es:  " << endl;

            for (int i = 7; i >= 0; i--)
            {
                cout << binario[i];
            }

            cout << "\n Quieres hacer otra operacion (S/N)?\n\n";
            cin >> respuesta;
        }while (respuesta == "S" || respuesta == "s" || respuesta == "si" || respuesta == "Si" || respuesta == "SI");

        cout << "\n-------------Gracias por usar el programa-----------\n\n";

        system("pause");
        return 0;
        }
    }