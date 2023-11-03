#include <iostream>

using namespace std;

int main() {
    // 1. Integer Variable
    int age = 25; // 'age' is a variable of type integer, storing the value 25

    // 2. Floating-Point Variable:
    double temperature = 98.6; // 'temperature' is a variable of type double, storing a floating-point value

    // 3. Character Variable:
    char grade = 'A'; // 'grade' is a variable of type char, storing the character 'A'

    // 4. Boolean Variable
    bool isStudent = true; // 'isStudent' is a variable of type bool, storing a boolean value (true or false)

    // 5. String Variable (using C++ string class):
    #include <string>
    std::string name = "John"; // 'name' is a variable of type string, storing the text "John"


    /* ----------------- Signed and Unsigned Data Types ----------------- */
    int a = -1;            // Signed integer
    unsigned int b = 255;  // Unsigned integer

    // The variable 'a' can store both positive and negative numbers, while `b` can only store non-negative numbers
    cout << "Signed Integer (a): " << a << endl;
    cout << "Unsigned Integer (b): " << b << endl;


    /* ----------------- Size ----------------- */
    cout << "Size of int:\t\t\t" << sizeof(int) << " bytes.\n";
    cout << "Size of short int:\t\t" << sizeof(short) << " bytes.\n";
    cout << "Size of long int:\t\t" << sizeof(long) << " bytes.\n";
    cout << "Size of char:\t\t\t" << sizeof(char) << " bytes.\n";
    cout << "Size of bool:\t\t\t" << sizeof(bool) << " bytes.\n";
    cout << "Size of float:\t\t\t" << sizeof(float) << " bytes.\n";
    cout << "Size of double:\t\t\t" << sizeof(double) << " bytes.\n";
}
