#include <iostream>
#include <string>

using namespace std;

// The struct is defined with member variables 'x' and 'y'.
// A string variable 'name' is also added for demonstration.
struct Point {
    int x;
    int y;
    string name = "Point";
};

int main() {
    // An object 'p' of type Point is created.
    Point p;

    // The member variables of the object 'p' are accessed using the dot operator.
    cout << p.name << endl;
    p.x = 5;
    p.y = 3;

    cout << p.x << endl;
    cout << p.y << endl;

    return 0;
}