#include <iostream>
#include <string>

using namespace std;

int main() {
    
    double M, p, r;
    double pi = 3.14;
    
    cout << "Cálculo da massa de uma esfera! (Kg) " << endl;
    cout << "Insira o valor da massa específica do material (p) em Kg/m^3: ";
    cin >> p;
    cout << "Insira o valor do raio da esfera (r) em m: ";
    cin >> r;
    
    M = (4/3)*(pi * p * r * r * r);
    
    cout << "Massa da esfera (M) em kg: " << M << endl;
    
    return 0;
}
