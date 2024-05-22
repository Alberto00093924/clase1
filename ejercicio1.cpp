#include <iostream>
using namespace std;

int main() {
    float promedio = 0; 
    float nota[6];

    for (int i = 0; i < 6; i++) {
        cout << "Introduzca la nota " << i + 1 << ": "; 
        cin >> nota[i];
        promedio = promedio + nota[i];
    }

    promedio = promedio / 6;
    cout << "El promedio es: " << promedio << endl; 

    return 0;
}