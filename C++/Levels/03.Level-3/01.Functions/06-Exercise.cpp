#include <iostream>
#include <string>
using namespace std;

int getNumber() {
    return 42;
}



int main() {


int lucky;
    cout <<"Enter your number: ";
    cin >> lucky;

if (lucky == getNumber()) {
    cout << "The Number is : " << getNumber() << " Is correct ";
} else {
    cout <<"That's Wrong " << lucky << endl;
}


    return 0;
}