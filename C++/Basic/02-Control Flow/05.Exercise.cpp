#include <iostream>
using namespace std;
int main() {
int score;
cout <<"Enter your score ";
    cin >> score;
    if (score >= 90 && score <= 100) {
        cout << score << " A";
    } else  if (score >= 80 && score < 90) {
        cout << score << " B";
    } else if  (score >= 70 && score < 80) {
        cout << score << " C";
    } else if (score <70 && score > 60) {
        cout << score << " D ";
    } else {
        cout << score << "F";
    }



    return 0;
}