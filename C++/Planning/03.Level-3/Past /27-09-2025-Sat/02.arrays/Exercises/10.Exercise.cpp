#include <iostream>
using namespace std;

int main () {
    int input = -1;
    int inputUser;
    int index[5] = {10, 25, 30, 45, 50};

cout <<"Enter the input : ";
    cin >> inputUser;





for (int i = 0; i < 5; ++i) {
  if (index[i] == inputUser ) {
      input = i;
break;
  }
}
if (input != -1) {
    cout <<"number " << inputUser <<  " find " << input << endl;

} else {
    cout <<"Number " << inputUser << "was not found in the array" << endl;
}


    return 0;
}