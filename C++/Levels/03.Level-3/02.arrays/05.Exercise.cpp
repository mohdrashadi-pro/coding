#include <iostream>
using namespace std;


int main() {
int index[3]= {100,200, 300};

    cout <<"Original: ";
    for (int i = 0; i < 3; i++) {
        cout << index[i] <<" ";
    }
cout << endl;
cout << "Modified: ";
    index[1] = 999;
    for (int i = 0; i < 3; i++) {
        cout << index[i] <<" ";
    }
    return 0;
}