#include <iostream>
#include <cmath>

using namespace std;


struct Circle {
    double radius;
    double pi = M_PI;


};


int main() {
Circle input;

cout << "======= Input ======== " << endl;
    cout <<"Enter Your value of Radius: ";
    cin >>input.radius;
    cout <<"Area: " <<input.pi * input.radius * input.radius << endl;
    double result = ( (input.pi * input.radius * input.radius) /2 );
    cout <<"Area: " <<result<< endl;




    return 0;
}