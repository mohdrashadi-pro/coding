#include <iostream>
using namespace std;

int getDouble(int num) {
    int result;
    result = 2 * num;
    cout << "Double of " << num << " is :";

    return result;

}


int main() {
int value;

    cout <<"Enter you are number:";
    cin >> value;

    cout << getDouble(value);

    return 0;
}