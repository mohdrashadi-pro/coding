# 📊 **Arrays in C++ - Complete Learning Journey**

## 🎯 **What You'll Learn:**
- What arrays are and why we use them
- How to create and initialize arrays
- Accessing and modifying array elements
- Loops with arrays
- Multi-dimensional arrays
- Common array operations
- 40 hands-on exercises from beginner to advanced

---

## 📚 **Part 1: Array Basics**

### **What is an Array?**
Think of an array like a **row of boxes** where each box can hold one value:
```
Array: numbers[5]
┌───┬───┬───┬───┬───┐
│ 10│ 20│ 30│ 40│ 50│
└───┴───┴───┴───┴───┘
  0   1   2   3   4    ← Index numbers
```

### **Why Use Arrays?**
Instead of creating separate variables:
```cpp
int num1 = 10;
int num2 = 20;
int num3 = 30;  // This gets messy with many numbers!
```

Use an array:
```cpp
int numbers[3] = {10, 20, 30};  // Much cleaner!
```

### **Basic Array Syntax:**
```cpp
datatype arrayName[size] = {values};

// Examples:
int scores[5] = {90, 85, 92, 78, 96};
string names[3] = {"Alice", "Bob", "Carol"};
double prices[4] = {12.99, 8.50, 15.75, 22.00};
```

### **Accessing Array Elements:**
```cpp
int numbers[5] = {10, 20, 30, 40, 50};

cout << numbers[0];  // Prints: 10 (first element)
cout << numbers[1];  // Prints: 20 (second element)
cout << numbers[4];  // Prints: 50 (last element)

// Modifying elements:
numbers[0] = 100;    // Changes first element to 100
```

**⚠️ Important:** Array indexing starts at 0, not 1!

---

## 🔄 **Part 2: Arrays with Loops**

### **Printing All Elements:**
```cpp
int numbers[5] = {10, 20, 30, 40, 50};

// Using for loop
for(int i = 0; i < 5; i++) {
    cout << numbers[i] << " ";
}
// Output: 10 20 30 40 50
```

### **Reading User Input into Array:**
```cpp
int scores[3];

for(int i = 0; i < 3; i++) {
    cout << "Enter score " << (i+1) << ": ";
    cin >> scores[i];
}
```

---

## 🟢 **Part 3: Super Easy Array Exercises (1-20)**

### **Exercise 1: First Array**
**Task**: Create an array with 5 numbers and print the first and last elements.

**Requirements**:
- Create array: `{10, 20, 30, 40, 50}`
- Print first element (index 0)
- Print last element (index 4)

**Expected Output**:
```
First element: 10
Last element: 50
```

**Hint**: Use `arrayName[0]` for first element and `arrayName[4]` for last element.

---

### **Exercise 2: Array Sum**
**Task**: Create an array with 3 numbers and calculate their sum.

**Requirements**:
- Array: `{5, 10, 15}`
- Add all elements together
- Print the total sum

**Expected Output**:
```
The sum is: 30
```

**Hint**: Use `array[0] + array[1] + array[2]`.

---

### **Exercise 3: Print All Elements**
**Task**: Create an array with your favorite 4 numbers and print them all.

**Requirements**:
- Create array with 4 numbers of your choice
- Use a for loop to print each element
- Print each number on the same line

**Expected Output**:
```
My numbers: 7 14 21 28
```

**Hint**: Use `for(int i = 0; i < 4; i++)` loop.

---

### **Exercise 4: Days of Week**
**Task**: Create an array with first 3 days of the week and print them.

**Requirements**:
- String array: `{"Monday", "Tuesday", "Wednesday"}`
- Print each day with a number
- Use loop to display all

**Expected Output**:
```
1. Monday
2. Tuesday  
3. Wednesday
```

**Hint**: Print `(i+1)` for numbering since array starts at index 0.

---

### **Exercise 5: Array Modification**
**Task**: Create an array, then change one element and display before/after.

**Requirements**:
- Start with array: `{100, 200, 300}`
- Print original array
- Change middle element to 999
- Print modified array

**Expected Output**:
```
Original: 100 200 300
Modified: 100 999 300
```

**Hint**: Use `array[1] = 999;` to change the middle element.

---

### **Exercise 6: Find Maximum**
**Task**: Create an array with 4 numbers and find the largest one.

**Requirements**:
- Array: `{45, 23, 67, 12}`
- Compare all elements to find maximum
- Print the largest number

**Expected Output**:
```
Maximum number: 67
```

**Hint**: Use a variable to track the maximum, compare each element.

---

### **Exercise 7: Count Even Numbers**
**Task**: Create an array and count how many numbers are even.

**Requirements**:
- Array: `{2, 5, 8, 11, 14}`
- Check each number if it's even (divisible by 2)
- Count and print total even numbers

**Expected Output**:
```
Even numbers count: 3
```

**Hint**: Use `if(array[i] % 2 == 0)` to check if even.

---

### **Exercise 8: Reverse Print**
**Task**: Create an array and print elements in reverse order.

**Requirements**:
- Array: `{1, 2, 3, 4, 5}`
- Print from last element to first
- Don't modify the array, just print backwards

**Expected Output**:
```
Reverse order: 5 4 3 2 1
```

**Hint**: Use `for(int i = 4; i >= 0; i--)` loop.

---

### **Exercise 9: Array Average**
**Task**: Create an array with test scores and calculate the average.

**Requirements**:
- Array: `{85, 92, 78, 96, 88}`
- Add all scores and divide by number of elements
- Print the average score

**Expected Output**:
```
Average score: 87.8
```

**Hint**: Sum all elements, then divide by 5. Use `double` for decimal result.

---

### **Exercise 10: Search for Value**
**Task**: Create an array and search if a specific number exists.

**Requirements**:
- Array: `{10, 25, 30, 45, 50}`
- Search for number 30
- Print whether it was found or not

**Expected Output**:
```
Number 30 found in the array!
```

**Hint**: Use loop with `if(array[i] == 30)` to search.

---

### **Exercise 11: Temperature Converter**
**Task**: Create an array with Celsius temperatures and convert to Fahrenheit.

**Requirements**:
- Celsius array: `{0, 10, 20, 30, 40}`
- Convert each: F = C × 9/5 + 32
- Store results in new array and print both

**Expected Output**:
```
Celsius: 0 10 20 30 40
Fahrenheit: 32 50 68 86 104
```

**Hint**: Use formula `fahrenheit[i] = celsius[i] * 9/5 + 32`.

---

### **Exercise 12: Grade Letters**
**Task**: Create an array with numeric scores and show letter grades.

**Requirements**:
- Scores: `{95, 87, 76, 69, 84}`
- Convert to letters: A(90+), B(80-89), C(70-79), D(60-69), F(<60)
- Print score and corresponding letter

**Expected Output**:
```
95: A
87: B
76: C
69: D
84: B
```

**Hint**: Use if-else statements to determine letter grade for each score.

---

### **Exercise 13: Double All Values**
**Task**: Create an array and double each element.

**Requirements**:
- Original: `{3, 7, 12, 8, 15}`
- Multiply each element by 2
- Print original and doubled arrays

**Expected Output**:
```
Original: 3 7 12 8 15
Doubled: 6 14 24 16 30
```

**Hint**: Use `array[i] = array[i] * 2` or `array[i] *= 2`.

---

### **Exercise 14: Positive Numbers Only**
**Task**: Create an array with positive and negative numbers, count only positive ones.

**Requirements**:
- Array: `{-5, 10, -3, 8, 0, 15, -2}`
- Count how many numbers are greater than 0
- Print the count

**Expected Output**:
```
Positive numbers: 3
```

**Hint**: Use `if(array[i] > 0)` to check for positive numbers.

---

### **Exercise 15: Array Comparison**
**Task**: Create two arrays and check if they are identical.

**Requirements**:
- Array1: `{1, 2, 3, 4, 5}`
- Array2: `{1, 2, 3, 4, 5}`
- Compare element by element
- Print if arrays are identical or different

**Expected Output**:
```
Arrays are identical!
```

**Hint**: Use loop to compare `array1[i] == array2[i]` for all elements.

---

### **Exercise 16: Shopping Cart**
**Task**: Create an array with item prices and calculate total cost.

**Requirements**:
- Prices: `{12.99, 8.50, 15.75, 22.00, 6.25}`
- Calculate total cost
- Print individual prices and total

**Expected Output**:
```
Item prices: $12.99 $8.50 $15.75 $22.00 $6.25
Total cost: $65.49
```

**Hint**: Use `double` for decimal prices and sum all elements.

---

### **Exercise 17: Name List**
**Task**: Create an array with friend names and print with numbering.

**Requirements**:
- Names: `{"Alice", "Bob", "Carol", "David"}`
- Print each name with a number (1, 2, 3, ...)
- Use loop for display

**Expected Output**:
```
My friends:
1. Alice
2. Bob
3. Carol
4. David
```

**Hint**: Print `(i+1)` for numbering since array index starts at 0.

---

### **Exercise 18: Replace Elements**
**Task**: Create an array and replace all occurrences of a specific value.

**Requirements**:
- Array: `{5, 10, 5, 20, 5}`
- Replace all 5's with 99
- Print original and modified arrays

**Expected Output**:
```
Original: 5 10 5 20 5
Modified: 99 10 99 20 99
```

**Hint**: Use `if(array[i] == 5) array[i] = 99;` in a loop.

---

### **Exercise 19: Array Statistics**
**Task**: Create an array and calculate min, max, and average.

**Requirements**:
- Array: `{45, 23, 67, 12, 89, 34}`
- Find minimum value
- Find maximum value
- Calculate average

**Expected Output**:
```
Min: 12
Max: 89
Average: 45.0
```

**Hint**: Track min/max while looping through array, sum all for average.

---

### **Exercise 20: Pattern Matching**
**Task**: Create an array and count how many elements match a pattern.

**Requirements**:
- Array: `{12, 23, 34, 45, 56, 67}`
- Count numbers that end with digit 3 (23)
- Print the count

**Expected Output**:
```
Numbers ending with 3: 1
```

**Hint**: Use `array[i] % 10 == 3` to check if last digit is 3.

---

## 🟡 **Part 4: Advanced Array Exercises (21-40)**

### **Exercise 21: User Input Array**
**Task**: Ask user to enter 5 numbers into an array, then display them.

**Requirements**:
- Create empty array of size 5
- Use loop to get input from user
- Display all entered numbers

**Expected Output**:
```
Enter 5 numbers:
Number 1: 10
Number 2: 20
Number 3: 30
Number 4: 40
Number 5: 50
Your numbers: 10 20 30 40 50
```

**Hint**: Use `cin >> array[i]` inside a for loop.

---

### **Exercise 22: Bubble Sort (Simple)**
**Task**: Create an array and sort it from smallest to largest.

**Requirements**:
- Array: `{64, 34, 25, 12, 22, 11}`
- Sort in ascending order
- Print original and sorted arrays

**Expected Output**:
```
Original: 64 34 25 12 22 11
Sorted: 11 12 22 25 34 64
```

**Hint**: Use nested loops to compare adjacent elements and swap if needed.

---

### **Exercise 23: Array Rotation**
**Task**: Create an array and rotate elements to the right by 1 position.

**Requirements**:
- Array: `{1, 2, 3, 4, 5}`
- Rotate right: last element becomes first
- Print original and rotated arrays

**Expected Output**:
```
Original: 1 2 3 4 5
Rotated: 5 1 2 3 4
```

**Hint**: Store last element, shift all elements right, put stored element at start.

---

### **Exercise 24: Remove Duplicates**
**Task**: Create an array with duplicate values and remove them.

**Requirements**:
- Array: `{1, 2, 2, 3, 4, 4, 5}`
- Keep only unique values
- Print original and cleaned arrays

**Expected Output**:
```
Original: 1 2 2 3 4 4 5
Unique: 1 2 3 4 5
```

**Hint**: For each element, check if it appears earlier in the array.

---

### **Exercise 25: Matrix Addition (2D Array)**
**Task**: Create two 2x2 matrices and add them together.

**Requirements**:
- Matrix1: `{{1,2}, {3,4}}`
- Matrix2: `{{5,6}, {7,8}}`
- Add corresponding elements
- Print result matrix

**Expected Output**:
```
Matrix 1:  Matrix 2:  Result:
1  2       5  6       6  8
3  4       7  8       10 12
```

**Hint**: Use nested loops and `result[i][j] = matrix1[i][j] + matrix2[i][j]`.

---

### **Exercise 26: Frequency Counter**
**Task**: Create an array and count how many times each number appears.

**Requirements**:
- Array: `{1, 2, 1, 3, 2, 1, 4}`
- Count frequency of each unique number
- Display number and its count

**Expected Output**:
```
Number frequencies:
1 appears 3 times
2 appears 2 times
3 appears 1 time
4 appears 1 time
```

**Hint**: For each unique number, count how many times it appears in array.

---

### **Exercise 27: Array Intersection**
**Task**: Find common elements between two arrays.

**Requirements**:
- Array1: `{1, 2, 3, 4, 5}`
- Array2: `{3, 4, 5, 6, 7}`
- Find numbers that exist in both arrays
- Print common elements

**Expected Output**:
```
Common elements: 3 4 5
```

**Hint**: For each element in array1, check if it exists in array2.

---

### **Exercise 28: Pascal's Triangle**
**Task**: Generate Pascal's triangle using arrays (first 5 rows).

**Requirements**:
- Each row has one more element than previous
- Each element is sum of two elements above it
- First and last elements of each row are 1

**Expected Output**:
```
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
```

**Hint**: Use 2D array, first/last elements = 1, middle = sum of two above.

---

### **Exercise 29: Array Permutation Check**
**Task**: Check if one array is a permutation (rearrangement) of another.

**Requirements**:
- Array1: `{1, 2, 3, 4, 5}`
- Array2: `{5, 3, 1, 4, 2}`
- Check if they contain same elements (different order)
- Print if they are permutations

**Expected Output**:
```
Arrays are permutations of each other!
```

**Hint**: Sort both arrays and compare, or count frequency of each element.

---

### **Exercise 30: Sliding Window Maximum**
**Task**: Find maximum element in every window of size 3.

**Requirements**:
- Array: `{1, 3, 2, 5, 8, 7, 6, 4}`
- Windows of size 3: [1,3,2], [3,2,5], [2,5,8], etc.
- Find maximum in each window

**Expected Output**:
```
Window maximums: 3 5 8 8 8 7
```

**Hint**: Use nested loop - outer for window position, inner to find max in window.

---

### **Exercise 31: Array Merge and Sort**
**Task**: Merge two sorted arrays into one sorted array.

**Requirements**:
- Array1: `{1, 3, 5, 7}`
- Array2: `{2, 4, 6, 8}`
- Merge while maintaining sorted order
- Don't sort after merging

**Expected Output**:
```
Merged array: 1 2 3 4 5 6 7 8
```

**Hint**: Use two pointers, compare elements and take smaller one each time.

---

### **Exercise 32: Longest Increasing Sequence**
**Task**: Find the length of longest increasing subsequence in array.

**Requirements**:
- Array: `{10, 22, 9, 33, 21, 50, 41, 60}`
- Find longest sequence where each element is larger than previous
- Print the length

**Expected Output**:
```
Longest increasing sequence length: 5
(Sequence: 10, 22, 33, 50, 60)
```

**Hint**: Use dynamic programming or track length while iterating.

---

### **Exercise 33: Array Spiral Print**
**Task**: Print a 2D array in spiral order (clockwise from outside to inside).

**Requirements**:
- 3x3 Matrix: `{{1,2,3}, {4,5,6}, {7,8,9}}`
- Print: right → down → left → up → repeat
- Continue until all elements printed

**Expected Output**:
```
Spiral order: 1 2 3 6 9 8 7 4 5
```

**Hint**: Use four boundaries (top, right, bottom, left) and adjust after each direction.

---

### **Exercise 34: Array Peak Finding**
**Task**: Find all peak elements in an array (element larger than its neighbors).

**Requirements**:
- Array: `{1, 3, 20, 4, 1, 0}`
- Peak = element larger than both neighbors
- First/last elements compare with one neighbor only

**Expected Output**:
```
Peak elements: 20 at index 2
```

**Hint**: Check `array[i] > array[i-1] && array[i] > array[i+1]` for middle elements.

---

### **Exercise 35: Array Subset Sum**
**Task**: Check if there's a subset of array that sums to target value.

**Requirements**:
- Array: `{3, 34, 4, 12, 5, 2}`
- Target sum: 9
- Find if any combination of elements equals target
- Print if possible and show one solution

**Expected Output**:
```
Subset with sum 9: 4 + 5 = 9
```

**Hint**: Use recursive approach or dynamic programming to try all combinations.

---

### **Exercise 36: Array Median Finding**
**Task**: Find the median (middle value) of an unsorted array.

**Requirements**:
- Array: `{7, 2, 10, 4, 1, 8, 5}`
- Don't modify original array
- If even length, return average of two middle elements

**Expected Output**:
```
Array: 7 2 10 4 1 8 5
Sorted: 1 2 4 5 7 8 10
Median: 5
```

**Hint**: Copy array, sort the copy, find middle element(s).

---

### **Exercise 37: Array Anagram Groups**
**Task**: Group strings that are anagrams of each other.

**Requirements**:
- String array: `{"eat", "tea", "tan", "ate", "nat", "bat"}`
- Group words that use same letters
- Print each group

**Expected Output**:
```
Anagram groups:
Group 1: eat tea ate
Group 2: tan nat
Group 3: bat
```

**Hint**: Sort characters in each string, strings with same sorted form are anagrams.

---

### **Exercise 38: Array Water Trapping**
**Task**: Calculate how much water can be trapped between array elements (heights).

**Requirements**:
- Heights: `{0,1,0,2,1,0,1,3,2,1,2,1}`
- Water trapped = min(max_left, max_right) - current_height
- Print total water units

**Expected Output**:
```
Heights: 0 1 0 2 1 0 1 3 2 1 2 1
Water trapped: 6 units
```

**Hint**: For each position, find maximum height to left and right, calculate trapped water.

---

### **Exercise 39: Array Dutch Flag Problem**
**Task**: Sort array containing only 0s, 1s, and 2s in single pass.

**Requirements**:
- Array: `{2, 0, 2, 1, 1, 0}`
- Sort without using sorting algorithm
- Group all 0s, then 1s, then 2s

**Expected Output**:
```
Original: 2 0 2 1 1 0
Sorted: 0 0 1 1 2 2
```

**Hint**: Use three pointers for 0s, 1s, and 2s boundaries, swap elements as needed.

---

### **Exercise 40: Array Stock Profit**
**Task**: Find maximum profit from buying and selling stock (buy before sell).

**Requirements**:
- Stock prices: `{7, 1, 5, 3, 6, 4}`
- Can buy once and sell once
- Find maximum profit possible
- Print buy/sell days and profit

**Expected Output**:
```
Stock prices: 7 1 5 3 6 4
Best strategy: Buy on day 2 (price 1), sell on day 5 (price 6)
Maximum profit: 5
```

**Hint**: Track minimum price seen so far, calculate profit at each day, keep maximum.

---

## 🎯 **How to Use This Guide**

### **🟢 Beginner Path (1-20):**
- Start with Exercise 1 (basic array creation)
- Focus on array basics: creation, access, modification
- Practice loops with arrays
- Master basic array operations

### **🟡 Advanced Path (21-40):**
- Learn user input with arrays
- Practice sorting and searching
- Work with 2D arrays (matrices)
- Solve complex algorithmic problems

### **📝 Quick Templates:**

**Basic Array Template:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    
    // Your code here
    
    return 0;
}
```

**Array with User Input:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int array[size];
    
    // Get input
    for(int i = 0; i < size; i++) {
        cout << "Enter number " << (i+1) << ": ";
        cin >> array[i];
    }
    
    // Process array here
    
    return 0;
}
```

**2D Array Template:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };
    
    // Your code here
    
    return 0;
}
```

### **🆘 Getting Help:**
- "Help me with Exercise 15" → I'll give hints
- "Show solution for Exercise 23" → I'll explain step by step
- "I don't understand 2D arrays" → I'll explain simply
- "Exercise 35 is too hard" → I'll break it into smaller steps

**Pick any exercise number (1-40) and let's start coding!** 🚀

**Remember:**
- Arrays are zero-indexed (first element is [0])
- Always check array bounds to avoid errors
- Practice with loops - they're essential for arrays
- Start simple and gradually work up to complex problems

**Which exercise interests you most?** 💪