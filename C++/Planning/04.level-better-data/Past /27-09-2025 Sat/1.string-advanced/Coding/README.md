# 🔤 **20 String Advanced Examples - Easy to Hard**

## 🟢 **EASY LEVEL (Examples 1-7)**

### **Example 1: String Information Analyzer**
```cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text = "Hello, World! 123";
    
    // Basic string information
    cout << "Text: \"" << text << "\"" << endl;
    cout << "Length: " << text.length() << endl;
    cout << "First character: '" << text.front() << "'" << endl;
    cout << "Last character: '" << text.back() << "'" << endl;
    
    // Character analysis
    int letters = 0, digits = 0, spaces = 0, punct = 0;
    
    for (char c : text) {
        if (isalpha(c)) letters++;
        else if (isdigit(c)) digits++;
        else if (isspace(c)) spaces++;
        else if (ispunct(c)) punct++;
    }
    
    cout << "\nCharacter breakdown:" << endl;
    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Punctuation: " << punct << endl;
    
    return 0;
}
```

**📝 Explanation:**
- **Purpose**: Analyze basic string properties and character types
- **Key Methods**: `length()`, `front()`, `back()`, range-based for loop
- **Character Functions**: `isalpha()`, `isdigit()`, `isspace()`, `ispunct()`
- **What it does**: Counts different types of characters in a string
- **Output**: Detailed breakdown of string composition

---

### **Example 2: Case Converter Tool**
```cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text = "Hello World Programming";
    
    cout << "Original: " << text << endl;
    
    // Convert to uppercase
    string upper = text;
    for (char& c : upper) {
        c = toupper(c);
    }
    cout << "UPPERCASE: " << upper << endl;
    
    // Convert to lowercase
    string lower = text;
    for (char& c : lower) {
        c = tolower(c);
    }
    cout << "lowercase: " << lower << endl;
    
    // Title Case (first letter of each word)
    string title = text;
    bool newWord = true;
    for (char& c : title) {
        if (isspace(c)) {
            newWord = true;
        } else if (newWord) {
            c = toupper(c);
            newWord = false;
        } else {
            c = tolower(c);
        }
    }
    cout << "Title Case: " << title << endl;
    
    // Alternating case
    string alternating = text;
    for (int i = 0; i < alternating.length(); i++) {
        if (i % 2 == 0) {
            alternating[i] = tolower(alternating[i]);
        } else {
            alternating[i] = toupper(alternating[i]);
        }
    }
    cout << "aLtErNaTiNg: " << alternating << endl;
    
    return 0;
}
```

**📝 Explanation:**
- **Purpose**: Convert strings between different case formats
- **Key Concepts**: Reference variables (`char&`), modular arithmetic for alternating
- **Functions**: `toupper()`, `tolower()`, `isspace()`
- **Techniques**: Boolean flags for word boundary detection
- **Use Cases**: Text formatting, data normalization

---

### **Example 3: Substring Finder and Extractor**
```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string text = "The quick brown fox jumps over the lazy dog";
    string searchTerm = "the";
    
    cout << "Text: " << text << endl;
    cout << "Searching for: \"" << searchTerm << "\"" << endl;
    
    // Find all occurrences (case-sensitive)
    vector<size_t> positions;
    size_t pos = 0;
    while ((pos = text.find(searchTerm, pos)) != string::npos) {
        positions.push_back(pos);
        pos += 1; // Move forward to find overlapping matches
    }
    
    cout << "\nCase-sensitive matches:" << endl;
    for (size_t position : positions) {
        cout << "Found at position " << position << ": ";
        // Show context (5 chars before and after)
        size_t start = (position >= 5) ? position - 5 : 0;
        size_t end = min(position + searchTerm.length() + 5, text.length());
        
        string context = text.substr(start, end - start);
        cout << "\"" << context << "\"" << endl;
    }
    
    // Case-insensitive search
    string textLower = text;
    string searchLower = searchTerm;
    
    // Convert both to lowercase
    for (char& c : textLower) c = tolower(c);
    for (char& c : searchLower) c = tolower(c);
    
    vector<size_t> caseInsensitivePos;
    pos = 0;
    while ((pos = textLower.find(searchLower, pos)) != string::npos) {
        caseInsensitivePos.push_back(pos);
        pos += 1;
    }
    
    cout << "\nCase-insensitive matches:" << endl;
    for (size_t position : caseInsensitivePos) {
        cout << "Found at position " << position << ": ";
        cout << "\"" << text.substr(position, searchTerm.length()) << "\"" << endl;
    }
    
    return 0;
}
```

**📝 Explanation:**
- **Purpose**: Find and extract substrings with context
- **Key Methods**: `find()`, `substr()`, `string::npos`
- **Advanced**: Case-insensitive searching, context extraction
- **Data Structures**: `vector<size_t>` to store positions
- **Edge Cases**: Boundary checking with `min()` function

---

### **Example 4: Word Counter and Analyzer**
```cpp
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string sentence = "The quick brown fox jumps over the lazy dog";
    
    cout << "Sentence: " << sentence << endl;
    
    // Method 1: Manual word splitting
    vector<string> words;
    string currentWord = "";
    
    for (char c : sentence) {
        if (isspace(c)) {
            if (!currentWord.empty()) {
                words.push_back(currentWord);
                currentWord = "";
            }
        } else {
            currentWord += c;
        }
    }
    // Don't forget the last word
    if (!currentWord.empty()) {
        words.push_back(currentWord);
    }
    
    cout << "\nWord analysis:" << endl;
    cout << "Total words: " << words.size() << endl;
    
    // Analyze each word
    int totalChars = 0;
    string longestWord = "";
    string shortestWord = words[0];
    
    for (int i = 0; i < words.size(); i++) {
        cout << (i + 1) << ". \"" << words[i] << "\" (" 
             << words[i].length() << " chars)" << endl;
        
        totalChars += words[i].length();
        
        if (words[i].length() > longestWord.length()) {
            longestWord = words[i];
        }
        if (words[i].length() < shortestWord.length()) {
            shortestWord = words[i];
        }
    }
    
    cout << "\nStatistics:" << endl;
    cout << "Average word length: " << (double)totalChars / words.size() << endl;
    cout << "Longest word: \"" << longestWord << "\" (" << longestWord.length() << " chars)" << endl;
    cout << "Shortest word: \"" << shortestWord << "\" (" << shortestWord.length() << " chars)" << endl;
    
    // Method 2: Using stringstream (bonus)
    cout << "\n--- Using stringstream method ---" << endl;
    stringstream ss(sentence);
    string word;
    vector<string> words2;
    
    while (ss >> word) {
        words2.push_back(word);
    }
    
    cout << "Words found with stringstream: " << words2.size() << endl;
    
    return 0;
}
```

**📝 Explanation:**
- **Purpose**: Split sentence into words and analyze them
- **Two Methods**: Manual parsing vs `stringstream`
- **String Building**: Adding characters to build words
- **Statistics**: Average, longest, shortest word calculations
- **Edge Cases**: Handling last word, empty strings

---

### **Example 5: String Reverser (Multiple Methods)**
```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string original = "Hello World";
    cout << "Original: " << original << endl;
    
    // Method 1: Manual character swapping
    string method1 = original;
    int len = method1.length();
    for (int i = 0; i < len / 2; i++) {
        char temp = method1[i];
        method1[i] = method1[len - 1 - i];
        method1[len - 1 - i] = temp;
    }
    cout << "Method 1 (manual swap): " << method1 << endl;
    
    // Method 2: Building new string backwards
    string method2 = "";
    for (int i = original.length() - 1; i >= 0; i--) {
        method2 += original[i];
    }
    cout << "Method 2 (build backwards): " << method2 << endl;
    
    // Method 3: Using STL reverse function
    string method3 = original;
    reverse(method3.begin(), method3.end());
    cout << "Method 3 (STL reverse): " << method3 << endl;
    
    // Bonus: Reverse words but keep word order
    string wordReverse = original;
    string result = "";
    string currentWord = "";
    
    for (char c : wordReverse) {
        if (isspace(c)) {
            // Reverse the current word and add to result
            reverse(currentWord.begin(), currentWord.end());
            result += currentWord + c;
            currentWord = "";
        } else {
            currentWord += c;
        }
    }
    // Handle last word
    if (!currentWord.empty()) {
        reverse(currentWord.begin(), currentWord.end());
        result += currentWord;
    }
    cout << "Bonus (reverse each word): " << result << endl;
    
    return 0;
}
```

**📝 Explanation:**
- **Multiple Approaches**: Manual swapping, string building, STL function
- **Algorithm**: Two-pointer technique for character swapping
- **STL Usage**: `reverse()` function from `<algorithm>`
- **Bonus Feature**: Reverse individual words while preserving order
- **Efficiency**: Different time/space complexities for each method

---

### **Example 6: Character Frequency Counter**
```cpp
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string text = "Hello World Programming!";
    cout << "Text: " << text << endl;
    
    // Count character frequencies
    map<char, int> frequency;
    
    for (char c : text) {
        if (c != ' ') { // Skip spaces for cleaner output
            frequency[c]++;
        }
    }
    
    cout << "\nCharacter Frequencies:" << endl;
    for (auto pair : frequency) {
        cout << "'" << pair.first << "': " << pair.second << " times" << endl;
    }
    
    // Find most and least frequent characters
    char mostFrequent = ' ';
    char leastFrequent = ' ';
    int maxCount = 0;
    int minCount = INT_MAX;
    
    for (auto pair : frequency) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequent = pair.first;
        }
        if (pair.second < minCount) {
            minCount = pair.second;
            leastFrequent = pair.first;
        }
    }
    
    cout << "\nMost frequent: '" << mostFrequent << "' (" << maxCount << " times)" << endl;
    cout << "Least frequent: '" << leastFrequent << "' (" << minCount << " times)" << endl;
    
    // Create frequency histogram
    cout << "\nFrequency Histogram:" << endl;
    for (auto pair : frequency) {
        cout << "'" << pair.first << "' ";
        for (int i = 0; i < pair.second; i++) {
            cout << "*";
        }
        cout << " (" << pair.second << ")" << endl;
    }
    
    // Unique character count
    cout << "\nTotal unique characters: " << frequency.size() << endl;
    
    return 0;
}
```

**📝 Explanation:**
- **Data Structure**: `map<char, int>` for frequency counting
- **STL Usage**: Automatic sorting of map keys
- **Statistics**: Finding min/max frequencies
- **Visualization**: ASCII histogram display
- **Filtering**: Skipping spaces for cleaner analysis

---

### **Example 7: Simple Caesar Cipher**
```cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string encrypt(string text, int shift) {
    string result = "";
    
    for (char c : text) {
        if (isalpha(c)) {
            // Determine if uppercase or lowercase
            char base = isupper(c) ? 'A' : 'a';
            
            // Shift the character and handle wrap-around
            char shifted = ((c - base + shift) % 26) + base;
            result += shifted;
        } else {
            // Keep non-alphabetic characters unchanged
            result += c;
        }
    }
    
    return result;
}

string decrypt(string text, int shift) {
    // Decryption is just encryption with negative shift
    return encrypt(text, -shift);
}

int main() {
    string message = "Hello, World!";
    int shift = 3;
    
    cout << "Original message: " << message << endl;
    cout << "Shift amount: " << shift << endl;
    
    // Encrypt
    string encrypted = encrypt(message, shift);
    cout << "Encrypted: " << encrypted << endl;
    
    // Decrypt
    string decrypted = decrypt(encrypted, shift);
    cout << "Decrypted: " << decrypted << endl;
    
    // Show character mapping
    cout << "\nCharacter mapping (shift " << shift << "):" << endl;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string shifted_alphabet = encrypt(alphabet, shift);
    
    cout << "Original:  " << alphabet << endl;
    cout << "Shifted:   " << shifted_alphabet << endl;
    
    // Demo with different shift values
    cout << "\nDifferent shifts:" << endl;
    for (int s = 1; s <= 5; s++) {
        cout << "Shift " << s << ": " << encrypt(message, s) << endl;
    }
    
    return 0;
}
```

**📝 Explanation:**
- **Encryption Algorithm**: Caesar cipher with modular arithmetic
- **Character Handling**: Preserves case, ignores non-alphabetic
- **Modular Math**: `% 26` for alphabet wrap-around
- **Function Design**: Separate encrypt/decrypt functions
- **Demonstration**: Shows multiple shift values

---

## 🟡 **MEDIUM LEVEL (Examples 8-14)**

### **Example 8: Advanced Palindrome Checker**
```cpp
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

bool isPalindromeSimple(string str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

bool isPalindromeIgnoreCase(string str) {
    // Convert to lowercase
    for (char& c : str) {
        c = tolower(c);
    }
    return isPalindromeSimple(str);
}

bool isPalindromeClean(string str) {
    // Remove non-alphabetic characters and convert to lowercase
    string cleaned = "";
    for (char c : str) {
        if (isalpha(c)) {
            cleaned += tolower(c);
        }
    }
    
    // Check if cleaned string is palindrome
    int left = 0;
    int right = cleaned.length() - 1;
    
    while (left < right) {
        if (cleaned[left] != cleaned[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}

string getLongestPalindrome(string str) {
    string longest = "";
    
    // Check all possible substrings
    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            string substring = str.substr(i, j - i + 1);
            if (isPalindromeSimple(substring) && substring.length() > longest.length()) {
                longest = substring;
            }
        }
    }
    
    return longest;
}

int main() {
    vector<string> testStrings = {
        "racecar",
        "A man a plan a canal Panama",
        "race a car",
        "hello",
        "Madam",
        "No 'x' in Nixon"
    };
    
    cout << "Palindrome Analysis:" << endl;
    cout << "===================" << endl;
    
    for (string test : testStrings) {
        cout << "\nTesting: \"" << test << "\"" << endl;
        cout << "Simple palindrome: " << (isPalindromeSimple(test) ? "Yes" : "No") << endl;
        cout << "Ignore case: " << (isPalindromeIgnoreCase(test) ? "Yes" : "No") << endl;
        cout << "Clean palindrome: " << (isPalindromeClean(test) ? "Yes" : "No") << endl;
        
        string longestPal = getLongestPalindrome(test);
        if (!longestPal.empty()) {
            cout << "Longest palindromic substring: \"" << longestPal << "\"" << endl;
        }
    }
    
    return 0;
}
```

**📝 Explanation:**
- **Multiple Algorithms**: Simple, case-insensitive, and clean palindrome checking
- **Two-Pointer Technique**: Efficient palindrome verification
- **String Preprocessing**: Removing unwanted characters
- **Substring Analysis**: Finding longest palindromic substring
- **Comprehensive Testing**: Multiple test cases with different requirements

---

### **Example 9: Text Search and Replace Engine**
```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string replaceFirst(string text, const string& target, const string& replacement) {
    size_t pos = text.find(target);
    if (pos != string::npos) {
        text.replace(pos, target.length(), replacement);
    }
    return text;
}

string replaceAll(string text, const string& target, const string& replacement) {
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        text.replace(pos, target.length(), replacement);
        pos += replacement.length(); // Move past the replacement
    }
    return text;
}

string replaceWholeWords(string text, const string& target, const string& replacement) {
    string result = "";
    string currentWord = "";
    
    for (char c : text + " ") { // Add space to handle last word
        if (isalnum(c)) {
            currentWord += c;
        } else {
            // End of word
            if (currentWord == target) {
                result += replacement;
            } else {
                result += currentWord;
            }
            result += c;
            currentWord = "";
        }
    }
    
    // Remove the extra space we added
    if (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }
    
    return result;
}

vector<int> findAllOccurrences(const string& text, const string& target) {
    vector<int> positions;
    size_t pos = 0;
    
    while ((pos = text.find(target, pos)) != string::npos) {
        positions.push_back(pos);
        pos += 1; // Find overlapping occurrences
    }
    
    return positions;
}

int main() {
    string text = "The cat in the hat sat on the mat. The cat was happy.";
    cout << "Original text: " << text << endl;
    
    string target = "cat";
    string replacement = "dog";
    
    cout << "\nTarget: \"" << target << "\"" << endl;
    cout << "Replacement: \"" << replacement << "\"" << endl;
    
    // Show all occurrences
    vector<int> positions = findAllOccurrences(text, target);
    cout << "\nOccurrences of \"" << target << "\" found at positions: ";
    for (int pos : positions) {
        cout << pos << " ";
    }
    cout << endl;
    
    // Different replacement strategies
    cout << "\nReplacement strategies:" << endl;
    cout << "1. Replace first: " << replaceFirst(text, target, replacement) << endl;
    cout << "2. Replace all: " << replaceAll(text, target, replacement) << endl;
    cout << "3. Whole words only: " << replaceWholeWords(text, target, replacement) << endl;
    
    // Case-insensitive replacement
    cout << "\nCase-insensitive replacement:" << endl;
    string textLower = text;
    string targetLower = target;
    
    // Convert to lowercase for comparison
    for (char& c : textLower) c = tolower(c);
    for (char& c : targetLower) c = tolower(c);
    
    string result = text;
    size_t pos = 0;
    
    while ((pos = textLower.find(targetLower, pos)) != string::npos) {
        result.replace(pos, target.length(), replacement);
        // Update the lowercase version too
        textLower.replace(pos, target.length(), replacement);
        pos += replacement.length();
    }
    
    cout << "Case-insensitive: " << result << endl;
    
    return 0;
}
```

**📝 Explanation:**
- **Multiple Replace Modes**: First occurrence, all occurrences, whole words
- **Position Tracking**: Finding and storing all occurrence positions
- **Word Boundary Detection**: Using `isalnum()` to identify whole words
- **Case-Insensitive**: Parallel processing of lowercase version
- **Edge Cases**: Handling overlapping matches and word boundaries

---

### **Example 10: String Compression Algorithm**
```cpp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string runLengthEncode(const string& input) {
    if (input.empty()) return "";
    
    string result = "";
    char currentChar = input[0];
    int count = 1;
    
    for (int i = 1; i < input.length(); i++) {
        if (input[i] == currentChar) {
            count++;
        } else {
            // Add current character and count to result
            result += currentChar;
            if (count > 1) {
                result += to_string(count);
            }
            
            // Start new character group
            currentChar = input[i];
            count = 1;
        }
    }
    
    // Don't forget the last group
    result += currentChar;
    if (count > 1) {
        result += to_string(count);
    }
    
    return result;
}

string runLengthDecode(const string& encoded) {
    string result = "";
    
    for (int i = 0; i < encoded.length(); i++) {
        char ch = encoded[i];
        
        if (!isdigit(ch)) {
            // It's a character
            if (i + 1 < encoded.length() && isdigit(encoded[i + 1])) {
                // Next character is a digit, so read the count
                string countStr = "";
                int j = i + 1;
                while (j < encoded.length() && isdigit(encoded[j])) {
                    countStr += encoded[j];
                    j++;
                }
                
                int count = stoi(countStr);
                for (int k = 0; k < count; k++) {
                    result += ch;
                }
                
                i = j - 1; // Move index past the digits
            } else {
                // Single character (no count)
                result += ch;
            }
        }
    }
    
    return result;
}

double calculateCompressionRatio(const string& original, const string& compressed) {
    if (original.empty()) return 0;
    return ((double)(original.length() - compressed.length()) / original.length()) * 100;
}

int main() {
    vector<string> testStrings = {
        "aaabbcccccdddd",
        "abcdef",
        "aaaaaaaaaaaaaaa",
        "aaabbbaaaccc",
        "Hello World!",
        ""
    };
    
    cout << "Run-Length Encoding Compression Test" << endl;
    cout << "====================================" << endl;
    
    for (const string& test : testStrings) {
        cout << "\nOriginal: \"" << test << "\" (length: " << test.length() << ")" << endl;
        
        string compressed = runLengthEncode(test);
        cout << "Compressed: \"" << compressed << "\" (length: " << compressed.length() << ")" << endl;
        
        string decompressed = runLengthDecode(compressed);
        cout << "Decompressed: \"" << decompressed << "\"" << endl;
        
        // Verify correctness
        bool correct = (test == decompressed);
        cout << "Correct: " << (correct ? "Yes" : "No") << endl;
        
        // Calculate compression ratio
        double ratio = calculateCompressionRatio(test, compressed);
        if (ratio > 0) {
            cout << "Space saved: " << ratio << "%" << endl;
        } else if (ratio < 0) {
            cout << "Space increased: " << (-ratio) << "% (compression not beneficial)" << endl;
        } else {
            cout << "No change in size" << endl;
        }
    }
    
    return 0;
}
```

**📝 Explanation:**
- **Run-Length Encoding**: Compress consecutive identical characters
- **Encoding/Decoding**: Bidirectional transformation
- **String to Integer**: Using `stoi()` for parsing counts
- **Compression Analysis**: Calculate space savings percentage
- **Edge Cases**: Empty strings, single characters, no compression benefit

---

### **Example 11: Email Address Validator**
```cpp
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

struct ValidationResult {
    bool isValid;
    vector<string> errors;
    string suggestion;
};

ValidationResult validateEmail(const string& email) {
    ValidationResult result;
    result.isValid = true;
    
    // Check if empty
    if (email.empty()) {
        result.errors.push_back("Email cannot be empty");
        result.isValid = false;
        return result;
    }
    
    // Check length
    if (email.length() < 5 || email.length() > 254) {
        result.errors.push_back("Email length must be 5-254 characters");
        result.isValid = false;
    }
    
    // Find @ symbol
    size_t atPos = email.find('@');
    if (atPos == string::npos) {
        result.errors.push_back("Email must contain @ symbol");
        result.isValid = false;
        return result;
    }
    
    // Check for multiple @ symbols
    if (email.find('@', atPos + 1) != string::npos) {
        result.errors.push_back("Email must contain exactly one @ symbol");
        result.isValid = false;
    }
    
    // Extract local part (before @) and domain part (after @)
    string localPart = email.substr(0, atPos);
    string domainPart = email.substr(atPos + 1);
    
    // Validate local part
    if (localPart.empty()) {
        result.errors.push_back("Email must have username before @");
        result.isValid = false;
    } else {
        // Check local part length
        if (localPart.length() > 64) {
            result.errors.push_back("Username part too long (max 64 characters)");
            result.isValid = false;
        }
        
        // Check local part characters
        for (char c : localPart) {
            if (!isalnum(c) && c != '.' && c != '_' && c != '-') {
                result.errors.push_back("Username contains invalid character: " + string(1, c));
                result.isValid = false;
                break;
            }
        }
        
        // Check if starts or ends with dot
        if (localPart.front() == '.' || localPart.back() == '.') {
            result.errors.push_back("Username cannot start or end with dot");
            result.isValid = false;
        }
    }
    
    // Validate domain part
    if (domainPart.empty()) {
        result.errors.push_back("Email must have domain after @");
        result.isValid = false;
    } else {
        // Check for at least one dot
        size_t dotPos = domainPart.find('.');
        if (dotPos == string::npos) {
            result.errors.push_back("Domain must contain at least one dot");
            result.isValid = false;
            result.suggestion = email + ".com";
        }
        
        // Check domain length
        if (domainPart.length() > 253) {
            result.errors.push_back("Domain part too long (max 253 characters)");
            result.isValid = false;
        }
        
        // Check domain characters
        for (char c : domainPart) {
            if (!isalnum(c) && c != '.' && c != '-') {
                result.errors.push_back("Domain contains invalid character: " + string(1, c));
                result.isValid = false;
                break;
            }
        }
        
        // Check if domain starts or ends with dot or dash
        if (domainPart.front() == '.' || domainPart.back() == '.' ||
            domainPart.front() == '-' || domainPart.back() == '-') {
            result.errors.push_back("Domain cannot start or end with dot or dash");
            result.isValid = false;
        }
        
        // Check for valid TLD (top-level domain)
        size_t lastDot = domainPart.rfind('.');
        if (lastDot != string::npos) {
            string tld = domainPart.substr(lastDot + 1);
            if (tld.length() < 2 || tld.length() > 6) {
                result.errors.push_back("Top-level domain must be 2-6 characters");
                result.isValid = false;
            }
            
            // Check TLD contains only letters
            for (char c : tld) {
                if (!isalpha(c)) {
                    result.errors.push_back("Top-level domain must contain only letters");
                    result.isValid = false;
                    break;
                }
            }
        }
    }
    
    return result;
}

int main() {
    vector<string> testEmails = {
        "user@domain.com",
        "test.email+tag@example.co.uk",
        "invalid.email",
        "@domain.com",
        "user@",
        "user@domain",
        "user..double.dot@domain.com",
        "user@domain.c",
        "user@domain.toolongTLD",
        "valid_user123@test-domain.org",
        ""
    };
    
    cout << "Email Validation Test" << endl;
    cout << "=====================" << endl;
    
    for (const string& email : testEmails) {
        cout << "\nTesting: \"" << email << "\"" << endl;
        
        ValidationResult result = validateEmail(email);
        
        if (result.isValid) {
            cout << "✓ Valid email address" << endl;
        } else {
            cout << "✗ Invalid email address" << endl;
            cout << "Errors:" << endl;
            for (const string& error : result.errors) {
                cout << "  - " << error << endl;
            }
            
            if (!result.suggestion.empty()) {
                cout << "Suggestion: " << result.suggestion << endl;
            }
        }
    }
    
    return 0;
}
```

**📝 Explanation:**
- **Comprehensive Validation**: Multiple validation rules for email format
- **Structured Results**: Custom struct to return validation status and errors
- **Detailed Error Messages**: Specific feedback for each validation failure
- **Domain Analysis**: TLD validation and character checking
- **Suggestions**: Automatic correction suggestions for common mistakes

---

### **Example 12: Advanced Word Frequency Analyzer**
```cpp
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cctype>
using namespace std;

class WordFrequencyAnalyzer {
private:
    map<string, int> wordCount;
    int totalWords;
    
    string cleanWord(const string& word) {
        string cleaned = "";
        for (char c : word) {
            if (isalpha(c)) {
                cleaned += tolower(c);
            }
        }
        return cleaned;
    }
    
public:
    WordFrequencyAnalyzer() : totalWords(0) {}
    
    void analyzeText(const string& text) {
        stringstream ss(text);
        string word;
        
        while (ss >> word) {
            string cleanedWord = cleanWord(word);
            if (!cleanedWord.empty() && cleanedWord.length() >= 3) { // Ignore short words
                wordCount[cleanedWord]++;
                totalWords++;
            }
        }
    }
    
    void printTopWords(int n = 10) {
        // Convert map to vector of pairs for sorting
        vector<pair<string, int>> wordPairs;
        for (const auto& pair : wordCount) {
            wordPairs.push_back(pair);
        }
        
        // Sort by frequency (descending)
        sort(wordPairs.begin(), wordPairs.end(), 
             [](const pair<string, int>& a, const pair<string, int>& b) {
                 return a.second > b.second;
             });
        
        cout << "Top " << min(n, (int)wordPairs.size()) << " Most Frequent Words:" << endl;
        cout << "=======================================" << endl;
        
        for (int i = 0; i < min(n, (int)wordPairs.size()); i++) {
            double percentage = (double)wordPairs[i].second / totalWords * 100;
            
            cout << (i + 1) << ". \"" << wordPairs[i].first << "\" - " 
                 << wordPairs[i].second << " times (" 
                 << fixed << setprecision(1) << percentage << "%)" << endl;
        }
    }
    
    void printStatistics() {
        cout << "\nText Statistics:" << endl;
        cout << "================" << endl;
        cout << "Total words analyzed: " << totalWords << endl;
        cout << "Unique words: " << wordCount.size() << endl;
        
        if (!wordCount.empty()) {
            // Find words that appear only once (hapax legomena)
            vector<string> hapaxLegomena;
            for (const auto& pair : wordCount) {
                if (pair.second == 1) {
                    hapaxLegomena.push_back(pair.first);
                }
            }
            
            cout << "Words appearing once: " << hapaxLegomena.size() << endl;
            
            // Vocabulary richness (unique words / total words)
            double richness = (double)wordCount.size() / totalWords * 100;
            cout << "Vocabulary richness: " << fixed << setprecision(1) 
                 << richness << "%" << endl;
            
            // Average word frequency
            double avgFreq = (double)totalWords / wordCount.size();
            cout << "Average word frequency: " << fixed << setprecision(2) 
                 << avgFreq << endl;
        }
    }
    
    void printWordCloud(int maxWidth = 50) {
        cout << "\nWord Cloud (visual frequency):" << endl;
        cout << "==============================" << endl;
        
        // Find maximum frequency for scaling
        int maxFreq = 0;
        for (const auto& pair : wordCount) {
            maxFreq = max(maxFreq, pair.second);
        }
        
        // Convert to vector and sort by frequency
        vector<pair<string, int>> wordPairs;
        for (const auto& pair : wordCount) {
            wordPairs.push_back(pair);
        }
        
        sort(wordPairs.begin(), wordPairs.end(), 
             [](const pair<string, int>& a, const pair<string, int>& b) {
                 return a.second > b.second;
             });
        
        // Display top words with visual representation
        for (int i = 0; i < min(15, (int)wordPairs.size()); i++) {
            const auto& pair = wordPairs[i];
            int barLength = (pair.second * maxWidth) / maxFreq;
            if (barLength < 1) barLength = 1;
            
            cout << setw(12) << left << pair.first << " ";
            for (int j = 0; j < barLength; j++) {
                cout << "█";
            }
            cout << " " << pair.second << endl;
        }
    }
    
    vector<string> findWordsWithPattern(const string& pattern) {
        vector<string> matches;
        
        for (const auto& pair : wordCount) {
            if (pair.first.find(pattern) != string::npos) {
                matches.push_back(pair.first);
            }
        }
        
        return matches;
    }
};

int main() {
    string sampleText = R"(
        Artificial intelligence is transforming the way we work and live. 
        Machine learning algorithms can process vast amounts of data and 
        identify patterns that humans might miss. Deep learning networks 
        mimic the structure of human neural networks, enabling computers 
        to recognize images, understand speech, and even generate creative 
        content. The applications of artificial intelligence are vast and 
        growing rapidly. In healthcare, AI can help diagnose diseases and 
        recommend treatments. In transportation, autonomous vehicles use 
        AI to navigate safely. In finance, AI algorithms detect fraudulent 
        transactions and make investment decisions. The future of artificial 
        intelligence is bright, but it also raises important questions about 
        ethics, privacy, and the impact on employment.
    )";
    
    WordFrequencyAnalyzer analyzer;
    
    cout << "Analyzing text..." << endl;
    analyzer.analyzeText(sampleText);
    
    analyzer.printStatistics();
    analyzer.printTopWords(10);
    analyzer.printWordCloud();
    
    // Search for words containing specific patterns
    cout << "\nWords containing 'ing':" << endl;
    vector<string> ingWords = analyzer.findWordsWithPattern("ing");
    for (const string& word : ingWords) {
        cout << "- " << word << endl;
    }
    
    return 0;
}
```

**📝 Explanation:**
- **Object-Oriented Design**: Class-based approach for reusability
- **Advanced Sorting**: Lambda functions for custom sorting criteria
- **Statistical Analysis**: Vocabulary richness, hapax legomena
- **Data Visualization**: ASCII-based word cloud and bar charts
- **Pattern Matching**: Find words containing specific substrings

---

### **Example 13: String Distance Calculator (Levenshtein)**
```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class StringDistance {
public:
    static int levenshteinDistance(const string& str1, const string& str2) {
        int m = str1.length();
        int n = str2.length();
        
        // Create DP table
        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
        
        // Initialize base cases
        for (int i = 0; i <= m; i++) {
            dp[i][0] = i; // Deletions
        }
        for (int j = 0; j <= n; j++) {
            dp[0][j] = j; // Insertions
        }
        
        // Fill the DP table
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (str1[i-1] == str2[j-1]) {
                    dp[i][j] = dp[i-1][j-1]; // No operation needed
                } else {
                    dp[i][j] = 1 + min({
                        dp[i-1][j],     // Deletion
                        dp[i][j-1],     // Insertion
                        dp[i-1][j-1]    // Substitution
                    });
                }
            }
        }
        
        return dp[m][n];
    }
    
    static double similarity(const string& str1, const string& str2) {
        int maxLen = max(str1.length(), str2.length());
        if (maxLen == 0) return 1.0; // Both empty strings
        
        int distance = levenshteinDistance(str1, str2);
        return 1.0 - (double)distance / maxLen;
    }
    
    static vector<string> getEditOperations(const string& str1, const string& str2) {
        int m = str1.length();
        int n = str2.length();
        
        // Create DP table
        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
        
        // Initialize base cases
        for (int i = 0; i <= m; i++) dp[i][0] = i;
        for (int j = 0; j <= n; j++) dp[0][j] = j;
        
        // Fill the DP table
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (str1[i-1] == str2[j-1]) {
                    dp[i][j] = dp[i-1][j-1];
                } else {
                    dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
                }
            }
        }
        
        // Backtrack to find operations
        vector<string> operations;
        int i = m, j = n;
        
        while (i > 0 || j > 0) {
            if (i > 0 && j > 0 && str1[i-1] == str2[j-1]) {
                // Characters match
                i--; j--;
            } else if (i > 0 && j > 0 && dp[i][j] == dp[i-1][j-1] + 1) {
                // Substitution
                operations.push_back("Substitute '" + string(1, str1[i-1]) + 
                                   "' with '" + string(1, str2[j-1]) + 
                                   "' at position " + to_string(i-1));
                i--; j--;
            } else if (i > 0 && dp[i][j] == dp[i-1][j] + 1) {
                // Deletion
                operations.push_back("Delete '" + string(1, str1[i-1]) + 
                                   "' at position " + to_string(i-1));
                i--;
            } else if (j > 0 && dp[i][j] == dp[i][j-1] + 1) {
                // Insertion
                operations.push_back("Insert '" + string(1, str2[j-1]) + 
                                   "' at position " + to_string(i));
                j--;
            }
        }
        
        reverse(operations.begin(), operations.end());
        return operations;
    }
    
    static string findClosestMatch(const string& target, const vector<string>& candidates) {
        string closest = "";
        double bestSimilarity = -1.0;
        
        for (const string& candidate : candidates) {
            double sim = similarity(target, candidate);
            if (sim > bestSimilarity) {
                bestSimilarity = sim;
                closest = candidate;
            }
        }
        
        return closest;
    }
};

int main() {
    cout << "String Distance and Similarity Analysis" << endl;
    cout << "=======================================" << endl;
    
    // Test pairs
    vector<pair<string, string>> testPairs = {
        {"kitten", "sitting"},
        {"programming", "programing"},
        {"hello", "helo"},
        {"algorithm", "logarithm"},
        {"computer", "commuter"},
        {"", "abc"},
        {"same", "same"}
    };
    
    for (const auto& pair : testPairs) {
        cout << "\nComparing: \"" << pair.first << "\" vs \"" << pair.second << "\"" << endl;
        
        int distance = StringDistance::levenshteinDistance(pair.first, pair.second);
        double sim = StringDistance::similarity(pair.first, pair.second);
        
        cout << "Edit distance: " << distance << endl;
        cout << "Similarity: " << (sim * 100) << "%" << endl;
        
        vector<string> operations = StringDistance::getEditOperations(pair.first, pair.second);
        
        if (!operations.empty()) {
            cout << "Edit operations:" << endl;
            for (const string& op : operations) {
                cout << "  - " << op << endl;
            }
        }
    }
    
    // Spell checking example
    cout << "\n\nSpell Checking Example:" << endl;
    cout << "=======================" << endl;
    
    vector<string> dictionary = {
        "programming", "algorithm", "computer", "science", "technology",
        "software", "hardware", "development", "engineering", "mathematics"
    };
    
    vector<string> misspelledWords = {"programing", "algoritm", "compter", "sofware"};
    
    for (const string& misspelled : misspelledWords) {
        string suggestion = StringDistance::findClosestMatch(misspelled, dictionary);
        double sim = StringDistance::similarity(misspelled, suggestion);
        
        cout << "Misspelled: \"" << misspelled << "\"" << endl;
        cout << "Suggestion: \"" << suggestion << "\" (similarity: " 
             << (sim * 100) << "%)" << endl;
        
        int distance = StringDistance::levenshteinDistance(misspelled, suggestion);
        cout << "Edit distance: " << distance << endl << endl;
    }
    
    return 0;
}
```

**📝 Explanation:**
- **Dynamic Programming**: Levenshtein distance algorithm implementation
- **Backtracking**: Reconstruct actual edit operations performed
- **Similarity Metrics**: Convert distance to percentage similarity
- **Practical Application**: Spell checking and closest match finding
- **Class Design**: Static methods for utility functions

---

### **Example 14: JSON Parser (Simplified)**
```cpp
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>
using namespace std;

class SimpleJSONParser {
private:
    map<string, string> data;
    
    string trim(const string& str) {
        size_t start = str.find_first_not_of(" \t\n\r");
        if (start == string::npos) return "";
        
        size_t end = str.find_last_not_of(" \t\n\r");
        return str.substr(start, end - start + 1);
    }
    
    string removeQuotes(const string& str) {
        string trimmed = trim(str);
        if (trimmed.length() >= 2 && trimmed.front() == '"' && trimmed.back() == '"') {
            return trimmed.substr(1, trimmed.length() - 2);
        }
        return trimmed;
    }
    
    bool isValidJSON(const string& json) {
        string trimmed = trim(json);
        return !trimmed.empty() && 
               trimmed.front() == '{' && 
               trimmed.back() == '}';
    }
    
public:
    bool parse(const string& json) {
        data.clear();
        
        if (!isValidJSON(json)) {
            cout << "Error: Invalid JSON format (must start with { and end with })" << endl;
            return false;
        }
        
        // Remove outer braces
        string content = json.substr(1, json.length() - 2);
        content = trim(content);
        
        if (content.empty()) {
            return true; // Empty object is valid
        }
        
        // Split by commas (simple approach)
        vector<string> pairs;
        string current = "";
        int quoteCount = 0;
        
        for (char c : content) {
            if (c == '"') {
                quoteCount++;
            }
            
            if (c == ',' && quoteCount % 2 == 0) {
                // We're outside quotes, so this comma separates pairs
                if (!current.empty()) {
                    pairs.push_back(current);
                    current = "";
                }
            } else {
                current += c;
            }
        }
        
        if (!current.empty()) {
            pairs.push_back(current);
        }
        
        // Parse each key-value pair
        for (const string& pair : pairs) {
            size_t colonPos = pair.find(':');
            if (colonPos == string::npos) {
                cout << "Error: Invalid key-value pair (missing colon): " << pair << endl;
                return false;
            }
            
            string key = trim(pair.substr(0, colonPos));
            string value = trim(pair.substr(colonPos + 1));
            
            // Remove quotes from key and value
            key = removeQuotes(key);
            value = removeQuotes(value);
            
            if (key.empty()) {
                cout << "Error: Empty key in pair: " << pair << endl;
                return false;
            }
            
            data[key] = value;
        }
        
        return true;
    }
    
    string getValue(const string& key) {
        auto it = data.find(key);
        return (it != data.end()) ? it->second : "";
    }
    
    bool hasKey(const string& key) {
        return data.find(key) != data.end();
    }
    
    void printAll() {
        cout << "Parsed JSON data:" << endl;
        cout << "=================" << endl;
        
        if (data.empty()) {
            cout << "(empty object)" << endl;
            return;
        }
        
        for (const auto& pair : data) {
            cout << "Key: \"" << pair.first << "\" -> Value: \"" << pair.second << "\"" << endl;
        }
    }
    
    string toJSON() {
        if (data.empty()) {
            return "{}";
        }
        
        string result = "{";
        bool first = true;
        
        for (const auto& pair : data) {
            if (!first) {
                result += ",";
            }
            result += "\"" + pair.first + "\":\"" + pair.second + "\"";
            first = false;
        }
        
        result += "}";
        return result;
    }
    
    int size() {
        return data.size();
    }
    
    vector<string> getKeys() {
        vector<string> keys;
        for (const auto& pair : data) {
            keys.push_back(pair.first);
        }
        return keys;
    }
};

int main() {
    cout << "Simple JSON Parser Test" << endl;
    cout << "=======================" << endl;
    
    vector<string> testJSONs = {
        R"({"name":"John","age":"25","city":"New York"})",
        R"({"title": "Software Engineer", "experience": "5 years", "skills": "C++, Python"})",
        R"({})",
        R"({"single":"value"})",
        R"({"invalid":})",
        R"({"name":"John","age":"25",})", // Trailing comma
        R"(invalid json)",
        R"({"nested": "not supported", "array": "not supported"})"
    };
    
    for (int i = 0; i < testJSONs.size(); i++) {
        cout << "\nTest " << (i + 1) << ":" << endl;
        cout << "Input: " << testJSONs[i] << endl;
        
        SimpleJSONParser parser;
        bool success = parser.parse(testJSONs[i]);
        
        if (success) {
            cout << "✓ Parsing successful!" << endl;
            parser.printAll();
            
            cout << "Total keys: " << parser.size() << endl;
            
            // Test key access
            vector<string> keys = parser.getKeys();
            if (!keys.empty()) {
                cout << "Testing key access:" << endl;
                for (const string& key : keys) {
                    cout << "  " << key << " = \"" << parser.getValue(key) << "\"" << endl;
                }
                
                // Test reconstruction
                cout << "Reconstructed JSON: " << parser.toJSON() << endl;
            }
        } else {
            cout << "✗ Parsing failed!" << endl;
        }
        
        cout << string(50, '-') << endl;
    }
    
    return 0;
}
```

**📝 Explanation:**
- **JSON Parsing**: Simple parser for key-value JSON objects
- **String Manipulation**: Trimming, quote removal, splitting by delimiters
- **Error Handling**: Validation with specific error messages
- **Data Storage**: Using `map<string, string>` for key-value pairs
- **Reconstruction**: Converting parsed data back to JSON format

---

## 🔴 **HARD LEVEL (Examples 15-20)**

### **Example 15: Regular Expression Engine (Basic)**
```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BasicRegex {
private:
    string pattern;
    
    bool matchHere(const string& text, int textPos, const string& pat, int patPos) {
        // End of pattern reached
        if (patPos >= pat.length()) {
            return true;
        }
        
        // Handle * (zero or more of previous character)
        if (patPos + 1 < pat.length() && pat[patPos + 1] == '*') {
            return matchStar(text, textPos, pat[patPos], pat, patPos + 2);
        }
        
        // Handle . (any character) or exact match
        if (textPos < text.length() && 
            (pat[patPos] == '.' || pat[patPos] == text[textPos])) {
            return matchHere(text, textPos + 1, pat, patPos + 1);
        }
        
        return false;
    }
    
    bool matchStar(const string& text, int textPos, char c, const string& pat, int patPos) {
        // Try matching zero occurrences first
        if (matchHere(text, textPos, pat, patPos)) {
            return true;
        }
        
        // Try matching one or more occurrences
        while (textPos < text.length() && (c == '.' || c == text[textPos])) {
            textPos++;
            if (matchHere(text, textPos, pat, patPos)) {
                return true;
            }
        }
        
        return false;
    }
    
public:
    BasicRegex(const string& pat) : pattern(pat) {}
    
    bool match(const string& text) {
        // Try matching at every position in text
        for (int i = 0; i <= text.length(); i++) {
            if (matchHere(text, i, pattern, 0)) {
                return true;
            }
        }
        return false;
    }
    
    vector<pair<int, string>> findAll(const string& text) {
        vector<pair<int, string>> matches;
        
        for (int start = 0; start < text.length(); start++) {
            for (int end = start; end <= text.length(); end++) {
                string candidate = text.substr(start, end - start);
                
                // Create a temporary regex for exact matching
                BasicRegex tempRegex(pattern);
                if (end > start && tempRegex.matchExact(candidate)) {
                    matches.push_back({start, candidate});
                    break; // Take the first match at this position
                }
            }
        }
        
        return matches;
    }
    
    bool matchExact(const string& text) {
        return matchHere(text, 0, pattern, 0) && 
               getMatchLength(text, 0, pattern, 0) == text.length();
    }
    
    int getMatchLength(const string& text, int textPos, const string& pat, int patPos) {
        int originalPos = textPos;
        
        while (patPos < pat.length() && textPos <= text.length()) {
            if (patPos + 1 < pat.length() && pat[patPos + 1] == '*') {
                // Handle * pattern
                char c = pat[patPos];
                patPos += 2; // Skip char and *
                
                // Match zero or more
                while (textPos < text.length() && (c == '.' || c == text[textPos])) {
                    textPos++;
                }
            } else if (textPos < text.length() && 
                      (pat[patPos] == '.' || pat[patPos] == text[textPos])) {
                textPos++;
                patPos++;
            } else {
                break;
            }
        }
        
        return (patPos >= pat.length()) ? textPos - originalPos : -1;
    }
    
    string replace(const string& text, const string& replacement) {
        string result = "";
        int lastEnd = 0;
        
        vector<pair<int, string>> matches = findAll(text);
        
        for (const auto& match : matches) {
            // Add text before match
            result += text.substr(lastEnd, match.first - lastEnd);
            // Add replacement
            result += replacement;
            lastEnd = match.first + match.second.length();
        }
        
        // Add remaining text
        result += text.substr(lastEnd);
        
        return result;
    }
};

int main() {
    cout << "Basic Regular Expression Engine" << endl;
    cout << "===============================" << endl;
    
    // Test cases: pattern -> test strings
    vector<pair<string, vector<string>>> tests = {
        {"a.c", {"abc", "axc", "a1c", "ac", "abcd"}},
        {"a*", {"", "a", "aa", "aaa", "b", "ba"}},
        {"ab*", {"a", "ab", "abb", "abbb", "ac", "abc"}},
        {".*", {"hello", "", "123", "!@#"}},
        {"c*a*t", {"cat", "ccat", "caat", "ccaat", "t", "ca"}},
        {"h.llo", {"hello", "hallo", "h3llo", "hllo", "helllo"}}
    };
    
    for (const auto& test : tests) {
        cout << "\nPattern: \"" << test.first << "\"" << endl;
        cout << "Testing against:" << endl;
        
        BasicRegex regex(test.first);
        
        for (const string& str : test.second) {
            bool matches = regex.match(str);
            bool exactMatch = regex.matchExact(str);
            
            cout << "  \"" << str << "\" -> " 
                 << (matches ? "✓" : "✗") << " match, "
                 << (exactMatch ? "✓" : "✗") << " exact" << endl;
        }
    }
    
    // Test find all functionality
    cout << "\n\nFind All Matches:" << endl;
    cout << "=================" << endl;
    
    string text = "The cat in the hat sat on the mat";
    vector<string> patterns = {"c.t", "h.t", ".at"};
    
    for (const string& pat : patterns) {
        cout << "\nText: \"" << text << "\"" << endl;
        cout << "Pattern: \"" << pat << "\"