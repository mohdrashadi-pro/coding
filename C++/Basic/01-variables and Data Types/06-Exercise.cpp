#include <iostream>
using namespace std;

int main() {

/*

    Task: Convert Celsius to Fahrenheit.
    What to ask:

    Temperature in Celsius

    What to calculate:

    Fahrenheit = (Celsius × 9/5) + 32

    Expected Output:
    Enter temperature in Celsius: 25
    25°C is equal to 77°F

    i

 */

double celsius, fahrenheit;

    cout <<"Enter temperture in celsiuse: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5 ) + 32;

    cout << celsius << "C is equl to " << fahrenheit <<" F";


    return 0;
}