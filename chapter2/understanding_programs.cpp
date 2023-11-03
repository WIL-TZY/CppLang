#include <iostream>

using namespace std;

// This function uses two integer parameters and returns an integer value
int add (int x, int y) {
    cout << "The add() function receives " << x << " and " << y << "\n";

    return (x+y);
}

int main() {
    cout << "This is main()!\n\n";
    int a, b, c;
    cout << "Enter two numbers:\n";

    // By default, cin reads and separates values based on whitespace
    // For example, you can read individual words from a line of text or numbers separated by spaces or newlines
    cin >> a;
    cin >> b;
    cout << "\nCalling the add() function... \n";

    c = add(a, b);

    cout << "\nBack to main() function...\n";
    cout << "The c variable was set as " << c;
    cout << "\n\nExiting program...\n\n";

    return 0;
}
