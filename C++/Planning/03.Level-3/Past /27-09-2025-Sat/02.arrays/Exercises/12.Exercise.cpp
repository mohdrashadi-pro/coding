#include <iostream>
using namespace std;


int main() {

int index[6] = {95, 87, 76, 69, 84};
for (int i = 0; i < 5; ++i) {

    if (index[i] >= 90)
        {
        cout << index[i] <<": A" << endl;
    }

    else if (index[i] >= 80 && index[i] < 90)

        {
        cout << index[i] <<": B" << endl;

    }

    else if (index[i] >= 70 && index[i] < 79)

        {
        cout << index[i] <<": C" << endl;

        } else if (index[i] >= 60 && index[i] < 69)
            {
            cout << index[i] <<": D" << endl;

        } else {
        cout << index[i] << ": F" << endl;
    }

}

    return 0;
}