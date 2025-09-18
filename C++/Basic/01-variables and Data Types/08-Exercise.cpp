#include <iostream>
using namespace std;

int main() {

    cout << "=== Welcome To BMI === " << endl;

string user;
    float weight;
    float height;
    double bmi;
cout << "Enter your name";
    cin >> user;
    cout <<"Enter Weight in kg: ";
    cin >> weight;
    cout <<"Enter hight in meters: ";
    cin >> height;

    cout << "=== BMI REort === " << endl;

    bmi = weight / (height * height);

    cout <<"Name : " << user << endl;
    cout <<"weight  : " << weight << endl;
    cout <<"height : " << height << endl;
    cout <<"BMI  : " << bmi << endl;



    return 0;
}