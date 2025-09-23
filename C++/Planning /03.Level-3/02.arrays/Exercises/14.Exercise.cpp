#include <iostream>

int main() {
    int numbers[] = {-5, 10, -3, 8, 0, 15, -2};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int count = 0;

    for (int i = 0; i < size; ++i) {
        if (numbers[i] > 0) {
            count++;
        }
    }

    std::cout << "Positive numbers: " << count << std::endl;

    return 0;
}