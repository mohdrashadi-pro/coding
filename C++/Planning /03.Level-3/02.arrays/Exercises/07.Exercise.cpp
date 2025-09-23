#include <iostream>
using namespace std;

int main() {

    int index[5] = {2,5,8,11,14};
int count = 0;
    for (int i = 0; i < 5; ++i) {
        if (index[i] % 2 == 0) {
           count += 1;
        }

    }

    cout << "Even numbers Count: " << count;

    return 0;
}