#include <iostream>
#include <fstream>

using namespace std;

struct Contenedor{
    int id;
    float peso;
    int puerto;
};

int cargar(Contenedor v[], int max){
    ifstream arch("contenedores.txt");
    if(!arch){return -1;}
    int n = 0;

    while(n<max && arch>>v[n].id>>v[n].peso>>v[n].puerto){
        n++;
    }
    arch.close();
    return n;
}

void ordenarBurbuja(Contenedor v[], int n){
    bool cambio = true;
    int final = n;
    while (cambio)
    {
        cambio = false;
        final--;
        for (int i = 0; i < final; i++){
            if(v[i].id > v[i+1].id){
                Contenedor temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                cambio = true;
            }
        }
    }
}


int busquedaBinaria(Contenedor v[], int n, int id){
    int der = n-1;
    int izq = 0;
    int mid;

    while (izq <= der){
        mid = (der+izq)/2;

        if(v[mid].id == id){
            return mid;
        }
        if(v[mid].id > id){
            der = mid - 1;
        }
        else{
            izq = mid + 1;
        }
    }
    return -1;
}

int main(){
    Contenedor v[100];
    int cant = cargar(v, 100);
    if(cant == -1){cerr<<"No se pudo cargar correctamente el archivo"; return 1;}

    ordenarBurbuja(v, cant);

    for(int i=0; i<cant; i++){
        cout<<v[i].id<< ". " << "Peso: " << v[i].peso << ", Puerto: " << v[i].puerto << endl;
    }

    int id = 0;
    int pos = -1;

    cout<<"Ingrese el id del contenedor que desea buscar: ";
    cin >> id; cout << endl;

    pos = busquedaBinaria(v, cant, id);
    if(pos == -1){cout << "No existe/ encontró un contenedor con ese ID"; return 1;}
    
    cout<< "Se ha encontrado el contenedor con el id " << id << ", se encuentra en la posición " << pos << endl;

    return 0;
}