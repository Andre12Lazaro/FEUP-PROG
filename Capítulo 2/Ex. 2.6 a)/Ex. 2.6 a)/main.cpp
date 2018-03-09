#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    
    long numero;
    double limite;
    
    cout << "Insira um número: ";
    cin >> numero; cin.ignore();
    
    limite = (long) sqrt(numero);
    
    if (numero < 1)
    {
        cout << "Insira um número válido.";
    }
    else if (numero == 1)
    {
        cout << numero << " não é primo." << endl;
    }
    else if (numero == 2 || numero == 3)
    {
        cout << numero << " é primo." << endl;
    }
    else
    {
        int k = 0;
        
        for (int i = 2 ; i <= limite ; i++)
        {
            if ((numero % i) == 0)
            {
                cout << numero << " não é primo." << endl;
                k = 1;
                break;
            }
        }
        
        if (k == 0)
        {
            cout << numero << " é primo." << endl;
        }
    }
    
    cin.get();
    return 0;
}
