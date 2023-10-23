#include <iostream>

using namespace std;

int main() {

int x = 5;  // Binary: 00000101

// Shift left by 2 positions
int result = x << 2;  

// Binary result: 00010100 (Decimal: 20)

// Printing to the console
cout << "Original value: ";
cout << x;
cout << "\n";
cout << "After bitwise shift with << : ";
cout << result;

    return 0;
}
