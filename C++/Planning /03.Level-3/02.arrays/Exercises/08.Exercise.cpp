#include <iostream>
using namespace std;

int main () {
int index[5] = {1,2,3,4,5};

cout <<"Reverse order: ";
for (int i = 4; i>= 0 ;i--) {
    cout <<index[i] << " ";
}


    return 0;
}