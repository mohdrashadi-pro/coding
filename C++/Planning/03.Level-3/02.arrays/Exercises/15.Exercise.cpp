#include <iostream>
using namespace std;

int main() {
    // Array Comparison

    int indexOne[5] = {1, 2, 3, 4, 5};
    int indexTwo[5] = {1, 2, 3, 4, 5};

    bool identical = true; // Assume arrays are identical

    for (int i = 0; i < 5; ++i) {
        // If any pair of elements is not equal,
        // set the flag to false and stop checking
        if (indexOne[i] != indexTwo[i]) {
            identical = false
            ;
            break; // Exit the loop early
        }
    }

    // Check the flag after the loop is complete
    if (identical) {
        cout << "Arrays are identical!" << endl;
    } else {
        cout << "Arrays are not identical!" << endl;
    }

    return 0;
}