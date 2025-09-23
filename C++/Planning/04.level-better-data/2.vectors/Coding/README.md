# 📦 **C++ Vector Complete Guide**

## 🎯 **What is a Vector?**

A **vector** is a dynamic array in C++ that can grow and shrink in size during runtime. Unlike traditional arrays with fixed size, vectors provide flexible memory management and powerful built-in methods.

```cpp
// Traditional Array (Fixed Size) ❌
int arr[5] = {1, 2, 3, 4, 5};  // Size cannot change

// Vector (Dynamic Size) ✅ 
vector<int> vec = {1, 2, 3, 4, 5};  // Can grow/shrink anytime!
vec.push_back(6);  // Now has 6 elements
```

---

## 🚀 **Why Use Vectors?**

| **Feature** | **Traditional Array** | **Vector** |
|-------------|----------------------|------------|
| **Size** | Fixed at compile time | Dynamic at runtime |
| **Memory** | Stack allocated | Heap allocated |
| **Bounds Checking** | None | Available with `.at()` |
| **Size Information** | Must track manually | `.size()` method |
| **Insertion/Deletion** | Manual shifting | Built-in methods |
| **STL Compatibility** | Limited | Full integration |

---

## 📚 **Including Vectors**

```cpp
#include <vector>     // Required header
#include <iostream>   // For input/output
using namespace std;  // Optional namespace
```

---

## 🔧 **Vector Creation & Initialization**

### **1. Empty Vector**
```cpp
vector<int> empty_vec;                    // Creates empty vector
cout << empty_vec.size();                 // Output: 0
```

### **2. Vector with Size**
```cpp
vector<int> sized_vec(5);                 // 5 elements, all initialized to 0
// Result: {0, 0, 0, 0, 0}
```

### **3. Vector with Size and Default Value**
```cpp
vector<int> filled_vec(4, 10);            // 4 elements, all set to 10
// Result: {10, 10, 10, 10}
```

### **4. Vector with Initial Values**
```cpp
vector<int> init_vec = {1, 2, 3, 4, 5};   // Initialize with specific values
// Result: {1, 2, 3, 4, 5}
```

### **5. Copy Constructor**
```cpp
vector<int> original = {1, 2, 3};
vector<int> copy_vec(original);           // Creates a copy
// copy_vec: {1, 2, 3}
```

### **6. Vector from Array**
```cpp
int arr[] = {1, 2, 3, 4};
vector<int> vec_from_arr(arr, arr + 4);   // Convert array to vector
// Result: {1, 2, 3, 4}
```

---

## 🎮 **Basic Operations**

### **Adding Elements**
```cpp
vector<int> vec;

// Add to end
vec.push_back(10);        // vec: {10}
vec.push_back(20);        // vec: {10, 20}
vec.push_back(30);        // vec: {10, 20, 30}

// Add at specific position
vec.insert(vec.begin() + 1, 15);  // vec: {10, 15, 20, 30}
// Insert 15 at position 1

// Add multiple elements
vec.insert(vec.end(), {40, 50});  // vec: {10, 15, 20, 30, 40, 50}
```

### **Accessing Elements**
```cpp
vector<int> vec = {10, 20, 30, 40, 50};

// Method 1: Square brackets (no bounds checking)
cout << vec[0];           // Output: 10 (first element)
cout << vec[4];           // Output: 50 (last element)

// Method 2: at() method (with bounds checking)
cout << vec.at(2);        // Output: 30 (safe access)
// vec.at(10);            // Throws exception if out of bounds

// Method 3: Front and back
cout << vec.front();      // Output: 10 (first element)
cout << vec.back();       // Output: 50 (last element)
```

### **Modifying Elements**
```cpp
vector<int> vec = {1, 2, 3, 4, 5};

// Direct assignment
vec[0] = 99;              // vec: {99, 2, 3, 4, 5}
vec.at(1) = 88;           // vec: {99, 88, 3, 4, 5}

// Using iterators
*vec.begin() = 77;        // vec: {77, 88, 3, 4, 5}
```

### **Removing Elements**
```cpp
vector<int> vec = {10, 20, 30, 40, 50};

// Remove last element
vec.pop_back();           // vec: {10, 20, 30, 40}

// Remove at specific position
vec.erase(vec.begin() + 1);  // Remove element at index 1
// vec: {10, 30, 40}

// Remove range of elements
vec.erase(vec.begin() + 1, vec.begin() + 3);  // Remove elements 1-2
// vec: {10}

// Clear all elements
vec.clear();              // vec: {} (empty)
```

---

## 📏 **Size and Capacity**

### **Understanding Size vs Capacity**
```cpp
vector<int> vec;
cout << "Size: " << vec.size();          // Number of elements currently stored
cout << "Capacity: " << vec.capacity();  // Number of elements that can be stored

vec.push_back(1);
cout << "Size: " << vec.size();          // 1
cout << "Capacity: " << vec.capacity();  // Usually 1

vec.push_back(2);
cout << "Size: " << vec.size();          // 2  
cout << "Capacity: " << vec.capacity();  // Usually 2

vec.push_back(3);
cout << "Size: " << vec.size();          // 3
cout << "Capacity: " << vec.capacity();  // Usually 4 (doubles when needed)
```

### **Size Management Methods**
```cpp
vector<int> vec = {1, 2, 3};

// Check if empty
bool isEmpty = vec.empty();       // false

// Get current size
size_t currentSize = vec.size();  // 3

// Reserve memory (optimization)
vec.reserve(100);                 // Allocate space for 100 elements
cout << vec.capacity();           // At least 100

// Resize vector
vec.resize(10);                   // Now has 10 elements (7 new zeros added)
vec.resize(5);                    // Now has 5 elements (5 elements removed)
vec.resize(8, 42);                // Resize to 8, fill new elements with 42

// Shrink capacity to fit size
vec.shrink_to_fit();              // Reduce capacity to current size
```

---

## 🔄 **Iteration Methods**

### **1. Traditional For Loop**
```cpp
vector<int> vec = {10, 20, 30, 40, 50};

for (size_t i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
}
// Output: 10 20 30 40 50
```

### **2. Range-Based For Loop (C++11)**
```cpp
// Read-only iteration
for (int value : vec) {
    cout << value << " ";
}

// Modify elements (use reference)
for (int& value : vec) {
    value *= 2;  // Double each element
}

// Const reference (efficient for large objects)
for (const int& value : vec) {
    cout << value << " ";
}
```

### **3. Iterator-Based**
```cpp
// Forward iteration
for (auto it = vec.begin(); it != vec.end(); ++it) {
    cout << *it << " ";
}

// Reverse iteration
for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
    cout << *it << " ";
}

// Const iterators
for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
    cout << *it << " ";  // Read-only access
}
```

---

## 🛠️ **Essential Methods Reference**

### **Element Access**
```cpp
vector<int> vec = {1, 2, 3, 4, 5};

vec[index]          // Access element (no bounds checking)
vec.at(index)       // Safe access (throws exception if out of bounds)
vec.front()         // First element
vec.back()          // Last element
vec.data()          // Pointer to underlying array
```

### **Capacity Operations**
```cpp
vec.size()          // Number of elements
vec.max_size()      // Maximum possible size
vec.capacity()      // Currently allocated capacity
vec.empty()         // Check if vector is empty
vec.reserve(n)      // Reserve memory for n elements
vec.resize(n)       // Change size to n elements
vec.shrink_to_fit() // Reduce capacity to fit current size
```

### **Modifiers**
```cpp
vec.push_back(value)           // Add element to end
vec.pop_back()                 // Remove last element
vec.insert(pos, value)         // Insert element at position
vec.erase(pos)                 // Remove element at position
vec.clear()                    // Remove all elements
vec.swap(other_vec)            // Swap contents with another vector
vec.emplace_back(args...)      // Construct element in-place at end
vec.emplace(pos, args...)      // Construct element in-place at position
```

---

## 🧮 **Common Algorithms with Vectors**

### **Including Algorithm Header**
```cpp
#include <algorithm>  // Required for STL algorithms
```

### **Sorting**
```cpp
vector<int> vec = {5, 2, 8, 1, 9};

// Sort in ascending order
sort(vec.begin(), vec.end());
// vec: {1, 2, 5, 8, 9}

// Sort in descending order
sort(vec.rbegin(), vec.rend());
// vec: {9, 8, 5, 2, 1}

// Custom sorting with lambda
sort(vec.begin(), vec.end(), [](int a, int b) {
    return a > b;  // Descending order
});
```

### **Searching**
```cpp
vector<int> vec = {1, 3, 5, 7, 9};

// Find element
auto it = find(vec.begin(), vec.end(), 5);
if (it != vec.end()) {
    cout << "Found 5 at position: " << (it - vec.begin());
}

// Binary search (requires sorted vector)
bool found = binary_search(vec.begin(), vec.end(), 7);
cout << "7 found: " << (found ? "Yes" : "No");

// Count occurrences
int count = count(vec.begin(), vec.end(), 3);
cout << "Number of 3s: " << count;
```

### **Min/Max Operations**
```cpp
vector<int> vec = {3, 7, 1, 9, 2};

// Find minimum and maximum
auto min_it = min_element(vec.begin(), vec.end());
auto max_it = max_element(vec.begin(), vec.end());

cout << "Min: " << *min_it << " at position " << (min_it - vec.begin());
cout << "Max: " << *max_it << " at position " << (max_it - vec.begin());
```

### **Numeric Operations**
```cpp
#include <numeric>  // Required for numeric algorithms

vector<int> vec = {1, 2, 3, 4, 5};

// Sum of all elements
int sum = accumulate(vec.begin(), vec.end(), 0);
cout << "Sum: " << sum;  // Output: 15

// Product of all elements
int product = accumulate(vec.begin(), vec.end(), 1, multiplies<int>());
cout << "Product: " << product;  // Output: 120
```

---

## 🔍 **Vector of Different Data Types**

### **Vector of Strings**
```cpp
vector<string> names = {"Alice", "Bob", "Charlie"};
names.push_back("David");
for (const string& name : names) {
    cout << name << " ";
}
```

### **Vector of Pairs**
```cpp
vector<pair<string, int>> students = {
    {"Alice", 85},
    {"Bob", 92},
    {"Charlie", 78}
};

students.push_back(make_pair("David", 88));
// Or: students.emplace_back("David", 88);

for (const auto& student : students) {
    cout << student.first << ": " << student.second << endl;
}
```

### **Vector of Vectors (2D Vector)**
```cpp
// Create 3x4 matrix
vector<vector<int>> matrix(3, vector<int>(4, 0));

// Initialize with values
vector<vector<int>> matrix2 = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

// Access elements
matrix2[1][2] = 99;  // Set element at row 1, column 2

// Print matrix
for (const auto& row : matrix2) {
    for (int val : row) {
        cout << val << " ";
    }
    cout << endl;
}
```

---

## 🎯 **Performance Considerations**

### **Time Complexities**
| **Operation** | **Time Complexity** | **Notes** |
|---------------|-------------------|-----------|
| `push_back()` | O(1) amortized | May trigger reallocation |
| `pop_back()` | O(1) | Always constant |
| `insert()` at beginning | O(n) | Must shift all elements |
| `insert()` at end | O(1) amortized | Similar to push_back |
| `erase()` at beginning | O(n) | Must shift all elements |
| `erase()` at end | O(1) | Similar to pop_back |
| Random access `[]` | O(1) | Direct memory access |
| `find()` | O(n) | Linear search |
| `sort()` | O(n log n) | Efficient sorting |

### **Memory Optimization Tips**
```cpp
vector<int> vec;

// 1. Reserve space if you know approximate size
vec.reserve(1000);  // Prevents multiple reallocations

// 2. Use emplace_back instead of push_back for complex objects
vec.emplace_back(args...);  // Constructs object in-place

// 3. Shrink to fit when done growing
vec.shrink_to_fit();  // Reduces capacity to size

// 4. Clear vs reset for reuse
vec.clear();          // Keeps capacity, size becomes 0
vec = vector<int>();  // Releases all memory
```

---

## 🚨 **Common Mistakes to Avoid**

### **1. Index Out of Bounds**
```cpp
vector<int> vec = {1, 2, 3};

// ❌ WRONG - No bounds checking
cout << vec[5];  // Undefined behavior!

// ✅ CORRECT - Use at() for safe access
try {
    cout << vec.at(5);
} catch (const out_of_range& e) {
    cout << "Index out of range!";
}

// ✅ CORRECT - Check bounds manually
if (index < vec.size()) {
    cout << vec[index];
}
```

### **2. Iterator Invalidation**
```cpp
vector<int> vec = {1, 2, 3, 4, 5};

// ❌ WRONG - Modifying vector while iterating
for (auto it = vec.begin(); it != vec.end(); ++it) {
    if (*it == 3) {
        vec.erase(it);  // Invalidates iterator!
    }
}

// ✅ CORRECT - Use erase return value
for (auto it = vec.begin(); it != vec.end();) {
    if (*it == 3) {
        it = vec.erase(it);  // erase returns next valid iterator
    } else {
        ++it;
    }
}

// ✅ CORRECT - Iterate backwards for erasure
for (int i = vec.size() - 1; i >= 0; i--) {
    if (vec[i] == 3) {
        vec.erase(vec.begin() + i);
    }
}
```

### **3. Comparing Size with Signed Integer**
```cpp
vector<int> vec;

// ❌ WRONG - size() returns size_t (unsigned)
for (int i = vec.size() - 1; i >= 0; i--) {  // Problem if vec is empty!
    // size() - 1 wraps around to large positive number
}

// ✅ CORRECT - Cast to signed or check empty first
if (!vec.empty()) {
    for (int i = (int)vec.size() - 1; i >= 0; i--) {
        // Safe iteration
    }
}

// ✅ CORRECT - Use size_t consistently
for (size_t i = 0; i < vec.size(); i++) {
    // Forward iteration is safer
}
```

### **4. Inefficient Operations**
```cpp
vector<string> vec;

// ❌ WRONG - Frequent insertions at beginning
for (int i = 0; i < 1000; i++) {
    vec.insert(vec.begin(), "item" + to_string(i));  // O(n) each time!
}

// ✅ CORRECT - Use deque for front insertions
deque<string> deq;
for (int i = 0; i < 1000; i++) {
    deq.push_front("item" + to_string(i));  // O(1) each time
}

// ✅ CORRECT - Build in reverse order then reverse
vector<string> vec2;
for (int i = 999; i >= 0; i--) {
    vec2.push_back("item" + to_string(i));
}
```

---

## 📖 **Real-World Examples**

### **Example 1: Student Grade Management**
```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

struct Student {
    string name;
    vector<int> grades;
    
    double getAverage() const {
        if (grades.empty()) return 0.0;
        return (double)accumulate(grades.begin(), grades.end(), 0) / grades.size();
    }
};

int main() {
    vector<Student> students = {
        {"Alice", {85, 92, 78, 90}},
        {"Bob", {88, 85, 91, 87}},
        {"Charlie", {92, 88, 95, 89}}
    };
    
    // Find top student
    auto topStudent = max_element(students.begin(), students.end(),
        [](const Student& a, const Student& b) {
            return a.getAverage() < b.getAverage();
        });
    
    cout << "Top student: " << topStudent->name 
         << " (Average: " << topStudent->getAverage() << ")" << endl;
    
    return 0;
}
```

### **Example 2: Dynamic Shopping Cart**
```cpp
struct CartItem {
    string product;
    double price;
    int quantity;
    
    double getTotal() const { return price * quantity; }
};

class ShoppingCart {
    vector<CartItem> items;
    
public:
    void addItem(const string& product, double price, int quantity) {
        // Check if item already exists
        auto it = find_if(items.begin(), items.end(),
            [&product](const CartItem& item) {
                return item.product == product;
            });
        
        if (it != items.end()) {
            it->quantity += quantity;  // Update quantity
        } else {
            items.push_back({product, price, quantity});  // Add new item
        }
    }
    
    double getTotalCost() const {
        return accumulate(items.begin(), items.end(), 0.0,
            [](double sum, const CartItem& item) {
                return sum + item.getTotal();
            });
    }
    
    void displayCart() const {
        for (const auto& item : items) {
            cout << item.product << " x" << item.quantity 
                 << " = $" << item.getTotal() << endl;
        }
        cout << "Total: $" << getTotalCost() << endl;
    }
};
```

---

## 🔗 **Vector vs Other Containers**

| **Container** | **Use When** | **Advantages** | **Disadvantages** |
|---------------|--------------|----------------|-------------------|
| **`vector`** | General purpose, random access needed | Fast random access, cache-friendly | Slow insertion/deletion at beginning |
| **`deque`** | Need fast insertion at both ends | Fast push/pop at both ends | Slightly slower random access |
| **`list`** | Frequent insertion/deletion in middle | Fast insertion/deletion anywhere | No random access, poor cache performance |
| **`array`** | Fixed size, stack allocation | Fastest access, no dynamic allocation | Fixed size, no growth |

---

## 📚 **Best Practices**

### **✅ DO**
- Use `reserve()` when you know approximate final size
- Prefer range-based for loops for iteration
- Use `emplace_back()` for complex objects
- Check bounds with `at()` in debug builds
- Use const references in range-based loops for large objects
- Consider `shrink_to_fit()` after major size reductions

### **❌ DON'T**
- Don't use `vec[index]` without bounds checking
- Don't modify vector while iterating with iterators
- Don't frequently insert at the beginning
- Don't compare `size()` with negative numbers
- Don't ignore capacity when performance matters
- Don't use vectors for frequent middle insertions/deletions

---

## 🎓 **Learning Path**

### **Beginner (Start Here)**
1. Basic vector creation and initialization
2. Adding/removing elements (`push_back`, `pop_back`)
3. Accessing elements with `[]` and `at()`
4. Simple iteration with range-based for loops
5. Understanding size vs capacity

### **Intermediate**
1. STL algorithms (`sort`, `find`, `count`)
2. Vector of custom objects/structs
3. 2D vectors (vector of vectors)
4. Iterator usage and manipulation
5. Performance considerations

### **Advanced**
1. Custom comparators and predicates
2. Memory optimization techniques
3. Exception safety and RAII
4. Template programming with vectors
5. Advanced STL algorithms and functional programming

---

## 🔧 **Compilation Example**

```bash
# Basic compilation
g++ -o program program.cpp

# With C++11 features (range-based for loops)
g++ -std=c++11 -o program program.cpp

# With warnings and optimizations
g++ -std=c++17 -Wall -Wextra -O2 -o program program.cpp

# Debug build with symbols
g++ -std=c++17 -g -Wall -DDEBUG -o program program.cpp
```

---

## 📝 **Quick Reference Template**

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    // Create vector
    vector<int> vec = {1, 2, 3, 4, 5};
    
    // Add elements
    vec.push_back(6);
    vec.insert(vec.begin() + 2, 99);
    
    // Access elements
    cout << "First: " << vec.front() << endl;
    cout << "Last: " << vec.back() << endl;
    cout << "At index 2: " << vec.at(2) << endl;
    
    // Iterate
    for (const int& val : vec) {
        cout << val << " ";
    }
    cout << endl;
    
    // Algorithms
    sort(vec.begin(), vec.end());
    auto it = find(vec.begin(), vec.end(), 99);
    int sum = accumulate(vec.begin(), vec.end(), 0);
    
    // Size info
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    
    return 0;
}
```

---

## 🎯 **Summary**

Vectors are the most versatile and commonly used container in C++. They provide:

- **Dynamic sizing** with automatic memory management
- **Efficient random access** to elements
- **Rich set of methods** for manipulation
- **Full STL integration** with algorithms
- **Type safety** and bounds checking options

Master vectors, and you'll have a solid foundation for C++ programming and data structure manipulation!

---

## 📖 **Further Reading**

- [C++ Reference - std::vector](https://en.cppreference.com/w/cpp/container/vector)
- [STL Algorithms Reference](https://en.cppreference.com/w/cpp/algorithm)
- [C++ Core Guidelines - Containers](https://isocpp.github.io/CppCoreGuidelines/)
- [Effective STL by Scott Meyers](https://www.amazon.com/Effective-STL-Specific-Standard-Template/dp/0201749629)

**Happy Coding!** 🚀