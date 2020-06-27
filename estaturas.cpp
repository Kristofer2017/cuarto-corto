#include <iostream>
using namespace std;
void media(int, float [], float *);
void comparacion(int *, int *, float, int, float []);

int main(void)
{
    float estaturas[30], promedio = 0.0, estatura = 0.0;
    int i = 0, arriba = 0, abajo = 0;

    cout << "\nIngrese las estaturas o Ctrl-z(+Enter) para finalizar\n\n";
    cout << "Ingresa una estatura: ";
    while(cin >> estatura && i<30){ //Saldra del while si no ingresa un valor o si se pasa de 30 el contador
        estaturas[i] = estatura;
        cout << "Ingresa una estatura: ";
        i++; //Este conador no debe sobrepasar 30, ademas servira de referencia como la longitud real del arreglo
    }
    media(i, estaturas, &promedio);
    comparacion(&arriba, &abajo, promedio, i, estaturas);
    cout << "\nEl promedio de estaturas es: " << promedio << endl;
    cout << "La cantidad de estaturas arriba de la media aritmetica son: " << arriba << endl;
    cout << "La cantidad de estaturas abajo de la media aritmetica son: " << abajo << endl;
}
//Funcion que calcula el promedio
void media(int longitud, float estaturas[], float *promedio)
{
    float suma = 0.0;
    for (int i=0; i<longitud; i++){
        suma += estaturas[i];
    }
    *promedio = suma/longitud;
    //Puede notarse que el promedio cambiara al volver a la funcion main
}
//Funcion que verifica si es mayor o menor que la media
void comparacion(int *mayores, int *menores, float promedio, int longitud, float estaturas[])
{
    for(int i=0; i<longitud; i++){
        //Se acumulan los datos de la funcion main, si es mayor o menor que el promedio
        if (estaturas[i]>promedio)
            *mayores += 1;
        if (estaturas[i]<promedio)
            *menores += 1;
    }
}