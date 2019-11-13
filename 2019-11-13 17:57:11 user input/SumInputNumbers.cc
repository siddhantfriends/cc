#include <iostream>

using namespace std;

int main() {
    int x, y;
    int sum;

    // Get first number
    cout << "Type a number: ";
    cin >> x;

    // Get second number
    cout << "Type another number: ";
    cin >> y;
    
    // Add the numbers and display!
    sum = x + y;
    cout << "Sum is: " << sum;
    return 0;
}
