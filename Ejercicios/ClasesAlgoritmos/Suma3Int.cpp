#include <iostream>

using namespace std;

int main (){

int num;
int suma = 0;

for (int i =0; i<3; i++){

cout << "\nIngresar un valor" <<endl;
cin >> num;

suma += num;

}

cout << "\nLa suma en total es de: " << suma << endl;

return 0;

}
