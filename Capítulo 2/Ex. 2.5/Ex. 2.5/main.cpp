#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct complexo
{
    double real;
    double imag;
};

int main ()
{
    complexo resultado1;
    complexo resultado2;
    double a, b, c;
    double delta, x1, x2;
    
    // ax^2 + bx + c = 0
    cout << "Formula Resolvente: ax^2 + bx + c = 0" << endl << "Insira a, b e c:" << endl;
    cout << "a = ";    cin >> a; cin.ignore();
    cout << "b = "; cin >> b; cin.ignore();
    cout << "c = "; cin >> c; cin.ignore();
    
    // computing delta, x1 and x2
    delta = (b * b) - (4 * a * c);
    
    // computing real part
    resultado1.real = -b / (2 * a);
    resultado2.real = resultado1.real;
    
    // computing imaginary part
    if (delta < 0)
    {
        resultado1.imag = (+ sqrt (- ((b * b) - (4 * a * c)))) / (2 * a);
        resultado2.imag = (- sqrt (- ((b * b) - (4 * a * c)))) / (2 * a);
    }
    else
    {
        resultado1.imag = (+ sqrt ((b * b) - (4 * a * c))) / (2 * a);
        resultado2.imag = (- sqrt ((b * b) - (4 * a * c))) / (2 * a);
    }
    
    if (delta < 0)
    { cout << fixed << setprecision(3) << "A equacao tem 2 raizes complexas conjugadas: " << resultado1.real << "+" << resultado1.imag << "i e " << resultado2.real << resultado2.imag << "i" << endl; }
    else if (delta == 0)
    { cout << fixed << setprecision(3) << "A equacao tem 2 raizes reais iguais: " << resultado1.real + resultado1.imag << " e " << resultado2.real + resultado2.imag << endl; }
    else
    { cout << fixed << setprecision(3) << "A equacao tem 2 raizes reais diferentes: " << resultado1.real + resultado1.imag << " e " << resultado2.real + resultado2.imag << endl; }
    
    cin.get();
    return 0;
}
