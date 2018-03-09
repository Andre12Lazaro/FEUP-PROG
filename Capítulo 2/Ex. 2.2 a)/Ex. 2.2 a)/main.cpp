#include <iostream>

using namespace std;

int main() {
    
    float n1, n2, n3, maior, menor;
    
    cout << "Insira três números: ";
    cin >> n1 >> n2 >> n3; cin.ignore();
    
    maior = menor = n1;
    
    if (n2 > maior) {
        maior = n2;
    }
    
    else if (n2 < menor) {
        menor = n2;
    }
    
    if (n3 > maior) {
        maior = n3;
    }
    
    else if (n3 < menor) {
        menor = n3;
    }
    
    cout << "Menor número: " << menor << endl;
    cout << "Maior número: " << maior << endl;
    
return 0;

}
