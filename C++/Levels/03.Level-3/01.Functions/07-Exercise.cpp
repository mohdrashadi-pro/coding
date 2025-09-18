#include <iostream>
#include <string>

using namespace std;

int getMyAge() {
    int age;
    cout <<"Enter your age: ";
    cin >> age;
return age;
}

int main() {
int userage = getMyAge();




cout << "I am " << userage << " Years old";

    return 0;
}