# Level 2: Making Decisions 🟢

**Week 2-3 | Beginner Level**

Welcome to the world of **Control Flow**! This is where your programs become smart and can make decisions. You'll learn to create programs that respond differently based on different situations.

## 📚 What You'll Learn

### 1. **If Statements (Week 2)**
- Basic `if`, `else`, `else if` statements
- Comparison operators for making decisions
- Logical operators for combining conditions
- Nested if statements for complex decisions
- Switch statements for multiple choices

### 2. **Basic Loops (Week 3)**
- `for` loops for counting and repetition
- `while` loops for condition-based repetition
- `do-while` loops for guaranteed execution
- Nested loops for complex patterns
- Loop control with `break` and `continue`

---

## 🎯 Learning Objectives

By the end of Level 2, you should be able to:
- ✅ Write programs that make decisions based on user input
- ✅ Use comparison operators to compare values
- ✅ Combine multiple conditions with logical operators
- ✅ Create nested if statements for complex logic
- ✅ Choose between if-else and switch statements
- ✅ Write for loops to repeat actions a specific number of times
- ✅ Use while loops for condition-based repetition
- ✅ Control loop execution with break and continue
- ✅ Create nested loops for patterns and tables

---

## 📁 Project Structure

```
Level2_Making_Decisions/
├── README.md                     # This file
├── Week2_If_Statements/
│   ├── 01_basic_if.cpp
│   ├── 02_comparison_operators.cpp
│   ├── 03_logical_operators.cpp
│   ├── 04_nested_if.cpp
│   ├── 05_switch_statements.cpp
│   └── exercises/
│       ├── exercise01_age_check.cpp
│       ├── exercise02_grade_system.cpp
│       ├── exercise03_password_check.cpp
│       ├── exercise04_calculator.cpp
│       ├── exercise05_day_of_week.cpp
│       ├── exercise06_weather_advisor.cpp
│       ├── exercise07_login_system.cpp
│       ├── exercise08_number_game.cpp
│       ├── exercise09_menu_system.cpp
│       └── exercise10_complex_conditions.cpp
├── Week3_Basic_Loops/
│   ├── 01_for_loops.cpp
│   ├── 02_while_loops.cpp
│   ├── 03_do_while_loops.cpp
│   ├── 04_nested_loops.cpp
│   ├── 05_loop_control.cpp
│   └── exercises/
│       ├── exercise11_counting.cpp
│       ├── exercise12_multiplication_table.cpp
│       ├── exercise13_sum_calculator.cpp
│       ├── exercise14_pattern_printing.cpp
│       ├── exercise15_number_guessing.cpp
│       ├── exercise16_menu_loop.cpp
│       ├── exercise17_factorial.cpp
│       ├── exercise18_prime_numbers.cpp
│       ├── exercise19_diamond_pattern.cpp
│       └── exercise20_advanced_loops.cpp
└── Mini_Projects/
    ├── simple_calculator.cpp
    ├── number_guessing_game.cpp
    ├── grade_calculator.cpp
    └── pattern_generator.cpp
```

---

## 🔧 CLion Setup

### Running Code in CLion:
1. **Create New File**: Right-click project → New → C++ Source File
2. **Run**: Click ▶️ button or `Ctrl+R` (Mac: `Cmd+R`)
3. **Debug**: Click 🐛 button or `Ctrl+D` (Mac: `Cmd+D`)

### Mac Terminal Commands:
```bash
# Compile and run
g++ -std=c++17 filename.cpp -o program && ./program

# For debugging
g++ -std=c++17 -g filename.cpp -o program && ./program
```

---

# 📖 Week 2: If Statements

## 🎯 Core Concepts

### 1. Basic If Statements
```cpp
if (condition) {
    // Code runs if condition is true
}

if (condition) {
    // Code if true
} else {
    // Code if false
}

if (condition1) {
    // Code if condition1 is true
} else if (condition2) {
    // Code if condition2 is true
} else {
    // Code if all conditions are false
}
```

### 2. Comparison Operators
| Operator | Meaning | Example |
|----------|---------|---------|
| `==` | Equal to | `age == 18` |
| `!=` | Not equal to | `name != "admin"` |
| `<` | Less than | `score < 60` |
| `>` | Greater than | `temperature > 100` |
| `<=` | Less than or equal | `grade <= 100` |
| `>=` | Greater than or equal | `age >= 21` |

### 3. Logical Operators
| Operator | Meaning | Example |
|----------|---------|---------|
| `&&` | AND (both must be true) | `age >= 18 && age <= 65` |
| `\|\|` | OR (at least one must be true) | `grade == 'A' \|\| grade == 'B'` |
| `!` | NOT (reverses true/false) | `!isLoggedIn` |

### 4. Switch Statements
```cpp
switch (variable) {
    case value1:
        // Code for value1
        break;
    case value2:
        // Code for value2
        break;
    default:
        // Code if no cases match
        break;
}
```

---

## 🏋️ Week 2 Exercises: If Statements

### Exercise 1: Age Check
**Task**: Create a program that checks if someone can vote (age 18+).

**Requirements**:
- Ask user for their age
- If age >= 18: "You can vote!"
- If age < 18: "You cannot vote yet."

**Expected Output**:
```
Enter your age: 20
You can vote!
```

**Hint**: Use `if (age >= 18)` for the condition.

---

### Exercise 2: Grade System
**Task**: Convert a numeric grade to letter grade.

**Requirements**:
- Ask for grade (0-100)
- A: 90-100, B: 80-89, C: 70-79, D: 60-69, F: below 60
- Use if-else if-else chain

**Expected Output**:
```
Enter your grade: 85
Your letter grade is: B
```

**Hint**: Start with highest grade first: `if (grade >= 90)`

---

### Exercise 3: Password Check
**Task**: Create a simple password checker.

**Requirements**:
- Ask user for password
- Correct password is "secret123"
- Show "Access granted!" or "Access denied!"

**Expected Output**:
```
Enter password: secret123
Access granted!
```

**Hint**: Use `password == "secret123"` for string comparison.

---

### Exercise 4: Simple Calculator
**Task**: Create a calculator with +, -, *, / operations.

**Requirements**:
- Ask for two numbers and an operator
- Use if-else if to check operator
- Perform calculation and show result
- Handle division by zero

**Expected Output**:
```
Enter first number: 10
Enter operator (+, -, *, /): *
Enter second number: 5
Result: 10 * 5 = 50
```

**Hint**: Use `operator == '+'` to check each operation.

---

### Exercise 5: Day of Week
**Task**: Use switch statement to display day name from number.

**Requirements**:
- Ask for number 1-7
- 1=Monday, 2=Tuesday, etc.
- Use switch statement
- Handle invalid numbers

**Expected Output**:
```
Enter day number (1-7): 3
Day 3 is: Wednesday
```

**Hint**: Use `switch (dayNumber)` and `case 1:`, `case 2:`, etc.

---

### Exercise 6: Weather Advisor
**Task**: Give clothing advice based on temperature.

**Requirements**:
- Ask for temperature in Fahrenheit
- Below 32: "Wear a heavy coat!"
- 32-60: "Wear a jacket!"
- 61-80: "Wear light clothes!"
- Above 80: "Wear shorts and t-shirt!"

**Expected Output**:
```
Enter temperature: 75
Weather advice: Wear light clothes!
```

**Hint**: Use nested if-else: `if (temp < 32)` then `else if (temp <= 60)`, etc.

---

### Exercise 7: Login System
**Task**: Create a login system with username and password.

**Requirements**:
- Ask for username and password
- Valid login: username="admin", password="pass123"
- Use logical AND operator
- Show appropriate messages

**Expected Output**:
```
Username: admin
Password: pass123
Login successful! Welcome admin.
```

**Hint**: Use `if (username == "admin" && password == "pass123")`

---

### Exercise 8: Number Guessing Game (Simple)
**Task**: Create a simple number guessing game.

**Requirements**:
- Secret number is 42
- Ask user to guess
- Tell them if too high, too low, or correct
- Use if-else if-else

**Expected Output**:
```
Guess the number: 50
Too high! The number was 42.
```

**Hint**: Use `if (guess == 42)`, `else if (guess > 42)`, `else`

---

### Exercise 9: Menu System
**Task**: Create a simple restaurant menu system.

**Requirements**:
- Show menu: 1=Pizza ($12), 2=Burger ($8), 3=Salad ($6)
- Ask for choice
- Display item and price
- Use switch statement

**Expected Output**:
```
MENU:
1. Pizza - $12
2. Burger - $8
3. Salad - $6
Enter your choice: 2
You ordered: Burger - $8
```

**Hint**: Use `switch (choice)` with cases 1, 2, 3, and default.

---

### Exercise 10: Complex Conditions
**Task**: Check if someone qualifies for a loan.

**Requirements**:
- Ask for age, income, and credit score
- Qualifies if: age >= 18 AND income >= 30000 AND credit >= 650
- Use logical operators
- Show detailed reason if denied

**Expected Output**:
```
Enter age: 25
Enter income: 35000
Enter credit score: 700
Congratulations! You qualify for the loan.
```

**Hint**: Use `if (age >= 18 && income >= 30000 && credit >= 650)`

---

# 📖 Week 3: Basic Loops

## 🎯 Core Concepts

### 1. For Loops (Counting)
```cpp
for (initialization; condition; update) {
    // Code to repeat
}

// Example: Count from 1 to 10
for (int i = 1; i <= 10; i++) {
    cout << i << " ";
}
```

### 2. While Loops (Condition-based)
```cpp
while (condition) {
    // Code to repeat
    // Don't forget to update condition!
}

// Example: Count while less than 10
int i = 1;
while (i <= 10) {
    cout << i << " ";
    i++;  // Important: update counter!
}
```

### 3. Do-While Loops (At least once)
```cpp
do {
    // Code runs at least once
} while (condition);

// Example: Menu that shows at least once
int choice;
do {
    cout << "Enter choice (0 to quit): ";
    cin >> choice;
} while (choice != 0);
```

### 4. Loop Control
- `break`: Exit the loop immediately
- `continue`: Skip rest of current iteration, go to next

```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 5) continue;  // Skip 5
    if (i == 8) break;     // Stop at 8
    cout << i << " ";      // Prints: 1 2 3 4 6 7
}
```

---

## 🏋️ Week 3 Exercises: Basic Loops

### Exercise 11: Simple Counting
**Task**: Use for loop to count from 1 to 20.

**Requirements**:
- Print numbers 1 to 20, each on a new line
- Use for loop
- Add a message at the end

**Expected Output**:
```
1
2
3
...
20
Counting complete!
```

**Hint**: Use `for (int i = 1; i <= 20; i++)`

---

### Exercise 12: Multiplication Table
**Task**: Create a multiplication table for any number.

**Requirements**:
- Ask user for a number
- Show multiplication table 1-10 for that number
- Format: "5 x 3 = 15"

**Expected Output**:
```
Enter a number: 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 50
```

**Hint**: Use `for (int i = 1; i <= 10; i++)` and `number * i`

---

### Exercise 13: Sum Calculator
**Task**: Calculate sum of numbers from 1 to N.

**Requirements**:
- Ask user for N
- Calculate 1+2+3+...+N using loop
- Display the sum

**Expected Output**:
```
Enter N: 10
Sum of numbers from 1 to 10 is: 55
```

**Hint**: Use `sum += i` inside the loop to add each number.

---

### Exercise 14: Pattern Printing
**Task**: Print a triangle pattern with stars.

**Requirements**:
- Ask for number of rows
- Each row has more stars than the previous
- Row 1: *, Row 2: **, Row 3: ***, etc.

**Expected Output**:
```
Enter rows: 4
*
**
***
****
```

**Hint**: Use nested loops - outer for rows, inner for stars per row.

---

### Exercise 15: Number Guessing Game (Advanced)
**Task**: Create a number guessing game with multiple attempts.

**Requirements**:
- Random number between 1-100 (use 42 for now)
- Give user 5 attempts
- Use while loop
- Tell if guess is too high or low

**Expected Output**:
```
Guess the number (1-100): 50
Too high! Try again.
Guess the number (1-100): 30
Too low! Try again.
Attempts remaining: 3
```

**Hint**: Use counter for attempts and while loop until correct or out of attempts.

---

### Exercise 16: Menu Loop
**Task**: Create a menu that keeps running until user quits.

**Requirements**:
- Show menu: 1=Say Hello, 2=Calculate Square, 3=Quit
- Use do-while loop
- Keep showing menu until user chooses 3

**Expected Output**:
```
MENU:
1. Say Hello
2. Calculate Square  
3. Quit
Choice: 1
Hello there!

MENU:
1. Say Hello
2. Calculate Square
3. Quit
Choice: 3
Goodbye!
```

**Hint**: Use `do { /* menu */ } while (choice != 3);`

---

### Exercise 17: Factorial Calculator
**Task**: Calculate factorial of a number using loop.

**Requirements**:
- Ask for a number
- Calculate factorial: 5! = 5×4×3×2×1 = 120
- Use for loop to multiply

**Expected Output**:
```
Enter a number: 5
5! = 120
```

**Hint**: Use `factorial *= i` inside the loop, starting factorial = 1.

---

### Exercise 18: Prime Number Checker
**Task**: Check if a number is prime using loops.

**Requirements**:
- Ask for a number
- Check if it's only divisible by 1 and itself
- Use for loop to test divisibility

**Expected Output**:
```
Enter a number: 17
17 is a prime number!
```

**Hint**: Loop from 2 to number-1, if any divides evenly, it's not prime.

---

### Exercise 19: Diamond Pattern
**Task**: Create a diamond pattern with stars.

**Requirements**:
- Ask for size (odd number)
- Create diamond shape using nested loops
- First half increases, second half decreases

**Expected Output** (size 5):
```
  *
 ***
*****
 ***
  *
```

**Hint**: Use nested loops - outer for rows, inner for spaces and stars.

---

### Exercise 20: Advanced Loops with Break/Continue
**Task**: Print numbers 1-20, skip multiples of 3, stop at 15.

**Requirements**:
- Loop from 1 to 20
- Use `continue` to skip multiples of 3
- Use `break` to stop when reaching 15

**Expected Output**:
```
1 2 4 5 7 8 10 11 13 14
Stopped at 15!
```

**Hint**: Use `if (i % 3 == 0) continue;` and `if (i == 15) break;`

---

## 🚀 Mini Projects

### Project 1: Simple Calculator (Week 2-3)
**Goal**: Create a calculator that keeps running until user quits
**Features**:
- Menu-driven interface
- Basic operations (+, -, *, /)
- Input validation
- Loop until user chooses quit

### Project 2: Number Guessing Game (Week 3)
**Goal**: Complete guessing game with scoring
**Features**:
- Random number generation (simulate with fixed number)
- Limited attempts
- Scoring system
- Play again option

### Project 3: Grade Calculator (Week 2-3)
**Goal**: Calculate final grade from multiple assignments
**Features**:
- Input multiple grades
- Calculate average
- Convert to letter grade
- Display statistics

### Project 4: Pattern Generator (Week 3)
**Goal**: Generate various patterns based on user choice
**Features**:
- Multiple pattern options
- User-specified size
- Menu system
- Input validation

---

## ⚠️ Common Beginner Mistakes

### 1. **Infinite Loops**
```cpp
// Wrong - infinite loop!
int i = 1;
while (i <= 10) {
    cout << i << endl;
    // Forgot i++; - loop never ends!
}

// Correct
int i = 1;
while (i <= 10) {
    cout << i << endl;
    i++;  // Don't forget to update!
}
```

### 2. **Wrong Comparison Operators**
```cpp
// Wrong - assignment instead of comparison
if (age = 18) {  // This assigns 18 to age!
    cout << "You can vote!";
}

// Correct
if (age == 18) {  // This compares age with 18
    cout << "You can vote!";
}
```

### 3. **Missing Break in Switch**
```cpp
// Wrong - will fall through to next case
switch (choice) {
    case 1:
        cout << "One";
        // Missing break! Will also execute case 2
    case 2:
        cout << "Two";
        break;
}

// Correct
switch (choice) {
    case 1:
        cout << "One";
        break;  // Don't forget break!
    case 2:
        cout << "Two";
        break;
}
```

### 4. **Off-by-One Errors**
```cpp
// Wrong - misses last iteration
for (int i = 1; i < 10; i++) {  // Only goes to 9!
    cout << i << " ";
}

// Correct - includes 10
for (int i = 1; i <= 10; i++) {  // Goes to 10
    cout << i << " ";
}
```

---

## 🎯 Success Checklist

Before moving to Level 3, make sure you can:

### If Statements:
- [ ] Write basic if-else statements
- [ ] Use all comparison operators correctly
- [ ] Combine conditions with logical operators (&&, ||, !)
- [ ] Create nested if statements
- [ ] Use switch statements for multiple choices
- [ ] Handle invalid input appropriately

### Loops:
- [ ] Write for loops for counting operations
- [ ] Use while loops for condition-based repetition
- [ ] Understand when to use do-while loops
- [ ] Create nested loops for patterns
- [ ] Use break and continue appropriately
- [ ] Avoid infinite loops

### Problem Solving:
- [ ] Choose the right loop type for the problem
- [ ] Combine loops with if statements
- [ ] Create menu-driven programs
- [ ] Handle user input validation
- [ ] Debug loop and condition errors

---

## 📝 Quick Reference

### If Statement Syntax:
```cpp
if (condition) {
    // code
} else if (condition2) {
    // code
} else {
    // code
}
```

### Loop Syntax:
```cpp
// For loop
for (int i = start; i <= end; i++) {
    // code
}

// While loop
while (condition) {
    // code
    // update condition!
}

// Do-while loop
do {
    // code
} while (condition);
```

### Comparison Operators:
`==` `!=` `<` `>` `<=` `>=`

### Logical Operators:
`&&` (AND) `||` (OR) `!` (NOT)

---

## 🔄 Git Commands for This Level

```bash
# Start working on Level 2
git checkout -b level2-making-decisions

# After each lesson
git add .
git commit -m "Complete Week 2: If Statements"

# Push your progress
git push origin level2-making-decisions

# When level is complete
git checkout main
git merge level2-making-decisions
git push origin main
```

---

## ➡️ What's Next?

After mastering Level 2, you'll be ready for **Level 3: Code Organization**:
- Functions and parameters
- Return values and scope
- Function overloading
- Arrays and basic data structures

---

## 🆘 Need Help?

If you get stuck:
1. **Check your conditions** - are you using == instead of =?
2. **Watch for infinite loops** - make sure loop variables are updated
3. **Test with simple cases** - try with small numbers first
4. **Use cout statements** - print variables to see what's happening
5. **Ask for help** - explain what you expected vs what happened

Remember: Making decisions and repetition are fundamental programming concepts. Master these and you'll be able to solve much more complex problems!

---

**Good luck with your decision-making journey! 🚀**