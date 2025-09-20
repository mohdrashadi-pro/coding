#include <iostream>
using namespace std;

int main() {

int size;
    cout <<"How many numbers: ";
    cin >> size;
int index[size];
    cout <<"Enter your " << size <<" numbers: " << endl;
for (int i = 0; i < size; ++i) {
    cout <<"Number " <<(i+1) <<" : ";
    cin >> index[i];



}

    cout <<"Your numers: ";
for (int i = 0; i < size; ++i) {
    cout  << index[i] <<", ";

}



    return 0;
}