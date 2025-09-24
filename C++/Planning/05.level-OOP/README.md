# Level 5: Object-Oriented Programming Basics 🟡

**Week 6-8 | Intermediate Level**

Welcome to Object-Oriented Programming (OOP)! This is where C++ becomes really powerful. You'll learn to organize your code better and create reusable components.

## 📚 What You'll Learn

### 1. **Structures (Week 6)**
- Creating custom data types with `struct`
- Accessing struct members with dot operator (.)
- Arrays of structures
- Passing structures to functions

### 2. **Basic Classes (Week 7)**
- Difference between `class` and `struct`
- Private vs Public members
- Simple member functions (methods)
- Constructor basics
- Creating and using objects

### 3. **Encapsulation (Week 8)**
- Data hiding principles
- Getters and setters
- Proper class design
- Why encapsulation matters

---

## 🎯 Learning Objectives

By the end of Level 5, you should be able to:
- ✅ Create and use structures to group related data
- ✅ Understand when to use struct vs class
- ✅ Write classes with private data and public methods
- ✅ Create constructors to initialize objects properly
- ✅ Use getters and setters for safe data access
- ✅ Apply basic encapsulation principles

---

## 📁 Project Structure

```
Level5_OOP_Basics/
├── README.md                 # This file
├── Week6_Structures/
│   ├── 01_basic_struct.cpp
│   ├── 02_struct_functions.cpp
│   ├── 03_struct_arrays.cpp
│   └── exercises/
├── Week7_Classes/
│   ├── 01_class_vs_struct.cpp
│   ├── 02_private_public.cpp
│   ├── 03_constructors.cpp
│   └── exercises/
├── Week8_Encapsulation/
│   ├── 01_getters_setters.cpp
│   ├── 02_data_hiding.cpp
│   ├── 03_class_design.cpp
│   └── exercises/
└── Mini_Projects/
    ├── student_record_system.cpp
    ├── bank_account_simulator.cpp
    └── library_book_manager.cpp
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

## 📖 Week 6: Structures

### What is a Structure?
A `struct` groups related variables together under one name. Think of it as a container for related data.

### Key Concepts:
- **Member variables**: Variables inside the struct
- **Dot operator (.)**: Used to access members
- **Initialization**: Setting initial values
- **Arrays of structs**: Multiple objects of same type

### Simple Example:
```cpp
struct Student {
    string name;
    int age;
    double gpa;
};

Student s1;  // Create a student object
s1.name = "John";  // Access member with dot operator
```

### Daily Practice (Week 6):
- Day 1: Create basic struct
- Day 2: Initialize struct members
- Day 3: Arrays of structs
- Day 4: Functions with structs
- Day 5: Mini project - Person database

---

## 📖 Week 7: Basic Classes

### Class vs Struct:
- **struct**: Members are public by default
- **class**: Members are private by default
- Both can have functions, constructors, etc.

### Key Concepts:
- **Private**: Only the class itself can access
- **Public**: Anyone can access
- **Member functions**: Functions inside the class
- **Constructor**: Special function that runs when object is created

### Simple Example:
```cpp
class Rectangle {
private:
    double width, height;  // Private data
    
public:
    Rectangle(double w, double h) {  // Constructor
        width = w;
        height = h;
    }
    
    double getArea() {  // Public function
        return width * height;
    }
};
```

### Daily Practice (Week 7):
- Day 1: Convert struct to class
- Day 2: Private vs public practice
- Day 3: Simple member functions
- Day 4: Basic constructors
- Day 5: Mini project - Calculator class

---

## 📖 Week 8: Encapsulation

### What is Encapsulation?
Encapsulation means hiding the internal details and only showing what's necessary. It's like a TV remote - you don't need to know how it works inside, just which buttons to press.

### Key Concepts:
- **Data hiding**: Keep data private
- **Getters**: Functions to read private data
- **Setters**: Functions to modify private data safely
- **Validation**: Check data before storing it

### Simple Example:
```cpp
class BankAccount {
private:
    double balance;  // Hidden from outside
    
public:
    // Getter - safe way to read balance
    double getBalance() {
        return balance;
    }
    
    // Setter - safe way to change balance
    void deposit(double amount) {
        if (amount > 0) {  // Validation
            balance += amount;
        }
    }
};
```

### Daily Practice (Week 8):
- Day 1: Create getters and setters
- Day 2: Add input validation
- Day 3: Design a complete class
- Day 4: Multiple objects practice
- Day 5: Mini project - Student grade manager

---

## 🚀 Mini Projects

### Project 1: Student Record System (Week 6)
**Goal**: Create a system to store and display student information
**Features**:
- Store name, ID, age, GPA
- Add multiple students
- Display all students
- Find student by ID

### Project 2: Bank Account Simulator (Week 7-8)
**Goal**: Create a simple bank account management system
**Features**:
- Create account with initial balance
- Deposit and withdraw money
- Check balance
- Transaction validation

### Project 3: Library Book Manager (Week 8)
**Goal**: Manage a small library inventory
**Features**:
- Add books (title, author, ISBN)
- Check if book is available
- Borrow and return books
- Display all books

---

## ⚠️ Common Beginner Mistakes

### 1. **Forgetting Access Specifiers**
```cpp
// Wrong
class MyClass {
    int data;  // This is private! Can't access from outside
};

// Correct
class MyClass {
public:
    int data;  // Now it's accessible
};
```

### 2. **Not Using Constructors**
```cpp
// Wrong - uninitialized data
class Rectangle {
private:
    double width, height;  // Random values!
};

// Correct - always initialize
class Rectangle {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
};
```

### 3. **Direct Access to Private Data**
```cpp
// Wrong
class Person {
private:
    int age;
};
Person p;
p.age = 25;  // Error! Can't access private member

// Correct
class Person {
private:
    int age;
public:
    void setAge(int a) { age = a; }
    int getAge() { return age; }
};
```

---

## 🎯 Success Checklist

Before moving to Level 6, make sure you can:

### Structures:
- [ ] Create a struct with multiple data types
- [ ] Access struct members using dot operator
- [ ] Create arrays of structs
- [ ] Pass structs to functions
- [ ] Initialize structs properly

### Classes:
- [ ] Understand difference between class and struct
- [ ] Use private and public correctly
- [ ] Write simple member functions
- [ ] Create basic constructors
- [ ] Create and use multiple objects

### Encapsulation:
- [ ] Explain why data hiding is important
- [ ] Write proper getters and setters
- [ ] Add input validation in setters
- [ ] Design a class with good encapsulation
- [ ] Use objects safely without breaking them

---

## 📝 Quick Reference

### Struct Syntax:
```cpp
struct StructName {
    datatype member1;
    datatype member2;
};
```

### Class Syntax:
```cpp
class ClassName {
private:
    // Private members
public:
    // Constructor
    ClassName(parameters);
    // Public functions
    returnType functionName();
};
```

### Object Creation:
```cpp
ClassName objectName(parameters);  // With constructor
ClassName objectName;              // Default constructor
```

### Accessing Members:
```cpp
objectName.publicMember;
objectName.publicFunction();
```

---

## 🔄 Git Commands for This Level

```bash
# Start working on Level 5
git checkout -b level5-oop-basics

# After each lesson
git add .
git commit -m "Complete Week 6: Structures lesson"

# Push your progress
git push origin level5-oop-basics

# When level is complete
git checkout main
git merge level5-oop-basics
git push origin main
```

---

## ➡️ What's Next?

After mastering Level 5, you'll be ready for **Level 6: Memory & References**:
- Pointers (basic)
- References
- Dynamic memory allocation
- Memory management

---

## 🆘 Need Help?

If you get stuck:
1. **Read error messages carefully** - they tell you exactly what's wrong
2. **Check access specifiers** - is your member public or private?
3. **Verify object creation** - did you call the constructor correctly?
4. **Ask for help** - explain what you expected vs what happened

Remember: Object-Oriented Programming is a new way of thinking. Take your time and practice with small examples first!

---

**Good luck with your OOP journey! 🚀**