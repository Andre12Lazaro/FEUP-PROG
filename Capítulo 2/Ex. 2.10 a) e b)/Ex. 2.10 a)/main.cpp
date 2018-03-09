#include <iostream>
#include <math.h>
using namespace std;

bool isCapicua(int);
int msd(int);
int lsd(int);
int sizeofInt(int);

bool isCapicua(int input) {
    
    while (input > 0) {
        if (msd(input) == lsd(input)) {
            input = input % (int)pow(10, (sizeofInt(input) - 1));
            input /= 10;
        }
        else return false;
    }
    
    return true;
}

// Retornar o dígito mais significativo
int msd(int input) {
    
    input /= (int)pow(10, sizeofInt(input) - 1);
    
    return input;
}

// Retornar o dígito menos significativo
int lsd(int input) {
    
    return input % 10;
}

int sizeofInt(int input) {
    int size = 0;
    
    while (input > 0) {
        input /= 10;
        size++;
    }
    
    return size;
}

int main() {
    
    int input;
    
    cout << "Número? ";
    cin >> input;
    
    bool teste = isCapicua(input);
    
    cout << "O número " << input << (teste ? " é capicua" : " não é capicua") << endl;
    
    return 0;
}
