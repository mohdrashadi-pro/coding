#include <iostream>
#include <iomanip>

using namespace std;

struct rectangle {

double width = 10.5;
    double height = 7.2 ;

};
int main() {
    // Variable

rectangle info;
string name = "Rectangle";



cout << name << " : " <<info.height <<" x " << info.width << endl;
    cout <<"Area: " <<info.height*info.width;

    return 0;

}