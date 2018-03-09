#include <iostream>

using namespace std;

int main() {
    
    double n, q, j, montante;
    
    cout << "Insira o número de anos de depósito: ";
    cin >> n;
    cout << "Insira a quantia que tem na conta: ";
    cin >> q;
    cout << "Insira a taxa % de juros: ";
    cin >> j;
    
    montante = q;
    
    for (int i = 1; i <= n; i++) {
       montante = montante + (montante * (j/100));
    }
    
    cout << "O montante disponível para levantamento é: " << montante << endl;
    
    return 0;
}
