#include <iostream>
using namespace std;

int main() {
int sums;
  int result = 0;
int index[3] = {5, 10, 15};

for (int i = 0; i < 3; ++i) {
   sums  = index[i];
    result = result + sums;
}

    cout <<"sums : " << result;
    return 0;
}