#include <iostream>
using namespace std;
struct Employee {
    string name;
    int id;
    double salary;

};




int main() {
    // Variable

Employee employee;
string name = employee.name;
    int id = employee.id;
    double salary = employee.salary;

// Input

    cout <<"Enter Name of Employee ";
    getline(cin,name);
    cout <<"Enter Id of Employee ";
    cin >> id;
    cout << "Enter the Number of Salary: ";
    cin >> salary;

    // OutPut
    cout <<"=== EMPLOYEE CARD ===" << endl;
    cout <<"ID :" <<id << endl;
    cout <<"Name: " << name << endl;
    cout <<"Salary: $" <<salary << endl;
    cout <<"=============================";


    return 0;
}