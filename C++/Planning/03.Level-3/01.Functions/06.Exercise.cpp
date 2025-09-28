#include <iostream>
using namespace std;

int getNumber() {
    return 42;

}




int main() {
int input;
    int number;

number = getNumber();

    cout <<"Enter your Number: ";
    cin >> input;

  if (number == input) {
      cout <<"The number is: " << number;
  } else {
      cout <<"The Number is Wrong";
  }


    return 0;
}