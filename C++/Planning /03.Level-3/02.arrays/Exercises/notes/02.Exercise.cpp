#include <iostream>
using namespace std;

int main() {

int size;
    cout <<"\n ====== The Input ======  " << endl;

    cout <<"How many people you want to enter: ";
    cin >> size;
string names[size];

for (int i = 0; i < size; ++i) {
    cout <<"Frined " << (i +1 ) <<" : ";
    cin >> names[i];

}

    cout <<"\n ====== The Output ======  " << endl;
cout <<"The Count of People is : " << size << endl;
for (int i = 0; i < size; ++i) {
    cout <<"Frined " << (i +1 ) <<" : " << names[i] << endl;

}


    cout <<"Thank you for using Our program " << endl;

    return 0;
}