#include <iostream>
using namespace std;

struct Movie {

    string title;
    int year;
    double rating;
};



int main() {
    // Variables
Movie movie;
    string title = movie.title; int year = movie.year; double rating = movie.rating;

// Input
    cout <<"Enter the Title of Movie: ";
    getline(cin , title);

    cout <<"Enter the year";
    cin >> year;

    cout <<"Enter rating";
    cin >> rating;
if (rating >= 0 && rating <= 10 ) {

} else {
    cerr <<" The Error in your rating ";
};


    cout <<"============================ " << endl;
    cout <<"Movie : " <<title <<"(" << year << ")" << endl;
    cout <<"Rating :" << rating <<" / 10";


    return 0;
}