#include <iostream>
using namespace std;

float getHalf(float num) {
float reslut;
    reslut =( num / 2);
    cout <<"Half of " << num << " is: " << reslut;
    return reslut;
}



int main() {
float userinput;

    cout <<"Enter number: ";
    cin >> userinput;

    getHalf(userinput);

    return 0;
}