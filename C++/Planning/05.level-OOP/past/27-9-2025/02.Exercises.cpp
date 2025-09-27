#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    double gpa;

};




int main() {
    Student info;
cout <<"Enter your name: ";
    cin >> info.name;
    cout <<"Enter your age: ";
    cin >> info.age;
    cout <<"Enter your gpa: " ;
    cin >> info.gpa;

    cout <<"Student : " << info.name << endl;
    cout <<"Age     : " << info.age << endl;
    cout <<"GPA     : " << info.gpa << endl;

}