#include <iostream>
#include "ordenarVector.hpp"

using namespace std;

int main(){

    int n = 0;

    while(n < 1 || n > 50){
        cout<<"Ingrese el numero del tamaño del vector que desea: ";
        cin>>n;
        cout<<endl;
    }

    int SINOR[50] = {};
    int pos[50] = {};

    for(int i = 0; i < n; i++){
        cout << "Ingrese el numero que desea para la posicion "<< i+1 << ": ";
        cin >> SINOR[i];
        cout<< endl;
        while(SINOR[i] < 0){
            cout << "Ingrese el numero que desea para la posicion "<< i+1 << ": ";
            cin >> SINOR[i];
            cout<< endl;
        }
        pos[i] = i+1;
    }


    burbujaOptimizada(n, SINOR,pos);

    for(int i = 0; i<n;i++){
        cout<< SINOR[i] << " ";
    }

    cout<< endl;

    for(int i = 0; i<n;i++){
        cout<< pos[i] << " ";
    }

    return 0;
}