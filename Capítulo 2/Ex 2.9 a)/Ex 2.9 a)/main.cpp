#include <iostream>

using namespace std;

int main ()
{
    double soma, media, menor, maior;
    double i, input;
    
    cout << "Insira uma sequência de números inteiros (insira 0 para terminar): "; cin.ignore();
    cin >> input;
    
    maior = menor = input;
    i = 0;
    soma = 0;
    
    while (input != 0) {

        if (input == 0) {
            break;
        }
        
        if (input > maior) {
            maior = input;
        }
        else if(input < menor) {
            menor = input;
        }
    
        soma = soma + input;
        
        i++;
        
        cin >> input; cin.ignore();
    }
    
    media = soma / i;
    
    cout << endl;
    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Menor: " << menor << endl;
    cout << "Maior: " << maior << endl;
    
    return 0;
}
