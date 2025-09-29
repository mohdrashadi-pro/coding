#include <iostream>
using namespace std;

int main() {

int index[5] = {10, 25, 300, 45, 50};

for (int i = 0; i < 5; ++i) {
    if (index[i] == 30 ) {
        cout << "Number " << index[i] << " found in the array ";
    }
}



    return 0;
}