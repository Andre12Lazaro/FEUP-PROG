#include <iostream>

using namespace std;

int main ()
{
    double n1, n2, n3;
    double maior, menor, intermedio;
    
    cout << "Digite 3 números: "; cin >> n1 >> n2 >> n3; cin.ignore();
    
    if (n1 >= n2 && n1 >= n3) {
        maior = n1;
        
        if (n2 < n3) {
            menor = n2;
            intermedio = n3;
        }
        else {
            menor = n3;
            intermedio = n2;
        }
    }
    
    else if (n2 >= n1 && n2 >= n3) {
        maior = n2;
        
        if (n1 < n3) {
            menor = n1;
            intermedio = n3;
        }
        else {
            menor = n3;
            intermedio = n1;
        }
    }
    
    else if (n3 >= n1 && n3 >= n2) {
        maior = n3;
        
        if (n1 < n2) {
            menor = n1;
            intermedio = n2;
        }
        else {
            menor = n2;
            intermedio = n1;
        }
    }
    
    if ((menor + intermedio) > maior) {
       cout << "É possível construir o triângulo!" << endl;
    }
    else {
        cout << "Não é possível construir o triângulo!" << endl;
    }
        
    
    
    cin.get();
    return 0;
}

