#include <iostream>
using namespace std;
char murcielago(char);

int main(void)
{
    string frase;
    char palabra[101];
    int longitud1, longitud2; //Se declararan dos longitudes, unicamente para hacer coincidir la pocicion con el valor del arreglo

    cout << "\nSe va a codificar una palabra con la clave de murcielago\n\n";
    cout << "Ingrese una frase: ";
    getline(cin, frase); //Se uso este comando, aunque no fue visto pero se considero muy necesario y de gran ayuda para el ejercicio

    longitud1 = frase.length(); //Se calcula la longitud de la frase
    longitud2 = longitud1;
    //Longitud1 es para el for que va ascendentemente y Longitud2 para obtener los caracteres desde el primero hasta el ultimo en ese orden
    for(int i=0; i<longitud1 ; i++)
    {
        palabra[i]= frase[longitud1 -longitud2]; //Se van obteniendo los caracteres desdel primero hasta el ultimo
        longitud2--;
    }
    cout << "\nLa palabra con la codificacion de murcielago es: ";
    for(int i=0; i<longitud1 ; i++)
        cout << murcielago(palabra[i]); //La funcion se invoca en multiples ocaciones para verificar cada caracter
    cout << endl;
}
char murcielago(char letra)
{
    //Con un swith habria sido mas facil, pero se quiso considerar las mayusculas
    if(letra == 'm' || letra == 'M')
        return '0';
    if(letra == 'u' || letra == 'U')
        return '1';
    if(letra == 'r' || letra == 'R')
        return '2';
    if(letra == 'c' || letra == 'C')
        return '3';
    if(letra == 'i' || letra == 'I')
        return '4';
    if(letra == 'e' || letra == 'E')
        return '5';
    if(letra == 'l' || letra == 'L')
        return '6';
    if(letra == 'a' || letra == 'A')
        return '7';
    if(letra == 'g' || letra == 'G')
        return '8';
    if(letra == 'o' || letra == 'O')
        return '9';
    return letra; //En caso de no tener un codigo asignado, retorna la misma letra
}