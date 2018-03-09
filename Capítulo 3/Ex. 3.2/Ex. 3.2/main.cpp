#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long numero){
    
    bool test = true;
    double limite;
    limite = (long) sqrt(numero);
    
    if (numero < 1) {
        cout << "Insira um número válido.";
    }
    else if (numero == 1) {
        cout << numero << " não é primo." << endl;
        test = false;
    }
    else if (numero == 2 || numero == 3) {
        cout << numero << " é primo." << endl;
        return test;
    }
    else
    {
        int k = 0;
        
        for (int i = 2 ; i <= limite ; i++) {
            if ((numero % i) == 0) {
                cout << numero << " não é primo." << endl;
                k = 1;
                test = false;
                break;
            }
        }
        
        if (k == 0) {
            cout << numero << " é primo." << endl;
            return test;
        }
    }
    
    return true;
}


int main() {
    
    long numero;
    
    cout << "Insira um número: ";
    cin >> numero; cin.ignore();
    
    isPrime(numero);
    
    return 0;
}


