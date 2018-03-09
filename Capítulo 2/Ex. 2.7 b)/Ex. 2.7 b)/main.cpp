#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.14159265359

using namespace std;

double graus_radianos (double ang)
{
    double radianos;
    
    radianos = (ang * PI) / 180;
    
    return (radianos);
}

int main() {
    
    float limite, incremento;
    
    cout << "Insira o limite do intervalo: ";
    cin >> limite;
    
    cout << "Insira o incremento do valor dos ângulos: ";
    cin >> incremento;
    
    double ang;
    
    cout << "ang" << setw(15) << "sen" << setw(20) << "cos" << setw(20) << "tan" << endl;
    
    for(ang = 0; ang <= limite + 0.1; ang += incremento) {
        
        if (ang != 90) {
            cout  << fixed << setprecision(1) << ang << setw(20) << setprecision(6) << sin(graus_radianos(ang)) << setw(20) << cos(graus_radianos(ang)) << setw(20) << tan(graus_radianos(ang)) << endl;
        }
        
        else {
            cout  << fixed << setprecision(1) << ang << setw(20) << setprecision(6) << sin(graus_radianos(ang)) << setw(20) << cos(graus_radianos(ang)) << setw(20) << "infinito" << endl;
        }
    };
    
    return 0;
}

