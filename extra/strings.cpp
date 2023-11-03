// C HEADERS
#include <stdio.h>
#include <string.h>

// C++ HEADERS
#include <iostream>
#include <string>

int main() {
    // C WAY
    char c_str1[20] = "Hello, ";
    char c_str2[] = "world!";
    
    strcat(c_str1, c_str2);
    
    printf("C\n");
    // Appends the content of one character array (string) to another
    printf("%s\n", c_str1); // Output: Hello, world!
    
    // C++ WAY
    std::string cpp_str1 = "Hello, ";
    std::string cpp_str2 = "world!";
    
    std::string result = cpp_str1 + cpp_str2;

    printf("\nC++\n");
    std::cout << result << std::endl; // Output: Hello, world!
    
    return 0;
}
