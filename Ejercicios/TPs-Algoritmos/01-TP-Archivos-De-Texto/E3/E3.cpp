#include <iostream>
#include <fstream>

using namespace std;

int main(){

    fstream curso("curso.txt", ios::in);
    if(!curso){
        cerr<<"No se pudo abrir el programa";
        return 0;
    }

    int legajo, promedio, legajoMayorPromedio, promedioGeneral;
    int mayorPromedio = 0;
    int cantidadAlumnos = 0;
    int sumaPromedios = 0;

    while(curso>>legajo>>promedio){
        cout<<legajo<<" "<<promedio<<endl;
        if(promedio>mayorPromedio){
            mayorPromedio = promedio;
            legajoMayorPromedio = legajo;
        }
        cantidadAlumnos++;
        sumaPromedios += promedio;
    }

    promedioGeneral = sumaPromedios/cantidadAlumnos;

    cout << endl << "Cantidad de alumnos: " << cantidadAlumnos << endl;
    cout << "Promedio general: " << promedioGeneral << endl;
    cout << "El legajo con mayor promedio fue: " << legajoMayorPromedio << " con un promedio de " << mayorPromedio << endl;

    curso.close();

    return 0;
}