#include <iostream>
#include "ordenarVector.hpp"
#include "ordenarVectorOptimizado.hpp"

using namespace std;

int main(){

        int v1Copia1[11] = {1,2,3,4,5,6,7,8,9,10};
        int v1Copia2[11] = {1,2,3,4,5,6,7,8,9,10};
        int p1 = 0;
        int p2 = 0;
        int n = 10;

        burbujaBasica(v1Copia1, n, p1);

        cout<<"Burbuja Basica:"<<endl;
        cout<<"v1 = ";
        for (int i=0; i<n; i++){
                cout<<v1Copia1[i]<<", ";
        }
        cout<<endl<<"Cantidad de pasadas: "<<p1<<endl<<endl;


        burbujaOptimizada(v1Copia2, n, p2);
        cout<<"Burbuja Optimizada:"<<endl;
        cout<<"v1 = ";
        for (int i=0; i<n; i++){
                cout<<v1Copia2[i]<<", ";
        }
        cout<<endl<<"Cantidad de pasadas: "<<p2<<endl<<endl;



        return 0;
}
 
