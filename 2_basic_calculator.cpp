#include <iostream>

using namespace std;

int main() {
    int a, b, addition, subtraction, multiplication, division, remainder;
    cin >> a >> b;
    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = a / b;
    remainder = a % b;
    cout << "Addition = " << addition << endl;
    cout << "Subtraction = " << subtraction << endl;
    cout << "Multiplication = " << multiplication << endl;
    cout << "Division = " << division << endl;
    cout << "Remainder = " << remainder << endl;
    return 0;
}