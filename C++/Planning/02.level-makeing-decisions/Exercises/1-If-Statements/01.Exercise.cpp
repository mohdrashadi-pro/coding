#include <iostream>
using namespace std;

int main() {
int input;

    cout <<"Enter Your Age: ";
    cin >> input;

    if (input >= 18) {
        cout <<"You can Vote !";
    } else {
        cout <<"You Can't Vote ";
    }


    return 0;
}