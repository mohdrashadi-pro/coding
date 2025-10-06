#include <iostream>
using namespace std;

struct Book {
string title;
    string author;
    int pages;

};

int main() {
    // Variable

Book info;

    // Input;

    cout <<"Enter The TiTle:  ";
  getline (cin, info.title);
    cout <<"Enter Author: ";
    getline(cin, info.author);
    cout <<"Enter Pages: ";
    cin >> info.pages;

    // OutPut

    cout <<"Title : " <<info.title << endl;
    cout <<"Author: " <<info.author << endl;
    cout <<"Pages : " <<info.pages << endl;




    return 0;
}