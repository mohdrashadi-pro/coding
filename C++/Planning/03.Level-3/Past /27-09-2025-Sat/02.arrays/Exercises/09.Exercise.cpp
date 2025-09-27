#include <iostream>
using namespace std;

int main() {
    double sum, average;
    int order;


int index[5] = {
    85, 92, 78,96, 88
};


    for (int i = 0; i < 5; ++i) {
        sum +=index[i];
        order = i+ 1;
    }


average = sum / order;

    cout << "Average score: " << average ;



    return 0;
}