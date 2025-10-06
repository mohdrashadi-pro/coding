#include <iostream>
using namespace std;

struct Point {

    int x;
    int y;
    string name = "Print Coodinates";
};




int main() {
Point point;

    point.x = 5;
    point.y = 3;
    point.name;

    cout <<point.name << " : " << "(" <<  point.x << " , " << point.y <<        ")";






    return 0;
}