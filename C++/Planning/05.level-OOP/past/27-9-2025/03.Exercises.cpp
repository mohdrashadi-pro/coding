#include <iostream>
using namespace std;

struct Rectangle {
    double width;
    double height;

};




int main () {
    cout <<"====== Input ====== " <<endl;

Rectangle input;
    double result;
    cout << "==== Welcome to our Code ==== " << endl;
    cout <<"Enter Width: ";
    cin >> input.width;
    cout <<"Enter Height: ";
    cin >> input.height;

    cout << "===== The Processor ====" << endl;


    result = input.height * input.width;

    cout <<"                                   " << endl;
    cout << "===== Output ====" << endl;
    cout << "Rectangle : " << input.height << " * " << input.width << endl;
    cout <<"Area: " << result << endl;






    return 0;
}