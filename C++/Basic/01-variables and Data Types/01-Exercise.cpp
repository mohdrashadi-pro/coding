/*

Exercise 1: My Favorites
Task: Create a program that stores and displays your favorite things.
What to store:

Favorite number (integer)
Favorite color (string)
Favorite letter (char)
Birth year (integer)

Expected Output:
=== My Favorites ===
Favorite Number: 7
Favorite Color: Blue
Favorite Letter: A
Birth Year: 2000


 */



#include <iostream>
using namespace std;

int main() {

    cout <<"==== My Favorites ==== " << endl;

int number;
    string color;
    char letter;
    int year;

    cout << "Enter Your Favorites Numbers: ";
    cin >>number;

    cout << "Enter Your Favorites Color: ";
    cin >> color;
    cout << "Enter Your Favorites Letters : ";
    cin >> letter;
    cout << "Enter Your Brith Year : ";
    cin >> year;

    cout <<"==== My Favorites ==== " << endl;

    cout << "  Favorites Number: " << number << endl;
        cout << "  Favorites Color : " << color << endl;
            cout << "  Favorites Letter : " << letter << endl;
                cout << "  Favorites Year : " << year << endl;







    return 0;
}