#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Student {
    int age;
    double gpa;
    string name;

};

Student createStudent(string name, int age, double gpa) {
    Student student;
    student.name = name;
    student.age = age;
    student.gpa = gpa;
    return student;
}

// Function 2: Display a single student
void displayStudent (Student student, int number) {
    cout << number <<" . " << student.name
    << " (Age: " << student.age << " , GPA: " << student.gpa << " ) " << endl;

}

// Function 3 : Display all students in an array

void displayAllStudents(Student students[], int size) {
    cout <<"===== Class Roster === " << endl;
    for (int i = 0; i < size; ++i) {
        displayStudent(students[i], i +1);
    }
}

void initializeStudents(Student students[]) {
    students[0] = createStudent("John Smith", 20, 3.75);
    students[1] = createStudent("Alice Brown", 19, 3.92);
    students[2] = createStudent("Bob Wilson", 21, 3.58);
}
// Function 5: Calculate average GPA
double calculateAverageGPA(Student students[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += students[i].gpa;
    }
    return total / size;
}

// Function 6: Find student with highest GPA
Student findBestStudent(Student students[], int size) {
    Student best = students[0];  // Start with first student
    for (int i = 1; i < size; i++) {
        if (students[i].gpa > best.gpa) {
            best = students[i];
        }
    }
    return best;
}
int main() {
    const int NUM_STUDENTS = 3;
    Student students[NUM_STUDENTS];

    // Initialize all student data using function
    initializeStudents(students);

    // Display all students using function
    displayAllStudents(students, NUM_STUDENTS);

    // Calculate and display average GPA
    double avgGPA = calculateAverageGPA(students, NUM_STUDENTS);
    cout << "\nClass Average GPA: " << avgGPA << endl;

    // Find and display best student
    Student bestStudent = findBestStudent(students, NUM_STUDENTS);
    cout << "Best Student: " << bestStudent.name
         << " with GPA: " << bestStudent.gpa << endl;


    return 0;
}