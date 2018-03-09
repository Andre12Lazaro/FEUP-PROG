#include <iostream>

using namespace std;

int main ()
{
    int h1, h2, m1, m2, s1, s2;
    int temp;
    int d, h, m, s;
    
    cout << "Tempo 1 (horas minutos segundos) ? "; cin >> h1 >> m1 >> s1; cin.ignore();
    cout << "Tempo 2 (horas minutos segundos) ? "; cin >> h2 >> m2 >> s2; cin.ignore();
    
    temp = s1 + s2 + (m1 * 60) + (m2 * 60) + (h1 * 3600) + (h2 * 3600);
    d = temp / 86400;
    h = (temp % 86400) / 3600;
    m = ((temp % 86400) % 3600) / 60;
    s = ((temp % 86400) % 3600) % 60;
    
    cout << "Soma dos tempos: " << d << " dia, " << h << " horas, " << m << " minutos e " << s << " segundos" << endl;
    
    cin.get();
    return 0;
}
