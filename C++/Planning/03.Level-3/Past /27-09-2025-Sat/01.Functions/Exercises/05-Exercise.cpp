#include <iostream>
using namespace std;

void printWelcome(string massage) {
    if (massage == "Hello") {
        cout <<"Welcome to C++ Programming ";
    }
    else {
        cout <<"Wrong Word";
    }
}

int main () {
string mass;

    cout <<"Enter Your Word";
    cin >> mass;
printWelcome(mass);

    return 0;
}