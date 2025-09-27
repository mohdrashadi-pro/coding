#include <iostream>
using namespace std;

char getFirstLetter(char letter) {



    cout << "My First initial is : " << letter;
    return letter;
}



int main() {
char first;

    cout <<"Enter first letter";
    cin >> first;
getFirstLetter(first);
    return 0;
}