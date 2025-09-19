#include <iostream>
#include <string>
using namespace std;

string printBorder() {
return "======================\n";
}

string printTitle() {
    return "My Cool Programming \n";
}



int main() {
cout << printBorder() << printTitle() << printBorder();


    return 0;
}