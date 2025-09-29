#include <iostream>
using namespace std;


int main() {

int index[4] = {45, 23, 67, 122};
    int input ;
    int order =0;
input = index[0];
for (int i = 0; i < 4; ++i) {
if (index[i] > input) {
    input = index[i];
    order = i;
}

}

cout <<input << endl;
    cout <<order;
    return 0;
}