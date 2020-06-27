#include <iostream>
using namespace std;
void leer_matriz(int, float [5][101]);
void promedio(int, float [5][101]);

int main(void)
{
    float notas[5][101]; //Se le da un numero muy alto al numero de estudiantes que puede ingresar
    int estudiantes;

    cout << "\nCalcular la nota final de n estudiantes\n\n";
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> estudiantes;
    cout << endl;
    //En dado caso se intente sobrepasar, se le solicita un numero menor
    while(estudiantes > 101)
    {
        cout << "El numero es demaciado grande, el limite son 100 estudiantes. Prueba un numero menor: ";
        cin >> estudiantes;
        cout << endl;
    }
    leer_matriz(estudiantes, notas); //Llamada a la funcion que lee los datos
    promedio(estudiantes, notas); //Llamada a la funcion que calcula el promedio y muestra el estado(aprobado/reprobado)
}
//Esta es la funcion que leera los datos de la matriz
void leer_matriz(int estudiantes, float notas[5][101])
{
    for(int alumno=0; alumno<estudiantes; alumno++){
        for(int nota=0; nota<5; nota++){
            //Se dan indicaciones de como se llenara la matriz
            cout << "Ingrese la nota " << nota + 1 << " para el estudiante " << alumno + 1 << ": ";
            cin >> notas[nota][alumno];
        }
        cout << endl;
    }
}
//Esta es la funcion que calcula el promedio y muestra el estado(aprobado/reprobado)
void promedio(int estudiantes, float notas[5][101])
{
    for(int alumno=0; alumno<estudiantes; alumno++){   
        //Los valores son reiniciados cada vez que llegamos aqui, para que no acumule el promedio anterior
        float porcentaje=0.0, promedio=0.0;       
        for( int nota=0; nota<5; nota++){  
            porcentaje = 0.20 * notas[nota][alumno];
            promedio += porcentaje;
        }
        cout << "\nEl promedio para el estudiante " << alumno + 1 << " es: " << promedio;
        //Se tomara como nota minima para aprobar 7.00
        if(promedio >= 7.00){
            cout << "\nEl estudiante " << alumno + 1 << " esta aprobado\n";
        }else{
            cout << "\nEl estudiante " << alumno + 1 << " esta reprobado\n";
        }
    }
}