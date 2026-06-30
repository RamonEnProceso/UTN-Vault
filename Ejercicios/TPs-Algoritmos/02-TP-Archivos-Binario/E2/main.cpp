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
    ifstream df("diafinales.dat", ios::binary);
    if(!df){
        cerr<<"No abrió";return 1;
    }

    ofstream mf("matfinales.dat", ios::binary);
    if(!mf){
        cerr<<"No abrió";return 2;
    }
    int codigoMateria;
    Boleta r; cout<<"Ingresar código-materia: "; cin>>codigoMateria;

    while(df.read((char*)& r, sizeof (Boleta))){
        if(r.codigoMateria == codigoMateria){
            mf.write((char*) & r, sizeof(Boleta));
        }
    }
    df.close();
    mf.close();
    return 0;
}