#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    float x1, x2, x3, y1, y2, y3, s, a, b, c, area;
    
    cout << "Insira as coordenadas dos três vértices do triângulo: " << endl;
    cout << endl;
    
    cout << "1º Vértice (x1, y1): ";
    cin >> x1 >> y1; cin.ignore();
    cout << endl;
    
    cout << "2º Vértice (x2, y2): ";
    cin >> x2 >> y2; cin.ignore();
    cout << endl;
    
    cout << "3º Vértice (x3, y3): ";
    cin >> x3 >> y3; cin.ignore();
    cout << endl;
    
    // Calculo de a (Vértices 1 e 2)
    
    a = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    
    // Calculo de b (Vértices 1 e 3)
    
    b = sqrt(pow(x3-x1, 2)+pow(y3-y1, 2));
    
    // Calculo de b (Vértices 2 e 3)
    
    c = sqrt(pow(x3-x2, 2)+pow(y3-y2, 2));
    
    // Calculo de s (semi-perímetro)
    
    s = (a+b+c)/2;
    
    // Calculo de a (área do triângulo)
    
    a = sqrt(s*(s-a)*(s-b)*(s-c));
    
    // Print do valor da área do triângulo
    
    cout << "A área do triângulo é: " << a << endl;
    
    return 0;
}
