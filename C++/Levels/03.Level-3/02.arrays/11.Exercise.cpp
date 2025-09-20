#include <iostream>
using namespace std;

// Search for value
int main() {
int  index[5] = {0, 10,20,30,40};

    cout << "Celsius: ";
for (int i = 0; i < 5; ++i) {
    cout << index[i] << " ";
}

    cout <<endl;

cout <<"Fahrenheit: ";
for (int i = 0; i < 5; ++i) {
    cout << (index[i] *9/5)+32 <<" ";
}

    return 0;
}