#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    int pages;
};

int main() {
Book info;
    cout << "===== Input ===== " << endl;

    info.title = "The C++ Programming Language";
    info.author ="Bjarne Stroustrup";
    info.pages =1368;

    cout << "===== Output ===== " << endl;

    cout <<"Title : "<< info.title << endl;
    cout <<"Author: "<< info.author << endl;
    cout <<"Pages : "<< info.pages << endl;



    return 0;
}