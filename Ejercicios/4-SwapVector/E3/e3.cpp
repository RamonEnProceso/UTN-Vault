#include <iostream>

using namespace std;

void ordenarBurbuja(int n, float arr[]){
    bool huboCambios = true;
    for(int i = 0; i<n-1 && huboCambios;i++){
        huboCambios = false;
        for(int j = 0; j < n - 1 - i; j++){
            if (arr[j]>arr[j+1]){
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                huboCambios = true;
            }
        }
    }
}

int busquedaBinaria(float x, int n, float arr[]){
    int izq = 0;
    int der = n-1;
    bool encontrado = false;
    int medio = -1;

    while (izq<=der && !encontrado){
        medio = (izq+der)/2;

        if(arr[medio]==x){
            encontrado = true;
        }else if (arr[medio] < x){
            izq = medio +1;
        }else{
            der = medio - 1;
        }

    }

    if(encontrado){return medio;};
    return -1;
}

int main(){

    int n = 0;
    while (n<1 || n>40){
        cout << "Ingrese el tamaño (menor a 40) que desea para el vector: ";
        cin >> n;
        cout << endl;
    }

    float x;

    float REFER[41]={};

    for (int i = 0; i<n; i++){
        cout << "Ingrese un valor para la posición "<< i+1 << " del vector:";
        cin >> REFER[i];
        cout<< endl;
    }

    ordenarBurbuja(n, REFER);
    
    cout << "Ingrese un valor para buscar en el vector: ";
    cin >> x;
    cout<<endl;

    int encontrado = busquedaBinaria(x,n,REFER);

    if (encontrado < 0){
        cout << "No se encontró X en ninguna posición";
        return 0;
    }else{
        cout << x << " se encontró en la posición " << encontrado + 1 << " del vector." << endl;
        
        if (encontrado > 0 && encontrado < n - 1) {
            cout << "Está entre " << REFER[encontrado-1] << " y " << REFER[encontrado+1] << endl;
        } else if (encontrado == 0 && n > 1) {
            cout << "Es el primer elemento, el siguiente es " << REFER[encontrado+1] << endl;
        } else if (encontrado == n - 1 && n > 1) {
            cout << "Es el último elemento, el anterior es " << REFER[encontrado-1] << endl;
        }
    }

    return 0;
}