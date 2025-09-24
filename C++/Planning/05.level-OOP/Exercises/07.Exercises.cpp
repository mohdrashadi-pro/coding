#include <iostream>
using namespace std;


struct Employee {
    string name;
    int id;
    double salary;

};


int main() {
    Employee UserInput;
    string name;
    int id;
    double salary;
    cout << "========== Input ========== " << endl;


    UserInput.id = id;
    UserInput.name = name;
    UserInput.salary = salary;
cout <<"UserInput.id = id \n"
    << "UserInput.name = name \n" <<
     "UserInput.salary = salary \n" << endl;

    cout << "==========Process ========== " << endl;
    cout <<"Enter Your ID: ";
    cin >> id;
    cout <<"Enter your name: ";
    cin >> name;
    cout <<"Enter Your Salary: ";
    cin >> salary;

    cout << "========== OutPut ========== " << endl;

    cout <<"=== EMPLOYEE CARD === " << endl;
    cout <<"ID : " << id << endl;
    cout <<"Name : " << name << endl;
    cout <<"Salary : " << salary << endl;




    return 0;
}