#include <iostream>
using namespace std;


void printLine(int count) {
    for (int i = 0; i < count ; i++) {
        cout <<"-";
    }
}



int main() {

int repat;
    cout <<"How many ";
    cin >> repat;


    printLine(repat);


    return 0;
}