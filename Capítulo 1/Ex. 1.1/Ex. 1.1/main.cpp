#include <iostream>

using namespace std;

int main ()
{
    char x;
    
    cout << "Insira uma letra a converter para ASCII: ";
    cin >> x;
    cin.ignore();
    cout << (int) x << endl;
    
    system("PAUSE");
    return 0;
}
