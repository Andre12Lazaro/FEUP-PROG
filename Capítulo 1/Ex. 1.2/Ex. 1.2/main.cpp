#include <iostream>
#include <string>

using namespace std;

int main()
{
    float a, b, c, media;
    cout << "A? ";
    cin >> a;
    cout << "B? ";
    cin >> b;
    cout << "C? ";
    cin >> c;
    
    media = (a + b + c) / 3;
    
    cout << "Média: " << media << endl;
    
    cout << "A-média: " << a - media << endl;
    
    cout << "B-média: " << b - media << endl;
    
    cout << "C-média: " << c - media << endl;
    
}
