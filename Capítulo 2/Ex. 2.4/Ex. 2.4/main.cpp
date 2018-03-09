#include <iostream>

using namespace std;

int main() {
    
    float peso, custo;
    
    
    cout << "Insira o peso da mercadoria em gramas: ";
    cin >> peso;
    
    if (peso < 500) {
        custo = 5;
    }
    else if (peso > 500 && peso < 1000) {
        custo = 5 + ((1.5 * (peso - 500)) / 100);
    }
    else {
        custo = 12.5 + ((5.0 * (peso - 1000)) / 250);
    }
    
    cout << "O preço de envio da mercadoria é de " << custo << "€" << endl;
    
    return 0;
}
