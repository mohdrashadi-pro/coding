/*
Exercise 5: Personal Info Card
Task: Create a detailed personal information program.
What to ask:

Full name
Age
Height in centimeters
Favorite school subject (single character like 'M' for Math)
Do they like programming? (true/false)

Expected Output:
Enter your full name: John Smith
Enter your age: 20
Enter your height in cm: 175
Enter favorite subject (first letter): M
Do you like programming? (1 for yes, 0 for no): 1

=== PERSONAL INFO CARD ===
Name: John Smith
Age: 20 years old
Height: 175 cm
Favorite Subject: M
Likes Programming: 1
 */


#include <iostream>
using namespace std;

int main() {

string name;
    int age;
    float height;
    bool like;
    char subject;

    cout <<"============= Input =============" << endl;
    cout <<"Enter your full name: ";
    cin >> name;
    cout <<"Enter your age: ";
    cin >> age;
    cout <<"Enter your height in cm: ";
    cin >> height;
    cout <<"Enter favorite subject (First Letter): ";
    cin >> subject;
    cout <<"Do you like programming ? ( 1 for yes, 0 for n ): ";
    cin >> like;



    cout <<"============= Output =============" << endl;
    cout <<"============= Personal info card ============= " << endl;
    cout <<"Name: " << name << endl;
    cout <<"Age: " << age  << "Years Old "<< endl;
    cout <<"Height : " << height << "cm" << endl;
    cout <<"Favorite Subject : " << subject << endl;
    if (like = 1 ) {
        cout <<"This is great you're like you're subject";
    } else {
        cout <<"You can choose another subject";
    }











    return 0;
}


/*

intput

* full


 */