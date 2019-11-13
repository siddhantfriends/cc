#include <iostream>

using namespace std;


int main() {
    // declaration and assignment of variable in one line
    int num1 = 15;
    cout << "num1: ";
    cout << num1 << endl;

    // declaration and assignment of variable in separate lines
    int num2;
    num2 = 15;
    cout << "num2: ";
    cout << num2 << endl;

    // if you reassign the previous variable it's value will change
    num2 = 10;
    cout << "re-assigned num2: ";
    cout << num2;

    return 0;
}
