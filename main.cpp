#include <iostream>
using namespace std;

int main() {

    int edad, num1, num2, digito, numfac, facto=1, x=1, numSerie ;

    cout << "Ingresa tu edad y te dire si eres mayor de edad o no" << endl;
    cin >> edad;
    if (edad >= 18) {
        cout << "Eres mayor de edad" << endl;
    } else {
        cout << "No eres mayor de edad" << endl;
    }

    cout << "Tienes dos numeros y quieres saber cual es Mayor???" << endl;
    cout << "INGRESA NUMERO 1" << endl;
    cin >> num1;
    cout << "INGRESA NUMERO 2" << endl;
    cin >> num2;

    if (num1 > num2) {
        cout << "Numero 1= " << num1 << " es mayor que Numero 2= " << num2 << endl;
    } else {
        cout << "Numero 2= " << num2 << " es mayor que Numero 1= " << num1 << endl;
    }

    cout << "Ingresa un numero te dire si es PAR o IMPAR" << endl;
    cin >> digito;

    if (digito % 2 == 0) {
        cout << "El numero " << digito << " es PAR" << endl;
    } else  {
        cout << "El nuemro " << digito << " es IMPAR" <<endl;
    }

    cout << "Ingresa un Numero y te dire su Factorial" << endl;
    cin >> numfac;

    while ( x <= numfac) {
        facto *= x;
        x++;
    }
    cout << "El Factorial de " << numfac << " es " << facto << endl;


    cout << "Escoge un numero entre 10 y 30" << endl;
    cin >> numSerie;

    for (int i = 1; i <= numSerie ; i+=2) {
        cout << i;
    }

    return 0;
}