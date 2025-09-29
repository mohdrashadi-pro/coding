#include <iomanip>
#include <iostream>
using namespace std;

int main () {
    int sum = 0;
    double aver;
    int index[5] = {85, 92, 78, 96, 88};

    // The number of elements in the array
    const int count = 5;

    for (int i = 0; i < count; ++i) {
        sum += index[i];
    }

    // Calculate the average correctly
    aver = static_cast<double>(sum) / count;

    cout << "Sum: " << sum << endl;
    cout << "Count: " << count << endl;
    cout << "Average: " << fixed << setprecision(1) << aver << endl;

    return 0;
}