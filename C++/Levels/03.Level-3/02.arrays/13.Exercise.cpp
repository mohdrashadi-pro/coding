#include <iostream>
using namespace std;


int main() {
    cout <<"===== Input =====" << endl;

int userInput;
int multip;
int size;

cout <<"How many input you want: ";
    cin >>size;
    cout <<"The number of mutlipation: ";
    cin >> multip;

    int index[size];

cout <<"Enter the input " << endl;

for (int i = 0; i < size; ++i) {
    cout <<"Number " << (i + 1) << " : ";
    cin >> index[i];
}

cout <<"===== draft outPut =====" << endl;

    cout <<"You Enter  " << endl;

    for (int i = 0; i < size; ++i) {
    cout <<"Number " << (i + 1) << " : " << index[i] << endl;
    }

cout <<"The Processor " << endl;

    for (int i = 0; i < size; ++i) {
        cout << "Number: " << index[i] << " * " << multip
        << " = "<<index[i] * multip << endl;

    }


    return 0;
}