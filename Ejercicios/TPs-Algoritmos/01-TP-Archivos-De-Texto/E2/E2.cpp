#include <fstream>
#include <iostream>

using namespace std;

int main(){

    ifstream curso("curso.txt");
    if(!curso){
        cerr << "No se pudo abrir el archivo curso.txt";
        return 0;
    }

    ofstream aprobados("aprob.txt", ios::app);
    if(!aprobados){
        cerr << "No se pudo abrir el archivo aprob.txt";
    }

    int legajo, promedio;

    aprobados<<"Listado de alumnos aprobados"<<endl;

    while(curso >> legajo >> promedio){
        if (promedio>=6){
            aprobados << legajo << " " << promedio << endl;
        }
        
    }

    curso.close();
    aprobados.close();

    cout<<"Se terminó de crear el archivo con los alumnos aprobados"<<endl;
}