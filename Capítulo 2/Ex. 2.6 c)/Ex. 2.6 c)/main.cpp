#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    long numero = 2;
    double limite;
    
    cout << "Números Primos inferiores a 10000: " << endl;
    
    int z = 0;
    
    while (numero <= 10000)
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


