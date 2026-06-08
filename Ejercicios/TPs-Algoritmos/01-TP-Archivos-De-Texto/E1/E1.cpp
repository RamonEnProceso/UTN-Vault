#include <fstream>
#include <iostream>

using namespace std;

int main(){

    ofstream archivo("curso.txt", ios::app);

    if(!archivo){
        cerr << "No se pudo abrir el archivo";
        return 0;
    }

    int legajo,nota1,nota2,promedio;

    cout << "Ingrese un legajo (o -1 para salir): ";
    cin >> legajo;
    cout << endl;

    while(legajo > 0){
        cout <<"Ingrese la primera nota del alumno: ";
        cin >> nota1;
        cout << endl;

        cout << "Ingrese la segunda nota del alumno: ";
        cin >> nota2;
        cout << endl;

        promedio = (nota1 + nota2)/2;
        archivo << legajo << " " << promedio << endl;

        cout << "Ingrese un legajo (o -1 para salir): ";
        cin >> legajo;
        cout << endl;
    }

    archivo.close();
    return 0;

}