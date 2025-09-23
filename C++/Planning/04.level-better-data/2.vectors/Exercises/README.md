# 📦 **Vectors in C++ - Complete Learning Journey**

## 🎯 **What You'll Learn:**
- What vectors are and why they're better than arrays
- How to create and initialize vectors
- Dynamic resizing and memory management
- Vector methods and operations
- Iterators and algorithms with vectors
- 40 hands-on exercises from beginner to advanced

---

## 📚 **Part 1: Vector Basics**

### **What is a Vector?**
Think of a vector like a **smart array** that can grow and shrink automatically:
```
Vector: numbers
┌───┬───┬───┐     push_back(40)    ┌───┬───┬───┬───┐
│ 10│ 20│ 30│  ────────────────→   │ 10│ 20│ 30│ 40│
└───┴───┴───┘                      └───┴───┴───┴───┘
Size: 3                            Size: 4
```

### **Arrays vs Vectors:**
```cpp
// Array - Fixed size, can't change
int arr[5] = {1, 2, 3, 4, 5};  // Size is always 5

// Vector - Dynamic size, can grow/shrink
vector<int> vec = {1, 2, 3, 4, 5};  // Can change size anytime!
vec.push_back(6);  // Now size is 6
vec.pop_back();    // Now size is 5 again
```

### **Basic Vector Syntax:**
```cpp
#include <vector>  // Don't forget this!

vector<datatype> vectorName;                    // Empty vector
vector<datatype> vectorName(size);              // Fixed initial size
vector<datatype> vectorName = {values};         // With initial values
vector<datatype> vectorName(size, value);       // Size with default value

// Examples:
vector<int> numbers;                    // Empty
vector<int> scores(5);                  // 5 elements, all 0
vector<int> grades = {90, 85, 92};      // 3 elements
vector<string> names(3, "Unknown");     // 3 "Unknown" strings
```

### **Essential Vector Methods:**
```cpp
vector<int> numbers = {10, 20, 30};

// Size operations
numbers.size()              // Returns: 3
numbers.empty()             // Returns: false
numbers.capacity()          // Memory allocated

// Adding elements
numbers.push_back(40)       // Add 40 to end: {10, 20, 30, 40}
numbers.insert(numbers.begin() + 1, 15)  // Insert 15 at position 1

// Removing elements
numbers.pop_back()          // Remove last: {10, 20, 30}
numbers.erase(numbers.begin() + 1)       // Remove element at position 1

// Accessing elements
numbers[0]                  // First element: 10
numbers.at(0)               // Safe access with bounds checking
numbers.front()             // First element: 10
numbers.back()              // Last element: 30

// Other useful methods
numbers.clear()             // Remove all elements
numbers.resize(5)           // Change size to 5
```

---

## 🟢 **Part 2: Super Easy Vector Exercises (1-20)**

### **Exercise 1: First Vector**
**Task**: Create a vector with 5 numbers and print the first and last elements.

**Requirements**:
- Create vector: `{10, 20, 30, 40, 50}`
- Print first element using `front()`
- Print last element using `back()`
- Print vector size

**Expected Output**:
```
First element: 10
Last element: 50
Vector size: 5
```

**Hint**: Use `vec.front()`, `vec.back()`, and `vec.size()`.

---

### **Exercise 2: Push and Pop**
**Task**: Create an empty vector, add 3 numbers, then remove the last one.

**Requirements**:
- Start with empty vector
- Use `push_back()` to add 100, 200, 300
- Print vector after each addition
- Use `pop_back()` to remove last element
- Print final vector

**Expected Output**:
```
After adding 100: 100
After adding 200: 100 200
After adding 300: 100 200 300
After removing last: 100 200
```

**Hint**: Use `push_back(value)` to add, `pop_back()` to remove last.

---

### **Exercise 3: Vector Sum**
**Task**: Create a vector with test scores and calculate total and average.

**Requirements**:
- Vector: `{85, 92, 78, 96, 88}`
- Calculate sum of all scores
- Calculate average score
- Print both results

**Expected Output**:
```
Scores: 85 92 78 96 88
Total: 439
Average: 87.8
```

**Hint**: Use loop with `vec.size()` to iterate through all elements.

---

### **Exercise 4: Dynamic Shopping List**
**Task**: Create a shopping list where user can add items.

**Requirements**:
- Start with empty vector of strings
- Ask user how many items they want to add
- Get item names and add to vector
- Display complete shopping list

**Expected Output**:
```
How many items? 3
Item 1: Milk
Item 2: Bread
Item 3: Eggs

Your shopping list:
1. Milk
2. Bread
3. Eggs
```

**Hint**: Use `vector<string>` and `push_back()` in a loop.

---

### **Exercise 5: Vector Resize**
**Task**: Create a vector and demonstrate resizing operations.

**Requirements**:
- Create vector: `{1, 2, 3}`
- Print original size and elements
- Resize to 6 elements (new elements become 0)
- Print new size and all elements
- Resize back to 2 elements
- Print final result

**Expected Output**:
```
Original: 1 2 3 (size: 3)
After resize to 6: 1 2 3 0 0 0 (size: 6)
After resize to 2: 1 2 (size: 2)
```

**Hint**: Use `vec.resize(newSize)` method.

---

### **Exercise 6: Find Maximum**
**Task**: Create a vector with numbers and find the largest value and its position.

**Requirements**:
- Vector: `{45, 23, 67, 12, 89, 34}`
- Find maximum value
- Find its index position
- Print both results

**Expected Output**:
```
Numbers: 45 23 67 12 89 34
Maximum value: 89
Found at position: 4
```

**Hint**: Use loop to track maximum value and its index.

---

### **Exercise 7: Vector Comparison**
**Task**: Create two vectors and check if they are identical.

**Requirements**:
- Vector1: `{1, 2, 3, 4, 5}`
- Vector2: `{1, 2, 3, 4, 5}`
- Compare sizes first, then elements
- Print if vectors are identical

**Expected Output**:
```
Vector 1: 1 2 3 4 5
Vector 2: 1 2 3 4 5
Vectors are identical!
```

**Hint**: First check `vec1.size() == vec2.size()`, then compare elements.

---

### **Exercise 8: Count Elements**
**Task**: Create a vector and count how many elements meet certain conditions.

**Requirements**:
- Vector: `{12, 25, 8, 30, 15, 40, 7}`
- Count numbers greater than 20
- Count even numbers
- Count numbers between 10 and 30

**Expected Output**:
```
Numbers: 12 25 8 30 15 40 7
Greater than 20: 3
Even numbers: 4
Between 10-30: 4
```

**Hint**: Use separate loops or counters for each condition.

---

### **Exercise 9: Vector Reversal**
**Task**: Create a vector and reverse its elements without using reverse function.

**Requirements**:
- Vector: `{10, 20, 30, 40, 50}`
- Reverse elements manually (swap first with last, etc.)
- Print original and reversed vectors

**Expected Output**:
```
Original: 10 20 30 40 50
Reversed: 50 40 30 20 10
```

**Hint**: Swap `vec[i]` with `vec[size-1-i]` for first half of vector.

---

### **Exercise 10: Insert Elements**
**Task**: Create a vector and practice inserting elements at different positions.

**Requirements**:
- Start with vector: `{10, 30, 50}`
- Insert 20 between 10 and 30
- Insert 40 between 30 and 50
- Insert 5 at the beginning
- Print vector after each insertion

**Expected Output**:
```
Original: 10 30 50
After inserting 20: 10 20 30 50
After inserting 40: 10 20 30 40 50
After inserting 5: 5 10 20 30 40 50
```

**Hint**: Use `vec.insert(vec.begin() + position, value)`.

---

### **Exercise 11: Grade Calculator**
**Task**: Create a grade management system using vectors.

**Requirements**:
- Vector for student names: `{"Alice", "Bob", "Carol"}`
- Vector for their grades: `{85, 92, 78}`
- Calculate and display each student's letter grade
- Find student with highest grade

**Expected Output**:
```
Grade Report:
Alice: 85 (B)
Bob: 92 (A)
Carol: 78 (C)

Top student: Bob with 92
```

**Hint**: Use parallel vectors and grade conversion logic.

---

### **Exercise 12: Vector Statistics**
**Task**: Create a vector and calculate various statistics.

**Requirements**:
- Vector: `{15, 23, 8, 42, 16, 35, 19}`
- Calculate: sum, average, minimum, maximum, range
- Count how many elements are above average

**Expected Output**:
```
Numbers: 15 23 8 42 16 35 19
Sum: 158
Average: 22.57
Min: 8, Max: 42
Range: 34
Above average: 3
```

**Hint**: Calculate statistics in separate loops or single pass.

---

### **Exercise 13: Remove Elements**
**Task**: Create a vector and practice removing elements.

**Requirements**:
- Vector: `{10, 20, 30, 20, 40, 20, 50}`
- Remove all occurrences of 20
- Print vector before and after removal
- Show final size

**Expected Output**:
```
Original: 10 20 30 20 40 20 50 (size: 7)
After removing 20s: 10 30 40 50 (size: 4)
```

**Hint**: Use loop to find 20s and `erase()` method, or use `remove()` algorithm.

---

### **Exercise 14: Vector Concatenation**
**Task**: Create two vectors and combine them into a third vector.

**Requirements**:
- Vector1: `{1, 2, 3}`
- Vector2: `{4, 5, 6}`
- Create third vector containing all elements
- Try two methods: manual copying and `insert()`

**Expected Output**:
```
Vector 1: 1 2 3
Vector 2: 4 5 6
Combined: 1 2 3 4 5 6
```

**Hint**: Use `insert(vec3.end(), vec1.begin(), vec1.end())` or manual loop.

---

### **Exercise 15: Temperature Tracker**
**Task**: Create a weekly temperature tracking system.

**Requirements**:
- Days: `{"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"}`
- Temperatures: `{72, 75, 73, 78, 80, 82, 79}`
- Find hottest and coldest days
- Calculate weekly average
- Show days above/below average

**Expected Output**:
```
Weekly Temperature Report:
Mon: 72°F, Tue: 75°F, Wed: 73°F, Thu: 78°F
Fri: 80°F, Sat: 82°F, Sun: 79°F

Hottest: Saturday (82°F)
Coldest: Monday (72°F)
Average: 77.0°F

Above average: Thu, Fri, Sat, Sun
Below average: Mon, Tue, Wed
```

**Hint**: Use parallel vectors for days and temperatures.

---

### **Exercise 16: Vector Search**
**Task**: Create a vector and implement different search operations.

**Requirements**:
- Vector: `{15, 23, 8, 42, 16, 35, 19, 23}`
- Search for specific value (23)
- Find all positions where it occurs
- Check if value exists using boolean result

**Expected Output**:
```
Numbers: 15 23 8 42 16 35 19 23
Searching for: 23
Found at positions: 1, 7
Value 23 exists: Yes
```

**Hint**: Use loop to find all occurrences, store positions in another vector.

---

### **Exercise 17: Dynamic Menu System**
**Task**: Create a menu-driven program using vectors.

**Requirements**:
- Vector to store numbers
- Menu options: Add number, Remove number, Display all, Calculate sum, Exit
- Keep running until user chooses exit

**Expected Output**:
```
=== Vector Calculator ===
1. Add number
2. Remove last number
3. Display all numbers
4. Calculate sum
5. Exit
Choice: 1
Enter number: 25
Added 25 to vector.

Choice: 3
Numbers: 25
```

**Hint**: Use `switch` statement and loop until user exits.

---

### **Exercise 18: Vector Capacity**
**Task**: Demonstrate the difference between size and capacity.

**Requirements**:
- Start with empty vector
- Add numbers one by one (1 to 10)
- After each addition, show size and capacity
- Observe how capacity grows

**Expected Output**:
```
Adding 1: Size=1, Capacity=1
Adding 2: Size=2, Capacity=2
Adding 3: Size=3, Capacity=4
Adding 4: Size=4, Capacity=4
Adding 5: Size=5, Capacity=8
...
```

**Hint**: Use `vec.size()` and `vec.capacity()` methods.

---

### **Exercise 19: Vector Initialization Methods**
**Task**: Demonstrate different ways to create and initialize vectors.

**Requirements**:
- Create vectors using different initialization methods
- Show the contents of each vector
- Demonstrate copy constructor

**Expected Output**:
```
Empty vector: (size: 0)
Sized vector: 0 0 0 0 0 (size: 5)
List vector: 10 20 30 (size: 3)
Fill vector: 7 7 7 7 (size: 4, all 7s)
Copy vector: 10 20 30 (copied from list vector)
```

**Hint**: Use different constructor forms: `vector<int>()`, `vector<int>(5)`, etc.

---

### **Exercise 20: Vector Swap**
**Task**: Create two vectors and swap their contents.

**Requirements**:
- Vector1: `{1, 2, 3}`
- Vector2: `{10, 20, 30, 40}`
- Show before swap
- Swap contents using `swap()` method
- Show after swap

**Expected Output**:
```
Before swap:
Vector 1: 1 2 3
Vector 2: 10 20 30 40

After swap:
Vector 1: 10 20 30 40
Vector 2: 1 2 3
```

**Hint**: Use `vec1.swap(vec2)` method.

---

## 🟡 **Part 3: Advanced Vector Exercises (21-40)**

### **Exercise 21: Vector Sorting**
**Task**: Create a vector and implement bubble sort algorithm.

**Requirements**:
- Vector: `{64, 34, 25, 12, 22, 11, 90}`
- Implement bubble sort (don't use `sort()` function)
- Show vector after each pass
- Count number of swaps made

**Expected Output**:
```
Original: 64 34 25 12 22 11 90
Pass 1: 34 25 12 22 11 64 90
Pass 2: 25 12 22 11 34 64 90
...
Final: 11 12 22 25 34 64 90
Total swaps: 12
```

**Hint**: Use nested loops, swap adjacent elements if first > second.

---

### **Exercise 22: Vector of Vectors (2D)**
**Task**: Create a 2D vector (matrix) and perform operations.

**Requirements**:
- Create 3x3 matrix using vector of vectors
- Initialize with values `{{1,2,3}, {4,5,6}, {7,8,9}}`
- Print matrix in grid format
- Calculate sum of each row and column

**Expected Output**:
```
Matrix:
1  2  3
4  5  6  
7  8  9

Row sums: 6, 15, 24
Column sums: 12, 15, 18
```

**Hint**: Use `vector<vector<int>>` and nested loops for operations.

---

### **Exercise 23: Vector Rotation**
**Task**: Rotate vector elements left and right by specified positions.

**Requirements**:
- Vector: `{1, 2, 3, 4, 5, 6, 7}`
- Rotate left by 2 positions: `{3, 4, 5, 6, 7, 1, 2}`
- Rotate right by 3 positions: `{5, 6, 7, 1, 2, 3, 4}`
- Print original and both rotations

**Expected Output**:
```
Original: 1 2 3 4 5 6 7
Left rotate by 2: 3 4 5 6 7 1 2
Right rotate by 3: 5 6 7 1 2 3 4
```

**Hint**: Use `rotate()` algorithm or implement manually with temporary vector.

---

### **Exercise 24: Vector Partitioning**
**Task**: Partition vector into even and odd numbers.

**Requirements**:
- Vector: `{12, 7, 14, 9, 8, 3, 15, 6}`
- Separate into two vectors: evens and odds
- Print original and separated vectors
- Show count of each type

**Expected Output**:
```
Original: 12 7 14 9 8 3 15 6
Even numbers: 12 14 8 6 (count: 4)
Odd numbers: 7 9 3 15 (count: 4)
```

**Hint**: Use two separate vectors and `push_back()` based on `num % 2`.

---

### **Exercise 25: Vector Intersection**
**Task**: Find common elements between two vectors.

**Requirements**:
- Vector1: `{1, 4, 7, 2, 9, 5}`
- Vector2: `{3, 7, 1, 8, 5, 6}`
- Find elements that exist in both vectors
- Store common elements in third vector

**Expected Output**:
```
Vector 1: 1 4 7 2 9 5
Vector 2: 3 7 1 8 5 6
Common elements: 1 7 5
```

**Hint**: For each element in vector1, check if it exists in vector2.

---

### **Exercise 26: Vector Frequency Analysis**
**Task**: Count frequency of each element and find mode.

**Requirements**:
- Vector: `{3, 7, 3, 2, 8, 3, 7, 9, 2, 3}`
- Count how many times each number appears
- Find the mode (most frequent element)
- Display frequency table

**Expected Output**:
```
Numbers: 3 7 3 2 8 3 7 9 2 3
Frequency analysis:
2: 2 times
3: 4 times
7: 2 times
8: 1 time
9: 1 time

Mode: 3 (appears 4 times)
```

**Hint**: Use map or nested loops to count frequencies.

---

### **Exercise 27: Vector Sliding Window**
**Task**: Find maximum element in every sliding window of size k.

**Requirements**:
- Vector: `{1, 3, -1, -3, 5, 3, 6, 7}`
- Window size: 3
- Find maximum in each window: [1,3,-1], [3,-1,-3], [-1,-3,5], etc.

**Expected Output**:
```
Array: 1 3 -1 -3 5 3 6 7
Window size: 3
Window maximums: 3 3 5 5 6 7
```

**Hint**: Use nested loop - outer for window start, inner to find max in window.

---

### **Exercise 28: Vector Merge Sorted**
**Task**: Merge two sorted vectors into one sorted vector.

**Requirements**:
- Vector1: `{1, 5, 9, 12, 15}` (sorted)
- Vector2: `{2, 6, 8, 13, 16, 20}` (sorted)
- Merge while maintaining sorted order
- Don't sort after merging

**Expected Output**:
```
Vector 1: 1 5 9 12 15
Vector 2: 2 6 8 13 16 20
Merged: 1 2 5 6 8 9 12 13 15 16 20
```

**Hint**: Use two pointers, compare elements and take smaller one each time.

---

### **Exercise 29: Vector Binary Search**
**Task**: Implement binary search on sorted vector.

**Requirements**:
- Sorted vector: `{2, 5, 8, 12, 16, 23, 38, 45, 67, 78, 89, 99}`
- Search for target value (23)
- Show search steps (which elements were compared)
- Return index if found, -1 if not found

**Expected Output**:
```
Sorted vector: 2 5 8 12 16 23 38 45 67 78 89 99
Searching for: 23

Step 1: Check middle element 38 (too large)
Step 2: Check middle element 12 (too small)  
Step 3: Check middle element 23 (found!)

Element 23 found at index 5
```

**Hint**: Use low/high pointers, check middle element, adjust search range.

---

### **Exercise 30: Vector Permutations**
**Task**: Generate all possible permutations of a vector.

**Requirements**:
- Vector: `{1, 2, 3}`
- Generate all permutations
- Count total permutations
- Print each permutation

**Expected Output**:
```
Original: 1 2 3
All permutations:
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
Total permutations: 6
```

**Hint**: Use `next_permutation()` algorithm or implement recursively.

---

### **Exercise 31: Vector Subsets**
**Task**: Generate all possible subsets of a vector.

**Requirements**:
- Vector: `{1, 2, 3}`
- Generate all subsets (including empty set)
- Count total subsets (should be 2^n)

**Expected Output**:
```
Original: 1 2 3
All subsets:
{}
{1}
{2}
{1, 2}
{3}
{1, 3}
{2, 3}
{1, 2, 3}
Total subsets: 8
```

**Hint**: Use bit manipulation or recursive approach.

---

### **Exercise 32: Vector Longest Increasing Subsequence**
**Task**: Find length of longest increasing subsequence.

**Requirements**:
- Vector: `{10, 22, 9, 33, 21, 50, 41, 60, 80}`
- Find longest subsequence where each element > previous
- Show the actual subsequence, not just length

**Expected Output**:
```
Array: 10 22 9 33 21 50 41 60 80
Longest increasing subsequence: 10 22 33 50 60 80
Length: 6
```

**Hint**: Use dynamic programming approach with auxiliary array.

---

### **Exercise 33: Vector Dutch Flag Problem**
**Task**: Sort vector containing only 0s, 1s, and 2s in single pass.

**Requirements**:
- Vector: `{2, 0, 2, 1, 1, 0, 2, 1, 0}`
- Sort without using sorting algorithm
- Use only one pass through the vector

**Expected Output**:
```
Original: 2 0 2 1 1 0 2 1 0
Sorted: 0 0 0 1 1 1 2 2 2
Comparison count: 9 (single pass)
```

**Hint**: Use three pointers for 0s, 1s, and 2s boundaries.

---

### **Exercise 34: Vector Peak Element**
**Task**: Find all peak elements (larger than neighbors).

**Requirements**:
- Vector: `{1, 3, 20, 4, 1, 0, 8, 5}`
- Peak = element larger than both neighbors
- First/last elements compare with one neighbor only

**Expected Output**:
```
Array: 1 3 20 4 1 0 8 5
Peak elements:
- 20 at index 2 (neighbors: 3, 4)
- 8 at index 6 (neighbors: 0, 5)
Total peaks found: 2
```

**Hint**: Check `vec[i] > vec[i-1] && vec[i] > vec[i+1]` for middle elements.

---

### **Exercise 35: Vector Water Trapping**
**Task**: Calculate trapped rainwater between vector elements (heights).

**Requirements**:
- Heights: `{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}`
- Calculate water trapped above each position
- Show water level at each position

**Expected Output**:
```
Heights: 0 1 0 2 1 0 1 3 2 1 2 1
Water:   0 0 1 0 1 2 1 0 0 1 0 0
Total water trapped: 6 units
```

**Hint**: For each position, find max height to left and right.

---

### **Exercise 36: Vector Anagram Groups**
**Task**: Group strings that are anagrams of each other.

**Requirements**:
- Vector: `{"eat", "tea", "tan", "ate", "nat", "bat", "tab"}`
- Group words that use same letters
- Print each group separately

**Expected Output**:
```
Original: eat tea tan ate nat bat tab
Anagram groups:
Group 1: eat tea ate
Group 2: tan nat  
Group 3: bat tab
```

**Hint**: Sort characters in each string, group by sorted form.

---

### **Exercise 37: Vector Stock Trader**
**Task**: Find maximum profit from buying and selling stock multiple times.

**Requirements**:
- Prices: `{7, 1, 5, 3, 6, 4, 8, 2}`
- Can buy and sell multiple times
- Must sell before buying again
- Find maximum total profit

**Expected Output**:
```
Stock prices: 7 1 5 3 6 4 8 2
Optimal trades:
- Buy at 1, sell at 5 (profit: 4)
- Buy at 3, sell at 6 (profit: 3)  
- Buy at 4, sell at 8 (profit: 4)
Maximum total profit: 11
```

**Hint**: Buy at every local minimum, sell at every local maximum.

---

### **Exercise 38: Vector Palindromic Subvectors**
**Task**: Find all subvectors that are palindromes.

**Requirements**:
- Vector: `{1, 2, 3, 2, 1, 4, 5, 4}`
- Find all contiguous subarrays that read same forwards/backwards
- Show starting index, length, and the palindrome

**Expected Output**:
```
Array: 1 2 3 2 1 4 5 4
Palindromic subvectors:
[0-0]: 1
[1-1]: 2
[2-2]: 3
[1-3]: 2 3 2
[0-4]: 1 2 3 2 1
[5-5]: 4
...
Total palindromes found: 12
```

**Hint**: Check all possible subarrays for palindrome property.

---

### **Exercise 39: Vector Matrix Multiplication**
**Task**: Multiply two matrices represented as vectors of vectors.

**Requirements**:
- Matrix A (2x3): `{{1,2,3}, {4,5,6}}`
- Matrix B (3x2): `{{7,8}, {9,10}, {11,12}}`
- Result should be 2x2 matrix
- Show step-by-step calculation

**Expected Output**:
```
Matrix A (2x3):        Matrix B (3x2):
1  2  3                7   8
4  5  6                9  10
                      11  12

Result (2x2):
58  64
139 154

Calculation:
[0,0] = 1*7 + 2*9 + 3*11 = 58
[0,1] = 1*8 + 2*10 + 3*12 = 64
...
```

**Hint**: Use three nested loops: rows of A, columns of B, and dot product.

---

### **Exercise 40: Vector Expression Evaluator**
**Task**: Parse and evaluate mathematical expressions stored in vectors.

**Requirements**:
- Expression as vector: `{"3", "+", "4", "*", "2", "-", "1"}`
- Support operators: +, -, *, /
- Handle operator precedence (* and / before + and -)
- Show step-by-step evaluation

**Expected Output**:
```
Expression: 3 + 4 * 2 - 1
Step 1: Handle multiplication: 3 + 8 - 1
Step 2: Handle addition: 11 - 1  
Step 3: Handle subtraction: 10
Final result: 10
```

**Hint**: Use two stacks (numbers and operators) or convert to postfix notation.

---

## 🎯 **How to Use This Guide**

### **🟢 Beginner Path (1-20):**
- **Week 1:** Exercises 1-10 (basic vector operations)
- **Week 2:** Exercises 11-20 (dynamic operations, searching)
- Focus on: `push_back()`, `pop_back()`, `size()`, basic algorithms

### **🟡 Advanced Path (21-40):**
- **Week 3:** Exercises 21-30 (algorithms, 2D vectors)
- **Week 4:** Exercises 31-40 (complex problems, optimization)
- Focus on: STL algorithms, advanced problem solving

### **📝 Quick Templates:**

**Basic Vector Template:**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    
    // Your code here
    
    return 0;
}
```

**Vector with User Input:**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int count;
    
    cout << "How many numbers? ";
    cin >> count;
    
    // Get input
    for(int i = 0; i < count; i++) {
        int num;
        cout << "Enter number " << (i+1) << ": ";
        cin >> num;
        numbers.push_back(num);
    }
    
    // Process vector here
    
    return 0;
}
```

**2D Vector Template:**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 3x3 matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Access: matrix[row][col]
    
    return 0;
}
```

**Vector with Algorithms:**
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {5, 2, 8, 1, 9};
    
    // Sort vector
    sort(numbers.begin(), numbers.end());
    
    // Find element
    auto it = find(numbers.begin(), numbers.end(), 8);
    
    // Reverse vector
    reverse(numbers.begin(), numbers.end());
    
    return 0;
}
```

---

## 🔧 **Essential Vector Methods Reference**

### **Creation & Initialization:**
```cpp
vector<int> v1;                    // Empty vector
vector<int> v2(5);                 // 5 elements, all 0
vector<int> v3(5, 10);             // 5 elements, all 10
vector<int> v4 = {1, 2, 3, 4};     // Initialize with values
vector<int> v5(v4);                // Copy constructor
```

### **Size & Capacity:**
```cpp
v.size()                          // Number of elements
v.empty()                         // true if vector is empty
v.capacity()                      // Memory allocated
v.reserve(100)                    // Reserve memory for 100 elements
v.resize(10)                      // Change size to 10 elements
v.shrink_to_fit()                // Reduce capacity to fit size
```

### **Adding Elements:**
```cpp
v.push_back(value)               // Add to end
v.insert(v.begin() + pos, value) // Insert at position
v.insert(v.end(), {1,2,3})       // Insert multiple at end
v.emplace_back(value)            // Construct in place (more efficient)
```

### **Removing Elements:**
```cpp
v.pop_back()                     // Remove last element
v.erase(v.begin() + pos)         // Remove element at position
v.erase(v.begin() + start, v.begin() + end)  // Remove range
v.clear()                        // Remove all elements
```

### **Accessing Elements:**
```cpp
v[index]                         // Access by index (no bounds check)
v.at(index)                      // Safe access (throws exception if invalid)
v.front()                        // First element
v.back()                         // Last element
v.data()                         // Pointer to underlying array
```

### **Iteration:**
```cpp
// Traditional for loop
for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}

// Range-based for loop (C++11)
for(int num : v) {
    cout << num << " ";
}

// Iterator-based
for(auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << " ";
}
```

### **Useful Algorithms:**
```cpp
#include <algorithm>

sort(v.begin(), v.end())                    // Sort ascending
sort(v.rbegin(), v.rend())                  // Sort descending
reverse(v.begin(), v.end())                 // Reverse elements
find(v.begin(), v.end(), value)             // Find element
count(v.begin(), v.end(), value)            // Count occurrences
max_element(v.begin(), v.end())             // Find maximum
min_element(v.begin(), v.end())             // Find minimum
unique(v.begin(), v.end())                  // Remove consecutive duplicates
```

---

## 💡 **Common Beginner Mistakes & Solutions**

### **❌ Mistake 1: Accessing out of bounds**
```cpp
vector<int> v = {1, 2, 3};
cout << v[5];  // Undefined behavior!
```
**✅ Solution:**
```cpp
if(index < v.size()) {
    cout << v[index];
}
// Or use v.at(index) for automatic bounds checking
```

### **❌ Mistake 2: Modifying vector while iterating**
```cpp
for(int i = 0; i < v.size(); i++) {
    if(v[i] == 5) {
        v.erase(v.begin() + i);  // Changes size during loop!
    }
}
```
**✅ Solution:**
```cpp
for(int i = v.size() - 1; i >= 0; i--) {  // Iterate backwards
    if(v[i] == 5) {
        v.erase(v.begin() + i);
    }
}
```

### **❌ Mistake 3: Using size() in signed comparison**
```cpp
for(int i = v.size() - 1; i >= 0; i--) {  // Problem if v is empty!
    // size() returns unsigned, so size()-1 wraps around
}
```
**✅ Solution:**
```cpp
for(int i = (int)v.size() - 1; i >= 0; i--) {  // Cast to signed
    // Or check if empty first
}
```

### **❌ Mistake 4: Not reserving capacity**
```cpp
vector<int> v;
for(int i = 0; i < 1000000; i++) {
    v.push_back(i);  // Multiple reallocations!
}
```
**✅ Solution:**
```cpp
vector<int> v;
v.reserve(1000000);  // Allocate once
for(int i = 0; i < 1000000; i++) {
    v.push_back(i);
}
```

---

## 🎯 **Practice Recommendations**

### **📅 Daily Practice Schedule:**
- **Day 1-5:** Basic operations (Ex 1-10)
- **Day 6-10:** Dynamic operations (Ex 11-20)
- **Day 11-15:** Algorithms (Ex 21-30)
- **Day 16-20:** Advanced problems (Ex 31-40)

### **🏆 Mastery Checklist:**
- [ ] Can create vectors using different methods
- [ ] Comfortable with push_back/pop_back operations
- [ ] Can iterate through vectors multiple ways
- [ ] Understand size vs capacity concept
- [ ] Can use STL algorithms with vectors
- [ ] Can work with 2D vectors (vector of vectors)
- [ ] Can solve algorithmic problems using vectors
- [ ] Understand performance implications

### **🔍 Testing Your Solutions:**
```cpp
// Always test edge cases:
vector<int> empty_vec;           // Empty vector
vector<int> single = {42};       // Single element
vector<int> duplicates = {1,1,1}; // All same elements
vector<int> sorted = {1,2,3,4,5}; // Already sorted
vector<int> reverse = {5,4,3,2,1}; // Reverse sorted
```

---

## 🆘 **Getting Help:**

### **When You're Stuck:**
- **"Help me with Exercise 15"** → I'll give step-by-step hints
- **"Show solution for Exercise 23"** → Complete explanation with code
- **"I don't understand 2D vectors"** → Simple explanation with examples
- **"Exercise 35 is too hard"** → I'll break it into smaller parts
- **"My code doesn't compile"** → Share your code for debugging help

### **💻 Compilation Commands:**
```bash
# Basic compile and run
g++ filename.cpp -o program && ./program

# With warnings (highly recommended)
g++ -Wall -Wextra -std=c++11 filename.cpp -o program && ./program

# Debug mode with symbols
g++ -g -Wall -std=c++11 filename.cpp -o program && ./program

# Optimized release build
g++ -O2 -std=c++11 filename.cpp -o program && ./program
```

### **🐛 Debugging Tips:**
```cpp
// Print vector contents for debugging
void print_vector(const vector<int>& v, const string& name = "Vector") {
    cout << name << ": ";
    for(int x : v) cout << x << " ";
    cout << "(size: " << v.size() << ")" << endl;
}

// Usage
vector<int> nums = {1, 2, 3};
print_vector(nums, "My numbers");
```

---

## 🚀 **Ready to Start?**

**Pick any exercise that interests you, or:**
1. **Start from Exercise 1** - Build solid foundations
2. **Jump to Exercise 11** - If you know basics, try real applications
3. **Challenge yourself with Exercise 31** - For advanced problem solving

**Just tell me:**
- **"I want to try Exercise [number]"** - I'll guide you through it
- **"Show me the solution for Exercise [number]"** - Complete code with explanation
- **"I need help with [topic]"** - Specific guidance on any vector concept

**Remember:** Vectors are one of the most important and useful tools in C++. Master them, and you'll be able to solve complex problems with ease!

**Which exercise catches your attention first?** 🎯