# 🎯 **40 Function Exercises - Complete Learning Journey**

---

## 🟢 **Part 1: Super Easy Functions (Exercises 1-20)**

### **Exercise 1: Say Hello**
**Task**: Create a function called `sayHello()` that prints "Hello World!" to the screen.
**
return_type function_name() {
// code here
} **
**Requirements**:
- Function name: `sayHello()`
- No parameters needed
- No return value (use `void`)
- Call it once in main()

**Expected Output**:
```
Hello World!
```

**Hint**: Use `void sayHello()` and `cout` inside the function.

---

### **Exercise 2: Print Your Name**
**Task**: Create a function called `printMyName()` that prints your name.

**Requirements**:
- Replace "YourName" with your actual name
- Use `void` return type
- Call it in main()

**Expected Output**:
```
My name is Alex
```

**Hint**: Use `cout << "My name is YourActualName" << endl;`

---

### **Exercise 3: Star Pattern**
**Task**: Create a function called `printStars()` that prints exactly 5 stars in a row.

**Requirements**:
- Print: `*****`
- Use `void` return type
- Call it 3 times in main() to get 3 lines

**Expected Output**:
```
*****
*****
*****
```

**Hint**: Use `cout << "*****" << endl;` inside your function.

---

### **Exercise 4: Line Separator**
**Task**: Create a function called `printLine()` that prints 15 dashes as a separator.

**Requirements**:
- Print exactly 15 dashes: `---------------`
- Use for creating visual separators in programs

**Expected Output**:
```
---------------
```

**Hint**: Count your dashes to make sure you have exactly 15.

---

### **Exercise 5: Welcome Message**
**Task**: Create a function called `printWelcome()` that prints a welcome message.

**Requirements**:
- Print: "Welcome to C++ Programming!"
- Make it look friendly and inviting

**Expected Output**:
```
Welcome to C++ Programming!
```

**Hint**: Use enthusiastic language to make learning fun!

---

### **Exercise 6: Lucky Number**
**Task**: Create a function called `getNumber()` that returns the number 42.

**Requirements**:
- Function returns an `int`
- Store the result in a variable in main()
- Print: "The number is: 42"

**Expected Output**:
```
The number is: 42
```

**Hint**: Use `int getNumber()` and `return 42;` inside the function.

---

### **Exercise 7: Age Function**
**Task**: Create a function called `getMyAge()` that returns your age.

**Requirements**:
- Replace with your actual age (or any number)
- Return an integer
- Print the result with a message

**Expected Output**:
```
I am 20 years old
```

**Hint**: Use `return` statement with your age number.

---

### **Exercise 8: Pi Value**
**Task**: Create a function called `getPi()` that returns 3.14.

**Requirements**:
- Return a decimal number (use `double`)
- Print: "Pi is approximately: 3.14"

**Expected Output**:
```
Pi is approximately: 3.14
```

**Hint**: Use `double getPi()` return type for decimal numbers.

---

### **Exercise 9: First Initial**
**Task**: Create a function called `getFirstLetter()` that returns the first letter of your name.

**Requirements**:
- Return a single character (use `char`)
- Print: "My first initial is: A"

**Expected Output**:
```
My first initial is: A
```

**Hint**: Use `char getFirstLetter()` and `return 'A';` (with single quotes).

---

### **Exercise 10: Favorite Color**
**Task**: Create a function called `getFavoriteColor()` that returns your favorite color.

**Requirements**:
- Return a string
- Print: "My favorite color is blue"

**Expected Output**:
```
My favorite color is blue
```

**Hint**: Use `string getFavoriteColor()` and include `#include <string>`.

---

### **Exercise 11: Simple Addition**
**Task**: Create a function called `addTwoNumbers()` that returns 10 + 5.

**Requirements**:
- Calculate 10 + 5 inside the function
- Return the result
- Print: "10 + 5 = 15"

**Expected Output**:
```
10 + 5 = 15
```

**Hint**: You can do math in the return statement: `return 10 + 5;`

---

### **Exercise 12: Simple Multiplication**
**Task**: Create a function called `multiplyTwoNumbers()` that returns 6 × 4.

**Requirements**:
- Calculate 6 × 4 inside the function
- Use the `*` operator for multiplication
- Print the equation and result

**Expected Output**:
```
6 x 4 = 24
```

**Hint**: Use `return 6 * 4;` inside your function.

---

### **Exercise 13: Double a Number**
**Task**: Create a function called `getDouble()` that returns 7 × 2.

**Requirements**:
- Calculate double of 7 (which is 7 × 2)
- Print: "Double of 7 is: 14"

**Expected Output**:
```
Double of 7 is: 14
```

**Hint**: Doubling means multiplying by 2.

---

### **Exercise 14: Half a Number**
**Task**: Create a function called `getHalf()` that returns 20 ÷ 2.

**Requirements**:
- Calculate half of 20 (which is 20 ÷ 2)
- Print: "Half of 20 is: 10"

**Expected Output**:
```
Half of 20 is: 10
```

**Hint**: Use the `/` operator for division.

---

### **Exercise 15: Remainder Operation**
**Task**: Create a function called `getRemainder()` that returns 17 % 5.

**Requirements**:
- Use the modulo operator `%`
- 17 % 5 = 2 (remainder when 17 is divided by 5)
- Print: "17 mod 5 = 2"

**Expected Output**:
```
17 mod 5 = 2
```

**Hint**: The `%` operator gives you the remainder after division.

---

### **Exercise 16: Program Title**
**Task**: Create two functions to make a nice program title with borders.

**Requirements**:
- `printBorder()` - prints "================="
- `printTitle()` - prints "MY COOL PROGRAM"
- Use both functions to create the layout below

**Expected Output**:
```
=================
MY COOL PROGRAM
=================
```

**Hint**: Call the functions in order: border, title, border.

---

### **Exercise 17: Rectangle Info**
**Task**: Create three functions that return width, height, and area of a rectangle.

**Requirements**:
- `getWidth()` - returns 10
- `getHeight()` - returns 5
- `getArea()` - returns 50 (width × height)
- Print all three values

**Expected Output**:
```
Width: 10, Height: 5, Area: 50
```

**Hint**: Area = width × height, so 10 × 5 = 50.

---

### **Exercise 18: Webpage Layout**
**Task**: Create three functions for a simple webpage layout.

**Requirements**:
- `printHeader()` - prints "--- HEADER ---"
- `printContent()` - prints "This is the main content"
- `printFooter()` - prints "--- FOOTER ---"
- Call all three to create a webpage layout

**Expected Output**:
```
--- HEADER ---
This is the main content
--- FOOTER ---
```

**Hint**: Think of this as the basic structure of a webpage.

---

### **Exercise 19: Full Name**
**Task**: Create two functions that return first and last name, then combine them.

**Requirements**:
- `getFirstName()` - returns your first name
- `getLastName()` - returns your last name
- Combine both to print full name

**Expected Output**:
```
Full name: John Smith
```

**Hint**: You can combine strings with `+` operator or separate cout statements.

---

### **Exercise 20: Sum of Five Numbers**
**Task**: Create five functions that each return a different number, then find their sum.

**Requirements**:
- `getOne()` - returns 1
- `getTwo()` - returns 2
- `getThree()` - returns 3
- `getFour()` - returns 4
- `getFive()` - returns 5
- Add all results together

**Expected Output**:
```
Sum of all numbers: 15
```

**Hint**: Call all five functions and add their return values: 1+2+3+4+5=15.

---

## 🟡 **Part 2: Advanced Functions (Exercises 21-40)**

### **Exercise 21: Personal Greeting**
**Task**: Create a function called `greetPerson(string name)` that takes a name and greets that person.

**Requirements**:
- Function takes one parameter: a string for the name
- Print: "Hello [name]!"
- Test with different names

**Expected Output**:
```
Hello Alice!
Hello Bob!
```

**Hint**: Use `void greetPerson(string name)` and `cout << "Hello " << name << "!" << endl;`

---

### **Exercise 22: Number Display**
**Task**: Create a function called `printNumber(int num)` that takes a number and displays it.

**Requirements**:
- Function takes one integer parameter
- Print: "The number is: [num]"
- Test with different numbers

**Expected Output**:
```
The number is: 25
The number is: 100
```

**Hint**: Use `void printNumber(int num)` and include the parameter in your cout.

---

### **Exercise 23: Addition Function**
**Task**: Create a function called `addNumbers(int a, int b)` that takes two numbers and returns their sum.

**Requirements**:
- Function takes two integer parameters
- Return the sum of a + b
- Test: addNumbers(8, 3) should return 11

**Expected Output**:
```
8 + 3 = 11
5 + 7 = 12
```

**Hint**: Use `int addNumbers(int a, int b)` and `return a + b;`

---

### **Exercise 24: Multiplication Function**
**Task**: Create a function called `multiplyNumbers(int x, int y)` that returns the product of two numbers.

**Requirements**:
- Takes two integer parameters
- Returns x × y
- Test with multiplyNumbers(4, 7)

**Expected Output**:
```
4 x 7 = 28
```

**Hint**: Use the `*` operator: `return x * y;`

---

### **Exercise 25: Full Name Maker**
**Task**: Create a function called `makeFullName(string first, string last)` that combines first and last names.

**Requirements**:
- Takes two string parameters
- Returns combined name with space between
- Test: makeFullName("John", "Doe")

**Expected Output**:
```
John Doe
```

**Hint**: Use `return first + " " + last;` to combine strings with a space.

---

### **Exercise 26: Even or Odd**
**Task**: Create a function called `isEven(int number)` that checks if a number is even.

**Requirements**:
- Takes one integer parameter
- Returns true if even, false if odd
- Use modulo operator `%`

**Expected Output**:
```
6 is even: 1 (true)
7 is even: 0 (false)
```

**Hint**: A number is even if `number % 2 == 0`. Use `bool isEven(int number)`.

---

### **Exercise 27: Find Maximum**
**Task**: Create a function called `getMax(int a, int b)` that returns the larger of two numbers.

**Requirements**:
- Takes two integer parameters
- Returns the bigger number
- Use if statement to compare

**Expected Output**:
```
Max of 15 and 8: 15
Max of 3 and 10: 10
```

**Hint**: Use `if (a > b) return a; else return b;`

---

### **Exercise 28: Grade Calculator**
**Task**: Create a function called `getGrade(int score)` that returns a letter grade.

**Requirements**:
- 90-100: 'A'
- 80-89: 'B'
- 70-79: 'C'
- 60-69: 'D'
- Below 60: 'F'

**Expected Output**:
```
Score 85 gets grade: B
Score 92 gets grade: A
```

**Hint**: Use multiple if-else statements or ranges: `if (score >= 90) return 'A';`

---

### **Exercise 29: Age Validator**
**Task**: Create a function called `isValidAge(int age)` that checks if age is realistic (0-120).

**Requirements**:
- Takes one integer parameter
- Returns true if age is between 0 and 120 (inclusive)
- Returns false otherwise

**Expected Output**:
```
Age 25 is valid: 1 (true)
Age 150 is valid: 0 (false)
```

**Hint**: Use `return (age >= 0 && age <= 120);`

---

### **Exercise 30: Absolute Value**
**Task**: Create a function called `getAbsolute(int number)` that returns the absolute value.

**Requirements**:
- Takes one integer parameter
- Returns positive version of any number
- If positive, return as-is. If negative, make positive.

**Expected Output**:
```
Absolute value of -5: 5
Absolute value of 3: 3
```

**Hint**: Use `if (number < 0) return -number; else return number;`

---

### **Exercise 31: Power Function**
**Task**: Create a function called `power(int base, int exponent)` that calculates base^exponent.

**Requirements**:
- Takes two integer parameters
- Returns base raised to the power of exponent
- Use a loop to multiply base by itself exponent times

**Expected Output**:
```
2^3 = 8
3^4 = 81
```

**Hint**: Use a for loop: `for(int i = 0; i < exponent; i++) result *= base;`

---

### **Exercise 32: Factorial**
**Task**: Create a function called `factorial(int n)` that calculates n! (n factorial).

**Requirements**:
- n! = n × (n-1) × (n-2) × ... × 1
- 5! = 5 × 4 × 3 × 2 × 1 = 120
- Use a loop or recursion

**Expected Output**:
```
5! = 120
4! = 24
```

**Hint**: Use a for loop from n down to 1, multiplying each number.

---

### **Exercise 33: Fibonacci**
**Task**: Create a function called `fibonacci(int n)` that returns the nth Fibonacci number.

**Requirements**:
- Fibonacci sequence: 1, 1, 2, 3, 5, 8, 13, 21...
- Each number is sum of previous two
- fibonacci(7) should return 13

**Expected Output**:
```
7th Fibonacci number: 13
```

**Hint**: Use variables to track the last two numbers, then add them.

---

### **Exercise 34: Prime Checker**
**Task**: Create a function called `isPrime(int number)` that checks if a number is prime.

**Requirements**:
- Prime numbers are only divisible by 1 and themselves
- Return true if prime, false if not
- Test: 17 is prime, 15 is not

**Expected Output**:
```
17 is prime: 1 (true)
15 is prime: 0 (false)
```

**Hint**: Check if any number from 2 to number-1 divides evenly into number.

---

### **Exercise 35: Greatest Common Divisor**
**Task**: Create a function called `gcd(int a, int b)` that finds the greatest common divisor.

**Requirements**:
- GCD is the largest number that divides both a and b
- Use Euclidean algorithm: gcd(a,b) = gcd(b, a%b)
- Continue until one number becomes 0

**Expected Output**:
```
GCD of 12 and 18: 6
```

**Hint**: Use a while loop: `while(b != 0) { temp = b; b = a % b; a = temp; }`

---

### **Exercise 36: Character Counter**
**Task**: Create a function called `countChars(string text)` that counts characters in a string.

**Requirements**:
- Takes a string parameter
- Returns the length of the string
- Test with different words

**Expected Output**:
```
"Hello" has 5 characters
"Programming" has 11 characters
```

**Hint**: Use `text.length()` method or `text.size()`.

---

### **Exercise 37: String Reverser**
**Task**: Create a function called `reverseString(string text)` that returns the string backwards.

**Requirements**:
- Takes a string parameter
- Returns the string in reverse order
- "hello" becomes "olleh"

**Expected Output**:
```
"hello" reversed: "olleh"
"world" reversed: "dlrow"
```

**Hint**: Use a loop to build the string backwards, or iterate from end to beginning.

---

### **Exercise 38: Palindrome Checker**
**Task**: Create a function called `isPalindrome(string text)` that checks if text reads the same forwards and backwards.

**Requirements**:
- Returns true if palindrome, false if not
- "radar", "level", "madam" are palindromes
- Case-sensitive for now (keep it simple)

**Expected Output**:
```
"radar" is palindrome: 1 (true)
"hello" is palindrome: 0 (false)
```

**Hint**: Compare the string with its reverse, or check characters from both ends.

---

### **Exercise 39: Vowel Counter**
**Task**: Create a function called `countVowels(string text)` that counts vowels (a, e, i, o, u).

**Requirements**:
- Takes a string parameter
- Count both uppercase and lowercase vowels
- Return total count

**Expected Output**:
```
"programming" has 3 vowels
"hello world" has 3 vowels
```

**Hint**: Loop through each character and check if it's a vowel using if statements.

---

### **Exercise 40: Caesar Cipher**
**Task**: Create a function called `caesarCipher(string text, int shift)` that shifts each letter by shift positions.

**Requirements**:
- Takes string and shift amount
- Shift each letter: 'a' + 1 = 'b', 'b' + 1 = 'c'
- Wrap around: 'z' + 1 = 'a'
- Keep non-letters unchanged

**Expected Output**:
```
"abc" with shift 1: "bcd"
"xyz" with shift 1: "yza"
```

**Hint**: Convert chars to numbers, add shift, handle wraparound, convert back to chars.

---

## 🎯 **How to Use These Exercises**

### **🟢 Beginner Path (1-20):**
- Do 2-3 exercises per day
- Focus on understanding functions
- Master void vs return types
- Learn to call functions multiple times

### **🟡 Advanced Path (21-40):**
- Learn function parameters
- Practice different return types
- Combine logic with functions
- Master problem-solving with code

### **Getting Help:**
- "Help me with Exercise 25" → I'll give hints
- "Show solution for Exercise 32" → I'll explain step by step
- "I don't understand parameters" → I'll explain simply
- "Exercise 38 is confusing" → I'll break it down

### **Quick Template:**
```cpp
#include <iostream>
#include <string>
using namespace std;

// Your function here

int main() {
    // Test your function here
    return 0;
}
```

**Pick any exercise number (1-40) and tell me! I'll guide you through it step by step!** 🚀
