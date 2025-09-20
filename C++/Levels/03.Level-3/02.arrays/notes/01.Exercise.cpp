#include <iostream>
using namespace std;

int main() {
    int size;
    cout <<"Enter the number : ";
    cin >> size;

    int index[size];

    for (int i = 0; i < size; ++i) {
        cout <<"Number " << (i+1 ) <<" : ";
        cin >> index[i];
    }

cout <<"You Enter " << size <<"number " << endl;
    for (int i = 0; i < size; ++i) {
        cout <<"Number " << (i+1 ) <<" : " << index[i] << endl;

    }






    return 0;
}