#include <complex>
#include <iostream>
using namespace std;

struct Circle {
double radius;
    double pi = 3.14159;


};



int main() {
Circle circle;

    double pi = circle.pi;
    double radius = 5;

    cout <<"Circle Radius: " << radius << endl;
    cout << "Area: " <<pi * pow(radius,2) << endl;;
    cout <<"Cirumference: " << 2 * pi * radius << endl;



    return 0;
}