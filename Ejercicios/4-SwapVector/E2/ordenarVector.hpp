#ifndef ORDENAR_BURBUJA_HPP
#define ORDENAR_BURBUJA_HPP

void burbujaOptimizada(int n, int arr[], int pos[]){
    bool huboCambios = true;
    for(int i = 0; i < n - 1 && huboCambios; i++){
        huboCambios = false;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j]> arr[j+1]){
                int temp1 = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp1;

                int temp2 = pos[j];
                pos[j] = pos[j+1];
                pos[j+1] = temp2;

                huboCambios = true;
            }
        }
    }
}

#endif