#include <iostream>
using namespace std;
int main() {

string password;
    cout <<"enter Your password";
    cin >> password;

    string oldpass;
    cout <<"Enter old pass";
    cin >> oldpass;

    if (password == oldpass) {
        cout <<"Access granted";

    } else {
        cout <<"Access denied! ";
    }



}