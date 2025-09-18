/*
Exercise 2: Simple Calculator Storage
Task: Create variables to store two numbers and their sum, then display them.
What to do:

Store first number: 15
Store second number: 25
Store their sum: 40
Display all three numbers

Expected Output:
First number: 15
Second number: 25
Sum: 40
Hint: Use three int variables.
 */

#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int sum;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    sum = num1 + num2;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}