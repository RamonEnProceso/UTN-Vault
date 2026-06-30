#include <iostream>
#include <fstream>

using namespace std;

struct Boleta{
    int legajo;
    int codigoMateria;
    int dia;
    int mes;
    int anio;
    char nombreApellido[26];
};

int main(){
    ofstream arch("diafinales.dat", ios::binary);
    if(!arch){
        cerr<<"No abrio el archivo";
        return 1;
    }

    Boleta r;
    cout << "Nueva boleta: " << endl;

    cout << "Ingresar Nombre-Apellido: ";
    cin.getline(r.nombreApellido,26);
    cout<<endl;

    while(r.nombreApellido[0] != '\0'){
        cout<<"Ingresar legajo: "; cin >> r.legajo; cout<< endl;
        cout<<"Ingresar codigo-materia: "; cin >> r.codigoMateria; cout<< endl;
        cout<<"Ingresar dia: "; cin >> r.dia; cout<< endl;
        cout<<"Ingresar mes: "; cin >> r.mes; cout<< endl;
        cout<<"Ingresar año: "; cin >> r.anio; cout<< endl;
        cin.ignore();
        arch.write((char*) & r, sizeof(Boleta));
        cout<<"Ingresar Nombre-Apellido: "; cin.getline(r.nombreApellido,26); cout<< endl;
    }

    arch.close();
    return 0;
}