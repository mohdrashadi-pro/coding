#include <iostream>
#include <cmath>
using namespace std;

struct Point {
int x;
    int y;

};






int main() {

Point point1 = {0,0};
    Point point2 ={3,4 };

int dx = point2.x - point1.x;
    int dy = point2.y - point1.y;
    int distanceSquared = (dx * dx) + (dy * dy);

    cout << "Point 1: (" << point1.x << ", " << point1.y << ")" << std::endl;
    cout << "Point 2: (" << point2.x << ", " << point2.y << ")" << std::endl;
    cout << "Distance squared: " << distanceSquared << std::endl;


    return 0;
}