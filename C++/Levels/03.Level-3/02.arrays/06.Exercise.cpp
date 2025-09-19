#include <iostream>
using namespace std;

int main () {

int index[4] = {45, 23 ,67, 12};


    int maxium = index[0];
    int order = 0;

for (int i = 0; i < 4; ++i) {
    if (index[i] > maxium) {
        maxium =  index[i] ;
        order = i;

    }
}

cout <<     "max   : " << maxium <<endl;
    cout << "order : " << order << endl;




    return 0;
}