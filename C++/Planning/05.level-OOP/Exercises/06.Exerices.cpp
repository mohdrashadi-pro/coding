#include <iostream>
#include <cmath>
using namespace std;


struct Point {
int x,y;

};



int main() {

Point point1 = {0,0};
    Point point2 = {3,4};
int dx = point2.x - point1.x;
    int dy = point2.y - point1.y;

    int distance = pow(dx, 2) + pow(dy,2);
    cout <<"Point 1 " <<  "( " << point1.x << "," << point1.y << ")" << endl;
    cout <<"Point 2 " <<  "( " << point2.x << "," << point2.y << ")" << endl;
    cout <<"Distance Seuared: " << distance << endl;




    return 0;
}