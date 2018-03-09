#include <iostream>

using namespace std;

int main() {
   
    float num_1, num_2, resultado;
    char sinal;
    
    cout << "Insira a conta que pretende fazer: ";
    cin >> num_1 >> sinal >> num_2; cin.ignore();
    
    switch (sinal) {
        case '+':
            resultado = num_1 + num_2;
            break;
        case '-':
            resultado = num_1 - num_2;
            break;
        case '/':
            resultado = num_1 / num_2;
            break;
        case '*':
            resultado = num_1 * num_2;
            break;
    }
    
    cout << "Resultado da operação: " << num_1 << " " << sinal << " " << num_2 << " = " << resultado << endl;
    
    return 0;
}
