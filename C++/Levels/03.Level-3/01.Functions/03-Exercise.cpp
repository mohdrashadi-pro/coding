#include <iostream>
using namespace std;
void printMyName(string userName) {

    cout << "My name is : " << userName;
}




int main() {

    string myname;
    cout <<"enter your name";
    cin >> myname;


    printMyName(myname);
    return 0;
}