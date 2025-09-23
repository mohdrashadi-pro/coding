#include <iostream>
using namespace std;


int main () {

string day[3] = {"Monday", "Tuesday","Wednesday"};

for (int i = 0; i < 3; ++i) {
    cout << i + 1 <<". " << day[i] << endl;
}


    return 0;
}