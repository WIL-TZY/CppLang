#include <iostream>

using namespace std;

// Does #define MAX = 100 work too?
#define MAX 100

int main() {
    const int MAX_VALUE = 100;
    
    // Enumerators
    enum Color { 
        RED,    // = 0
        GREEN,  // = 1
        BLUE,   // = 2
        PINK,   // = 3
        ORANGE, // = 4
        YELLOW, // = 5
        WHITE,  // = 6
        BLACK   // = 7
    };

    return 0;
}
