#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "How many students? ";
    cin >> size;

    double scores[size];

    cout << "Enter test scores (0-100):" << endl;

    // Get all scores from user
    for (int i = 0; i < size; i++) {
        cout << "Student " << (i + 1) << " score: ";
        cin >> scores[i];
    }

    cout << endl;
    cout << "=== CLASS RESULTS ===" << endl;

    // Display all scores
    cout << "Scores: ";
    for (int i = 0; i < size; i++) {
        cout << scores[i];
        if (i < size - 1) cout << ", ";  // Add comma except for last score
    }
    cout << endl;

    // Calculate average
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];  // Add each score to total
    }
    double average = sum / size;
    cout << "Average: " << average << endl;

    // Find highest score
    double highest = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    cout << "Highest: " << highest << endl;

    // Find lowest score
    double lowest = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    cout << "Lowest: " << lowest << endl;

    // Count passing students (score >= 60)
    int passCount = 0;
    for (int i = 0; i < size; i++) {
        if (scores[i] >= 60) {
            passCount++;
        }
    }
    cout << "Students passed: " << passCount << " out of " << size << endl;

    return 0;
}