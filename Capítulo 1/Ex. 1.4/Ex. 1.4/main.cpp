#include <iostream>
#include <string>

using namespace std;

int main() {
    
    float a, b, c, d, e, f, x, y;
    
    cout << "Resolver um sistema de equações!" << endl;
    cout << "ax + by = c" << endl;
    cout << "dx + ey = f" << endl;
    
    cout << "Insira o valor de a: ";
    cin >> a;
    cout << "Insira o valor de b: ";
    cin >> b;
    cout << "Insira o valor de c: ";
    cin >> c;
    cout << "Insira o valor de d: ";
    cin >> d;
    cout << "Insira o valor de e: ";
    cin >> e;
    cout << "Insira o valor de f: ";
    cin >> f;
    
    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);
       
    if (((a * e) - (b * d)) != 0 ) {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
    else {
        cout << "Sistema Impossível!";
    }
    
    return 0;
}

