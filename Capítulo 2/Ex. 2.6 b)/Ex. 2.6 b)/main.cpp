#include <iostream>
#include <cmath>

using namespace std;

int main() {

    long numero = 2;
    double limite;
    
    cout << "Primeiros 100 números primos: ";

    int z = 0;
    
    while (z <= 100)
    {
        limite = (long) sqrt(numero);
        
        if (numero == 2 || numero == 3)
        {
            cout << numero << endl;
            z++;
        }
        
        else
        {
            int k = 0;
            
            for (int i = 2 ; i <= limite ; i++)
            {
                if ((numero % i) == 0)
                {
                    k = 1;
                    break;
                }
            }
            if (k == 0)
            {
                cout << numero << endl;
                z++;
            }
        }
        numero++;
    }
    
    cin.get();
    return 0;
}

