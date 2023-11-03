#include <iostream>

using namespace std;

// Does #define MAX = 100 work too?
#define MAX_VALUE 100

int main() {
    const int STUDENTS_PER_CLASSROOM = 15;
    int classroom = 5;
    int students = classroom * STUDENTS_PER_CLASSROOM;

    // Using symbolic constant

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
