#include <iostream>
using namespace std;

struct Movie {
    string title;
    int year;
    double rating;

};



int main() {
Movie input;
    string title;
    int year;
    double rating;
input.title = title;
    input.year = year;
    input.rating = rating;

    cout << "===================== Process ===================== " << endl;
    cout <<"Enter name: ";
    cin >> title;
    cout <<"Enter the year: ";
    cin >> year;
cout <<"Enter your rating : /10 ";
    cin >> rating;

    cout << "============ The Output ============== " << endl;
    cout <<"Movie: " << title << "( " << year <<" )" << endl;
    if (rating >= 0 && rating <= 10) {
        cout <<"Rating: " << rating <<"/10" << endl;
    } else {
        cout <<"You Enter Wrong" << endl;
    };





    return 0;
}