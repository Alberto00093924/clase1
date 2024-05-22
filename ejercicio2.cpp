#include <iostream>
using namespace std;
int main(){

int numero[100];
int total=0;

for (int i=0; i<100; i++){

    numero[i]=i+1;

    total=total+numero[i];
}

cout<<"La suma de los numeros de 1 al 100 es: "<<total<<"\n";

return 0;


}