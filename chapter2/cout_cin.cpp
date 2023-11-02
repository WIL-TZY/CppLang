#include <iostream>

int main() {
    /*
        cout    ---> output stream
        cin     ---> input stream
    */
    int number;

    // std::cout is used for output 
    std::cout << "Enter a number: ";

    // std::cin is used for input
    std::cin >> number;

    // The '<<' operator is used to send data to 'cout', and the '>>' operator is used to extract data from 'cin'
    std::cout << "You entered: " << number << std::endl;

    return 0;
}