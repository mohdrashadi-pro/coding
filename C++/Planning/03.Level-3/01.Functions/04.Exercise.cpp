#include <iostream>
using namespace std;

void printLine() {
    cout <<"-";
}





int main() {
    int input;
    cout <<"Enter Your Number: ";
    cin >> input;
    if (input <= 50) {
        for (int i = 0; i < input; ++i) {

            printLine();
        }


    } else {
        cout <<"Sorry: You most less than or egul 50";
    }


    return 0;
}