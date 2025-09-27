# 🎯 40 OOP Exercises - Complete Learning Journey

## 🟢 Part 1: Basic Structures (Exercises 1-15)

### Exercise 1: Simple Point
**Task:** Create a struct called `Point` that stores x and y coordinates.

**Requirements:**
- Struct name: `Point`
- Two members: `int x` and `int y`
- Create one point and set values
- Print the coordinates

**Expected Output:**
```
Point coordinates: (5, 3)
```

**Hint:** Use `struct Point { int x; int y; };` and access with dot operator.

---

### Exercise 2: Student Info
**Task:** Create a struct called `Student` that stores basic student information.

**Requirements:**
- Members: `string name`, `int age`, `double gpa`
- Create one student and set all values
- Print all information nicely

**Expected Output:**
```
Student: John Smith
Age: 20
GPA: 3.75
```

**Hint:** Don't forget `#include <string>` for string type.

---

### Exercise 3: Rectangle Struct
**Task:** Create a struct called `Rectangle` with width and height, then calculate area.

**Requirements:**
- Members: `double width` and `double height`
- Set width = 10.5, height = 7.2
- Calculate and print area (width × height)

**Expected Output:**
```
Rectangle: 10.5 x 7.2
Area: 75.6
```

**Hint:** Calculate area outside the struct: `rect.width * rect.height`

---

### Exercise 4: Book Information
**Task:** Create a struct called `Book` to store book details.

**Requirements:**
- Members: `string title`, `string author`, `int pages`
- Create a book with your favorite book info
- Display all details

**Expected Output:**
```
Title: The C++ Programming Language
Author: Bjarne Stroustrup
Pages: 1368
```

**Hint:** Use meaningful book information to make it interesting!

---

### Exercise 5: Circle Struct
**Task:** Create a struct called `Circle` and calculate its area and circumference.

**Requirements:**
- Member: `double radius`
- Set radius = 5.0
- Calculate area (π × r²) and circumference (2 × π × r)
- Use 3.14159 for π

**Expected Output:**
```
Circle radius: 5
Area: 78.5398
Circumference: 31.4159
```

**Hint:** Area = 3.14159 * radius * radius

---

### Exercise 6: Two Points
**Task:** Create two `Point` structs and calculate the distance between them.

**Requirements:**
- Create Point1(0, 0) and Point2(3, 4)
- Calculate distance using: √((x₂-x₁)² + (y₂-y₁)²)
- For now, just calculate (x₂-x₁)² + (y₂-y₁)² (skip square root)

**Expected Output:**
```
Point 1: (0, 0)
Point 2: (3, 4)
Distance squared: 25
```

**Hint:** Distance squared = (3-0)² + (4-0)² = 9 + 16 = 25

---

### Exercise 7: Employee Record
**Task:** Create a struct called `Employee` with work information.

**Requirements:**
- Members: `string name`, `int id`, `double salary`
- Create an employee with sample data
- Display employee card format

**Expected Output:**
```
=== EMPLOYEE CARD ===
ID: 1001
Name: Alice Johnson
Salary: $65000.50
====================
```

**Hint:** Use formatting to make it look like a real ID card.

---

### Exercise 8: Movie Rating
**Task:** Create a struct called `Movie` with rating information.

**Requirements:**
- Members: `string title`, `int year`, `double rating`
- Create a movie with rating out of 10.0
- Display movie info

**Expected Output:**
```
Movie: Inception (2010)
Rating: 9.3/10
```

**Hint:** Combine title and year in parentheses for nice formatting.

---

### Exercise 9: Three Students
**Task:** Create an array of 3 `Student` structs and display all of them.

**Requirements:**
- Use the Student struct from Exercise 2
- Create array: `Student students[3];`
- Set data for all 3 students
- Print all students in a loop

**Expected Output:**
```
=== CLASS ROSTER ===
1. John Smith (Age: 20, GPA: 3.75)
2. Alice Brown (Age: 19, GPA: 3.92)
3. Bob Wilson (Age: 21, GPA: 3.58)
```

**Hint:** Use a for loop to iterate through the array.

---

### Exercise 10: Book Collection
**Task:** Create an array of 5 books and find the longest one.

**Requirements:**
- Array of 5 `Book` structs
- Fill with different books and page counts
- Find and display the book with most pages

**Expected Output:**
```
Longest book: "War and Peace" with 1225 pages
```

**Hint:** Use a loop to compare pages and track the maximum.

---

### Exercise 11: Point Function
**Task:** Create a function that takes a `Point` struct and prints it nicely.

**Requirements:**
- Function: `void displayPoint(Point p)`
- Takes a Point struct as parameter
- Prints in format: "(x, y)"
- Test with multiple points

**Expected Output:**
```
Point A: (2, 5)
Point B: (-1, 3)
```

**Hint:** Pass the entire struct to the function.

---

### Exercise 12: Rectangle Function
**Task:** Create a function that calculates rectangle area from a `Rectangle` struct.

**Requirements:**
- Function: `double calculateArea(Rectangle rect)`
- Takes Rectangle struct as parameter
- Returns the calculated area
- Test with different rectangles

**Expected Output:**
```
Rectangle 1 area: 35.75
Rectangle 2 area: 48.6
```

**Hint:** Return `rect.width * rect.height` from the function.

---

### Exercise 13: Student Average
**Task:** Create a function that calculates the average GPA of student array.

**Requirements:**
- Function: `double calculateAverageGPA(Student students[], int size)`
- Takes array and size as parameters
- Returns average GPA
- Test with array of 4 students

**Expected Output:**
```
Class average GPA: 3.68
```

**Hint:** Add all GPAs and divide by the number of students.

---

### Exercise 14: Circle Comparison
**Task:** Create a function that compares two circles and returns the bigger one.

**Requirements:**
- Function: `Circle getBiggerCircle(Circle c1, Circle c2)`
- Compare by radius
- Return the circle with larger radius
- Display both circles and the winner

**Expected Output:**
```
Circle 1 radius: 5.5
Circle 2 radius: 3.2
Bigger circle has radius: 5.5
```

**Hint:** Compare `c1.radius` with `c2.radius` and return the appropriate circle.

---

### Exercise 15: Point Distance Function
**Task:** Create a function that calculates distance between two points.

**Requirements:**
- Function: `double calculateDistance(Point p1, Point p2)`
- Use simple formula: |x₂-x₁| + |y₂-y₁| (Manhattan distance)
- Return the distance
- Test with multiple point pairs

**Expected Output:**
```
Distance between (1,2) and (4,6): 7
Distance between (0,0) and (3,3): 6
```

**Hint:** Manhattan distance = |x₂-x₁| + |y₂-y₁|. Use `abs()` for absolute value.

---

## 🟡 Part 2: Basic Classes (Exercises 16-25)

### Exercise 16: Simple Car Class
**Task:** Create your first `Car` class with basic information.

**Requirements:**
- Class name: `Car`
- Private members: `string brand`, `string model`, `int year`
- Public function: `void displayInfo()`
- Create one car object and display info

**Expected Output:**
```
Car: 2020 Toyota Camry
```

**Hint:** Use `private:` for data and `public:` for functions.

---

### Exercise 17: Counter Class
**Task:** Create a `Counter` class that can count up and down.

**Requirements:**
- Private member: `int count` (start at 0)
- Public functions: `void increment()`, `void decrement()`, `int getValue()`
- Test by incrementing 5 times, decrementing 2 times

**Expected Output:**
```
Counter value: 3
```

**Hint:** increment() does `count++`, decrement() does `count--`.

---

### Exercise 18: Bank Account Class
**Task:** Create a simple `BankAccount` class.

**Requirements:**
- Private members: `string accountNumber`, `double balance`
- Public functions: `void deposit(double amount)`, `double getBalance()`
- Start with balance = 0, test with deposit of $500

**Expected Output:**
```
Account: 12345
Balance: $500
```

**Hint:** deposit() should add to balance: `balance += amount`.

---

### Exercise 19: Temperature Class
**Task:** Create a `Temperature` class that stores Celsius and converts to Fahrenheit.

**Requirements:**
- Private member: `double celsius`
- Public functions: `void setCelsius(double c)`, `double getFahrenheit()`
- Formula: F = (C × 9/5) + 32
- Test with 25°C

**Expected Output:**
```
25°C = 77°F
```

**Hint:** getFahrenheit() returns `(celsius * 9.0/5.0) + 32`.

---

### Exercise 20: Student Grade Class
**Task:** Create a `StudentGrade` class to manage grades.

**Requirements:**
- Private members: `string name`, `double grade`
- Public functions: `void setName(string n)`, `void setGrade(double g)`, `char getLetterGrade()`
- Convert grade to letter (A: 90+, B: 80+, C: 70+, D: 60+, F: below 60)

**Expected Output:**
```
Student: John Smith
Grade: 85 (B)
```

**Hint:** Use if-else statements in getLetterGrade() to return appropriate char.

---

### Exercise 21: Constructor Basics
**Task:** Add a constructor to your `Car` class from Exercise 16.

**Requirements:**
- Constructor: `Car(string b, string m, int y)`
- Initialize brand, model, year in constructor
- Create car with: Car myCar("Honda", "Civic", 2019);

**Expected Output:**
```
Car: 2019 Honda Civic
```

**Hint:** Constructor syntax: `Car(string b, string m, int y) { brand = b; model = m; year = y; }`

---

### Exercise 22: Rectangle Class with Constructor
**Task:** Create a `Rectangle` class with constructor and area calculation.

**Requirements:**
- Private members: `double width`, `double height`
- Constructor: `Rectangle(double w, double h)`
- Public function: `double getArea()`
- Create Rectangle(10.5, 6.3) and display area

**Expected Output:**
```
Rectangle: 10.5 x 6.3
Area: 66.15
```

**Hint:** Initialize width and height in constructor, calculate area in getArea().

---

### Exercise 23: Circle Class Complete
**Task:** Create a complete `Circle` class with constructor.

**Requirements:**
- Private member: `double radius`
- Constructor: `Circle(double r)`
- Public functions: `double getArea()`, `double getCircumference()`
- Use π = 3.14159

**Expected Output:**
```
Circle radius: 7.5
Area: 176.714
Circumference: 47.1239
```

**Hint:** Area = π × r², Circumference = 2 × π × r

---

### Exercise 24: Multiple Objects
**Task:** Create 3 different `BankAccount` objects and perform operations.

**Requirements:**
- Create accounts with different account numbers
- Deposit different amounts in each
- Display all account information

**Expected Output:**
```
Account 001: $1500
Account 002: $750
Account 003: $2300
```

**Hint:** Create constructor for BankAccount that takes account number and initial balance.

---

### Exercise 25: Class Array
**Task:** Create an array of 5 `Student` objects (using class, not struct).

**Requirements:**
- Student class with name and grade
- Constructor: `Student(string n, double g)`
- Fill array with 5 different students
- Calculate and display class average

**Expected Output:**
```
Class of 5 students:
Average grade: 78.6
```

**Hint:** Loop through array, sum all grades, divide by 5.

---

## 🔵 Part 3: Advanced Classes & Encapsulation (Exercises 26-40)

### Exercise 26: Safe Bank Account
**Task:** Improve `BankAccount` class with input validation.

**Requirements:**
- Add `void withdraw(double amount)` function
- Don't allow withdrawal if amount > balance
- Don't allow negative deposits or withdrawals
- Add error messages for invalid operations

**Expected Output:**
```
Deposit $500: Success
Withdraw $200: Success. Balance: $300
Withdraw $400: Error! Insufficient funds
Deposit $-50: Error! Amount must be positive
```

**Hint:** Use if statements to check validity before performing operations.

---

### Exercise 27: Person Class with Validation
**Task:** Create a `Person` class with age validation.

**Requirements:**
- Private members: `string name`, `int age`
- Constructor and setters that validate age (0-120)
- Getter functions
- Reject invalid ages with error messages

**Expected Output:**
```
Person created: John (25 years old)
Setting age to 150: Error! Invalid age
Setting age to -5: Error! Invalid age
```

**Hint:** Use if statements in constructor and setAge() to validate range.

---

### Exercise 28: Gradebook Class
**Task:** Create a `Gradebook` class that manages multiple grades.

**Requirements:**
- Private: array of grades (up to 10 grades)
- Private: count of grades added
- Public: `void addGrade(double grade)`, `double getAverage()`, `int getCount()`
- Validate grades are between 0-100

**Expected Output:**
```
Added grades: 85, 92, 78, 88
Average: 85.75
Total grades: 4
```

**Hint:** Use array index with count variable to track how many grades added.

---

### Exercise 29: Product Class
**Task:** Create a `Product` class for a store inventory system.

**Requirements:**
- Private: `string name`, `double price`, `int quantity`
- Constructor with validation (price ≥ 0, quantity ≥ 0)
- Functions: `void sell(int amount)`, `void restock(int amount)`, `double getValue()`
- getValue() returns total value (price × quantity)

**Expected Output:**
```
Product: Laptop ($999.99 x 15 units)
Total value: $14999.85
Sold 3 units. Remaining: 12
Restocked 5 units. New quantity: 17
```

**Hint:** sell() decreases quantity, restock() increases it, getValue() multiplies price × quantity.

---

### Exercise 30: Time Class
**Task:** Create a `Time` class that handles hours, minutes, and seconds.

**Requirements:**
- Private: `int hours`, `int minutes`, `int seconds`
- Constructor with validation (hours: 0-23, minutes/seconds: 0-59)
- Functions: `void display()`, `void addSeconds(int s)`, `void addMinutes(int m)`
- Handle overflow (60 seconds = 1 minute, 60 minutes = 1 hour)

**Expected Output:**
```
Time: 14:30:45
After adding 20 seconds: 14:31:05
After adding 45 minutes: 15:16:05
```

**Hint:** When seconds ≥ 60, add to minutes and reduce seconds. Same for minutes to hours.

---

### Exercise 31: String Class
**Task:** Create a simple `MyString` class that wraps string functionality.

**Requirements:**
- Private: `string data`
- Constructor: `MyString(string s)`
- Functions: `int length()`, `void toUpper()`, `void toLower()`, `void display()`
- toUpper/toLower should modify the internal string

**Expected Output:**
```
Original: Hello World
Length: 11
Uppercase: HELLO WORLD
Lowercase: hello world
```

**Hint:** Loop through string characters and use `toupper()` and `tolower()` functions.

---

### Exercise 32: Calculator Class
**Task:** Create a `Calculator` class that maintains a running total.

**Requirements:**
- Private: `double result`
- Constructor starts result at 0
- Functions: `void add(double n)`, `void subtract(double n)`, `void multiply(double n)`, `void divide(double n)`, `double getResult()`, `void clear()`
- Prevent division by zero

**Expected Output:**
```
Started with: 0
Add 10: 10
Multiply by 3: 30
Subtract 5: 25
Divide by 5: 5
Final result: 5
```

**Hint:** Each operation modifies the result member variable.

---

### Exercise 33: Library Book Class
**Task:** Create a `LibraryBook` class with checkout system.

**Requirements:**
- Private: `string title`, `string author`, `bool isCheckedOut`
- Constructor sets isCheckedOut to false
- Functions: `bool checkOut()`, `bool checkIn()`, `bool isAvailable()`
- Return false if trying to checkout already checked out book

**Expected Output:**
```
Book: "1984" by George Orwell
Available: Yes
Checked out: Success
Available: No
Checked in: Success
Available: Yes
```

**Hint:** checkOut() sets isCheckedOut to true, checkIn() sets it to false.

---

### Exercise 34: Inventory Item Class
**Task:** Create an `InventoryItem` class with low stock alerts.

**Requirements:**
- Private: `string name`, `int quantity`, `int lowStockThreshold`
- Constructor sets threshold
- Functions: `void useItems(int amount)`, `void addItems(int amount)`, `bool isLowStock()`
- isLowStock() returns true when quantity ≤ threshold

**Expected Output:**
```
Item: Pencils (Quantity: 50, Threshold: 10)
Used 45 items. Remaining: 5
WARNING: Low stock! Only 5 remaining
Added 20 items. New quantity: 25
Stock level: Normal
```

**Hint:** Compare quantity with lowStockThreshold in isLowStock().

---

### Exercise 35: User Account Class
**Task:** Create a `UserAccount` class with login attempts tracking.

**Requirements:**
- Private: `string username`, `string password`, `int failedAttempts`, `bool isLocked`
- Functions: `bool login(string user, string pass)`, `void unlock()`, `bool isAccountLocked()`
- Lock account after 3 failed attempts

**Expected Output:**
```
Login attempt with wrong password: Failed (1 attempt)
Login attempt with wrong password: Failed (2 attempts)
Login attempt with wrong password: Failed (3 attempts)
Account locked!
Unlock account: Success
Login with correct password: Success
```

**Hint:** Increment failedAttempts on wrong password, lock when ≥ 3.

---

### Exercise 36: Weather Station Class
**Task:** Create a `WeatherStation` class that tracks temperature readings.

**Requirements:**
- Private: array of last 10 temperatures, count of readings
- Functions: `void addReading(double temp)`, `double getAverage()`, `double getHighest()`, `double getLowest()`
- Keep only last 10 readings (circular buffer concept)

**Expected Output:**
```
Added readings: 72.5, 74.2, 71.8, 73.9, 70.1
Average: 72.5°F
Highest: 74.2°F
Lowest: 70.1°F
```

**Hint:** Use modulo operator to wrap around array when full: `index % 10`.

---

### Exercise 37: Shopping Cart Class
**Task:** Create a `ShoppingCart` class for e-commerce.

**Requirements:**
- Private: arrays for item names and prices, item count
- Functions: `void addItem(string name, double price)`, `double getTotal()`, `void displayCart()`, `void clear()`
- Maximum 20 items in cart

**Expected Output:**
```
Cart Contents:
1. Laptop - $999.99
2. Mouse - $29.99
3. Keyboard - $79.99
Total: $1109.97
Items in cart: 3
```

**Hint:** Use parallel arrays - one for names, one for prices, same index.

---

### Exercise 38: Dice Class
**Task:** Create a `Dice` class that simulates rolling dice.

**Requirements:**
- Private: `int sides`, `int lastRoll`
- Constructor: `Dice(int numSides)`
- Functions: `int roll()`, `int getLastRoll()`, `void rollMultiple(int times)`
- Use simple randomization: `(rand() % sides) + 1`

**Expected Output:**
```
6-sided die:
Roll 1: 4
Roll 2: 1
Roll 3: 6
Rolling 5 times: 2, 5, 3, 6, 1
```

**Hint:** Include `<cstdlib>` and `<ctime>`, use `srand(time(0))` for random seed.

---

### Exercise 39: Password Manager Class
**Task:** Create a `PasswordManager` class with strength validation.

**Requirements:**
- Private: `string password`
- Functions: `bool setPassword(string newPass)`, `bool checkStrength()`, `bool validateLogin(string attempt)`
- Strong password: ≥8 characters, has uppercase, lowercase, and number
- Only allow strong passwords

**Expected Output:**
```
Setting password "abc": Too weak! Rejected
Setting password "Password123": Strong! Accepted
Login attempt "wrong": Failed
Login attempt "Password123": Success
```

**Hint:** Loop through password characters and check with `isupper()`, `islower()`, `isdigit()`.

---

### Exercise 40: Game Character Class
**Task:** Create a `GameCharacter` class for a simple RPG.

**Requirements:**
- Private: `string name`, `int health`, `int maxHealth`, `int level`, `int experience`
- Constructor sets maxHealth = health = 100, level = 1, experience = 0
- Functions: `void takeDamage(int damage)`, `void heal(int amount)`, `void gainExperience(int exp)`, `void levelUp()`
- Level up every 100 experience points, increase maxHealth by 20

**Expected Output:**
```
Character: Hero (Level 1, HP: 100/100, EXP: 0)
Took 30 damage: HP: 70/100
Healed 15: HP: 85/100
Gained 150 experience: Level up! Now level 2
New stats: HP: 85/120, EXP: 50
```

**Hint:** Check if experience ≥ 100 in gainExperience(), then level up and subtract 100 exp.

---

# 🎯 How to Use These Exercises

## 🟢 Beginner Path (Exercises 1-15):
- **Focus**: Understanding structs and basic data organization
- **Pace**: 2-3 exercises per day
- **Skills**: Struct creation, member access, arrays of structs, passing structs to functions

## 🟡 Intermediate Path (Exercises 16-25):
- **Focus**: Basic classes, constructors, and encapsulation
- **Pace**: 1-2 exercises per day
- **Skills**: Private vs public, constructors, member functions, multiple objects

## 🔵 Advanced Path (Exercises 26-40):
- **Focus**: Advanced OOP concepts and real-world applications
- **Pace**: 1 exercise per day
- **Skills**: Input validation, complex class design, data management, error handling

---

## 🆘 Getting Help:
- **"Help me with Exercise 18"** → I'll give hints and guidance
- **"Show solution for Exercise 25"** → I'll explain step by step
- **"I don't understand private/public"** → I'll explain simply
- **"Exercise 32 is confusing"** → I'll break it down into smaller parts

---

## 📋 Quick Class Template:
```cpp
#include <iostream>
#include <string>
using namespace std;

class ClassName {
private:
    // Your private members here
    
public:
    // Constructor
    ClassName(parameters) {
        // Initialize members
    }
    
    // Your public functions here
};

int main() {
    // Create and test your objects here
    return 0;
}
```

---

**Pick any exercise number (1-40) and tell me!** I'll guide you through it step by step! 🚀

**Remember**: OOP is about organizing code and data together. Start simple and build complexity gradually!