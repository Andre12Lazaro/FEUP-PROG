#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
}

double area(double x1, double y1, double x2, double y2, double x3, double y3) {
   
    double dis1, dis2, dis3, semi_per;
    
    dis1= distance(x1, y1, x1, y2);
    dis2 = distance(x2, y2, x3, y3);
    dis3 = distance(x3, y3, x1, y1);
    
    cout << "Distância 1: " << dis1 << "\nDistância 2: " << dis2 << "\nDistância 3: " << dis3;
    
    semi_per = (dis1 + dis2 + dis3) / 2.0;
    
    cout << "\nSemiperimetro: " << semi_per << endl;
    
    return sqrt(semi_per*(semi_per - dis1)*(semi_per - dis2)*(semi_per - dis3));
}

int main() {
    
    double x1, y1, x2, y2, x3, y3;
    double area_final;
    
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
    
    area_final = area(x1, y1, x2, y2, x3, y3);
    
    cout << "A área do triângulo é: " << area_final << endl;
    
    return 0;
}



