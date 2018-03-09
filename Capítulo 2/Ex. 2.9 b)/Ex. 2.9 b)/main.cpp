#include <iostream>
    
    using namespace std;
    
    int main ()
    {
        double soma, media;
        double i, input, tamanho;
        int menor = 9999999;
        int maior = -999999;
        
        cout << "Insira o tamanho da sequência: ";
        cin >> tamanho;
        
     
        i = 0;
        soma = 0;

        for (int j = 0; j < tamanho; j++) {
            
            cout << "Insira o elemento número " << j + 1 << " de " << tamanho << ": ";
            cin >> input;
            
            soma += input;
            
            if (input > maior)
                maior = input;
           
            if (input < menor)
                menor = input;
        }
        
        media = soma / tamanho;
        
        cout << endl;
        cout << "Soma: " << soma << endl;
        cout << "Média: " << media << endl;
        cout << "Menor: " << menor << endl;
        cout << "Maior: " << maior << endl;
        
        return 0;
    }
