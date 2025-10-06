#include <iostream>
#include <string>
using namespace std;


struct studentInfo {

string name;
    int age;
    double gpa;

};




int main() {
// Variable
studentInfo info;


    // Input

    cout <<"Enter Your name: ";
getline(cin, info.name);


    cout <<"Enter Your age: ";
    cin >>info.age;


    cout <<"Enter Your GPA: ";
    cin >>info.gpa;

    // OutPut + Process

    cout <<"Student: " <<info.name << endl;
    cout <<"Age    : " <<info.age << endl;
    cout <<"GPA    : " <<info.gpa << endl;








    return 0;
}