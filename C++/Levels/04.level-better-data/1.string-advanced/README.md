# 🔤 **Strings Advanced in C++ - Complete Learning Journey**

## 🎯 **What You'll Learn:**
- Advanced string class methods and operations
- String manipulation and text processing algorithms
- Pattern matching and searching techniques
- Text analysis and formatting
- Real-world string applications
- 40 hands-on exercises from beginner to advanced

---

## 📚 **Part 1: Advanced String Basics**

### **What are Advanced Strings?**
Beyond basic string operations, advanced strings involve:
```
Text Processing Pipeline:
Input String → Analyze → Transform → Validate → Output
    ↓            ↓         ↓          ↓         ↓
"Hello World" → Length=11 → "HELLO" → Valid → Display
```

### **Why Advanced String Operations Matter?**
```cpp
// Basic string operations (you already know these):
string name = "John";
cout << name.length();  // 4

// Advanced string operations (what we'll master):
string text = "The quick brown fox jumps over the lazy dog";
// - Extract every 3rd word
// - Count letter frequencies  
// - Find longest word
// - Replace patterns
// - Validate formats (emails, phone numbers)
// - Text encryption/decryption
```

### **Essential Advanced String Methods:**
```cpp
string text = "Programming is fun and challenging!";

// Searching methods
text.find("fun")                    // Returns position of substring
text.find("fun", 5)                 // Search starting from position 5
text.rfind("ing")                   // Find last occurrence
text.find_first_of("aeiou")         // Find first vowel
text.find_last_of("aeiou")          // Find last vowel
text.find_first_not_of("Prog")      // Find first non-matching char

// Substring operations
text.substr(0, 11)                  // Extract "Programming"
text.substr(12)                     // Extract "is fun and challenging!"
text.substr(12, 6)                  // Extract "is fun"

// Modification methods
text.insert(11, " really")          // Insert text at position
text.erase(5, 3)                    // Remove 3 chars starting at pos 5
text.replace(12, 2, "was")          // Replace "is" with "was"
text.append(" indeed!")             // Add to end (same as +=)

// Comparison methods
text.compare("other")               // Returns <0, 0, or >0
text == "exact match"               // Boolean comparison
text < "alphabetically"             // Lexicographic comparison

// Character operations
text[0] = toupper(text[0])          // Capitalize first letter
text.front()                        // First character
text.back()                         // Last character
text.at(5)                          // Safe access with bounds checking
```

### **Character Classification Functions:**
```cpp
#include <cctype>

char c = 'A';
isalpha(c)      // Is letter? (A-Z, a-z)
isdigit(c)      // Is digit? (0-9)  
isalnum(c)      // Is alphanumeric?
isupper(c)      // Is uppercase?
islower(c)      // Is lowercase?
isspace(c)      // Is whitespace?
ispunct(c)      // Is punctuation?
toupper(c)      // Convert to uppercase
tolower(c)      // Convert to lowercase
```

---

## 🟢 **Part 2: Super Easy String Advanced Exercises (1-20)**

### **Exercise 1: String Information Center**
**Task**: Create a program that analyzes basic string properties.

**Requirements**:
- Input string: `"Hello, World! How are you today?"`
- Display: total length, number of letters, digits, spaces, punctuation
- Show first and last characters
- Count uppercase and lowercase letters

**Expected Output**:
```
Text: "Hello, World! How are you today?"
Total length: 35
Letters: 26
Digits: 0
Spaces: 6
Punctuation: 3
First character: 'H'
Last character: '?'
Uppercase letters: 3
Lowercase letters: 23
```

**Hint**: Use `isalpha()`, `isdigit()`, `isspace()`, `ispunct()`, `isupper()`, `islower()`.

---

### **Exercise 2: Case Converter**
**Task**: Convert strings between different case formats.

**Requirements**:
- Input: `"programming IS fun"`
- Convert to: UPPERCASE, lowercase, Title Case, aLtErNaTiNg CaSe
- Display original and all conversions

**Expected Output**:
```
Original: programming IS fun
UPPERCASE: PROGRAMMING IS FUN
lowercase: programming is fun  
Title Case: Programming Is Fun
aLtErNaTiNg: pRoGrAmMiNg Is FuN
```

**Hint**: Use `toupper()`, `tolower()`, and track word boundaries for Title Case.

---

### **Exercise 3: Vowel and Consonant Counter**
**Task**: Analyze vowels and consonants in a string with detailed breakdown.

**Requirements**:
- String: `"Education is the key to success"`
- Count each vowel (a, e, i, o, u) separately
- Count total consonants
- Show vowel distribution percentage

**Expected Output**:
```
Text: "Education is the key to success"
Vowel breakdown:
a: 1 (4.8%)
e: 4 (19.0%)  
i: 2 (9.5%)
o: 2 (9.5%)
u: 3 (14.3%)
Total vowels: 12 (57.1%)
Total consonants: 9 (42.9%)
Total letters: 21
```

**Hint**: Use `find_first_of("aeiouAEIOU")` or check each character individually.

---

### **Exercise 4: Word Extractor**
**Task**: Extract and display all words from a sentence.

**Requirements**:
- Input: `"The quick brown fox jumps over the lazy dog"`
- Extract each word separately
- Number the words
- Show total word count and average word length

**Expected Output**:
```
Sentence: "The quick brown fox jumps over the lazy dog"
Words extracted:
1. The (3 letters)
2. quick (5 letters)
3. brown (5 letters)
4. fox (3 letters)
5. jumps (5 letters)
6. over (4 letters)
7. the (3 letters)
8. lazy (4 letters)
9. dog (3 letters)

Total words: 9
Average word length: 3.9 letters
```

**Hint**: Use spaces as delimiters, track word boundaries.

---

### **Exercise 5: String Reverser Pro**
**Task**: Reverse strings in multiple ways.

**Requirements**:
- Input: `"Hello World"`
- Show: character reverse, word reverse, alternating character reverse
- Keep original string unchanged

**Expected Output**:
```
Original: Hello World
Character reverse: dlroW olleH
Word reverse: World Hello
Alternating reverse: Hllo orlde W (every 2nd char reversed)
```

**Hint**: Use different algorithms for each type of reversal.

---

### **Exercise 6: Character Position Finder**
**Task**: Find all positions of a specific character in a string.

**Requirements**:
- String: `"programming"`
- Search character: `'r'`
- Find all occurrences and their positions
- Show total count

**Expected Output**:
```
String: programming
Searching for: 'r'
Found at positions: 1, 6
Total occurrences: 2
Context:
Position 1: p[r]ogramming
Position 6: progr[r]amming
```

**Hint**: Use loop with `find()` method, starting search after last found position.

---

### **Exercise 7: Substring Extractor**
**Task**: Extract substrings based on user-specified positions and lengths.

**Requirements**:
- String: `"JavaScript is awesome"`
- Extract: characters 0-9, 11-12, 14-20
- Show each substring with its original position

**Expected Output**:
```
Original: JavaScript is awesome
Extractions:
[0-9]: JavaScript
[11-12]: is  
[14-20]: awesome
Combined: JavaScript is awesome
```

**Hint**: Use `substr(start, length)` method.

---

### **Exercise 8: String Comparison Tool**
**Task**: Compare two strings using different comparison methods.

**Requirements**:
- String1: `"Apple"`
- String2: `"apple"`
- Compare: exact match, case-insensitive, length, alphabetical order

**Expected Output**:
```
String 1: Apple
String 2: apple
Exact match: No
Case-insensitive match: Yes
Length comparison: Equal (5 characters each)
Alphabetical order: "Apple" comes before "apple"
Lexicographic value: -32
```

**Hint**: Use `compare()` method and manual case conversion for comparisons.

---

### **Exercise 9: String Pattern Validator**
**Task**: Check if a string follows specific patterns.

**Requirements**:
- Test strings: `"abc123"`, `"ABC"`, `"123456"`, `"!@#$"`
- Check patterns: all letters, all digits, all uppercase, all lowercase, mixed
- Report which patterns each string matches

**Expected Output**:
```
Testing: abc123
✓ Contains letters
✓ Contains digits  
✗ All letters
✗ All digits
✓ Mixed content

Testing: ABC
✓ All letters
✓ All uppercase
✗ Contains digits
✗ Mixed content
```

**Hint**: Use character classification functions in loops.

---

### **Exercise 10: String Trimmer**
**Task**: Remove whitespace from strings in different ways.

**Requirements**:
- String: `"   Hello   World   "`
- Show: left trim, right trim, full trim, internal space normalization
- Display before and after for each operation

**Expected Output**:
```
Original: "   Hello   World   " (length: 19)
Left trim: "Hello   World   " (length: 16)
Right trim: "   Hello   World" (length: 16)  
Full trim: "Hello   World" (length: 13)
Normalized: "Hello World" (length: 11)
```

**Hint**: Use `find_first_not_of(" ")` and `find_last_not_of(" ")` for trimming.

---

### **Exercise 11: Acronym Generator**
**Task**: Generate acronyms from phrases using different rules.

**Requirements**:
- Input: `"Central Processing Unit"`
- Generate: simple acronym (CPU), detailed acronym with periods (C.P.U.)
- Also try: `"Application Programming Interface"`

**Expected Output**:
```
Phrase: Central Processing Unit
Simple acronym: CPU
Detailed acronym: C.P.U.
First letters: C, P, U

Phrase: Application Programming Interface  
Simple acronym: API
Detailed acronym: A.P.I.
First letters: A, P, I
```

**Hint**: Extract first character of each word, skip words starting with lowercase or short words.

---

### **Exercise 12: String Encryption (Caesar Cipher)**
**Task**: Implement simple Caesar cipher encryption and decryption.

**Requirements**:
- Input: `"Hello"`
- Shift: 3 positions (A→D, B→E, etc.)
- Show encryption and decryption
- Handle both uppercase and lowercase

**Expected Output**:
```
Original: Hello
Shift amount: 3
Encrypted: Khoor
Decrypted back: Hello

Character mapping:
H (72) → K (75)
e (101) → h (104)  
l (108) → o (111)
l (108) → o (111)
o (111) → r (114)
```

**Hint**: Use ASCII values, handle wrap-around for end of alphabet.

---

### **Exercise 13: Palindrome Checker Pro**
**Task**: Check for palindromes with different rules.

**Requirements**:
- Test strings: `"racecar"`, `"A man a plan a canal Panama"`, `"race a car"`
- Check: simple palindrome, ignore spaces, ignore case and spaces, ignore all non-letters

**Expected Output**:
```
Testing: racecar
Simple palindrome: Yes
Ignore case: Yes
Clean palindrome: Yes

Testing: A man a plan a canal Panama  
Simple palindrome: No
Ignore spaces: No
Ignore case: No
Clean palindrome: Yes (amanaplanacanalpanama)

Testing: race a car
Simple palindrome: No
Clean palindrome: No
```

**Hint**: Create cleaned versions of string for comparison.

---

### **Exercise 14: String Statistics Calculator**
**Task**: Calculate comprehensive statistics for a text string.

**Requirements**:
- Input: `"The quick brown fox jumps over 123 lazy dogs!"`
- Calculate: character frequency, most/least common characters, unique character count
- Show frequency distribution

**Expected Output**:
```
Text: "The quick brown fox jumps over 123 lazy dogs!"
Total characters: 45
Unique characters: 23

Character frequency:
'o': 4 (8.9%)
' ': 8 (17.8%)
'u': 2 (4.4%)
'r': 3 (6.7%)
...

Most common: ' ' (8 times)
Least common: 'T', 'h', 'i', 'c'... (1 time each)
```

**Hint**: Use map or array to count character frequencies.

---

### **Exercise 15: Word Length Analyzer**
**Task**: Analyze word lengths in a sentence with detailed statistics.

**Requirements**:
- Input: `"Programming languages are powerful tools for software development"`
- Show: each word with length, shortest/longest words, length distribution
- Calculate average word length

**Expected Output**:
```
Sentence: "Programming languages are powerful tools for software development"
Word analysis:
1. Programming (11 chars) ████████████
2. languages (9 chars)   ██████████
3. are (3 chars)         ████
4. powerful (8 chars)    █████████
5. tools (5 chars)       ██████
6. for (3 chars)         ████
7. software (8 chars)    █████████
8. development (11 chars)████████████

Shortest words: are, for (3 characters)
Longest words: Programming, development (11 characters)
Average length: 7.25 characters
```

**Hint**: Split into words, calculate statistics, create visual representation.

---

### **Exercise 16: String Search and Replace**
**Task**: Find and replace text with various options.

**Requirements**:
- Text: `"The cat in the hat sat on the mat"`
- Replace "at" with "OP" in different ways: first occurrence, all occurrences, whole words only
- Show step-by-step replacements

**Expected Output**:
```
Original: The cat in the hat sat on the mat
Replace "at" with "OP":

First occurrence only:
The cOP in the hat sat on the mat

All occurrences:  
The cOP in the hOP sOP on the mOP

Whole words only:
The cat in the hat sat on the mat (no whole word "at" found)

Replace "the" with "THE" (case insensitive):
THE cat in THE hat sat on THE mat
```

**Hint**: Use `find()` and `replace()` methods, track positions for multiple replacements.

---

### **Exercise 17: Email Validator Basic**
**Task**: Validate email addresses using basic string operations.

**Requirements**:
- Test emails: `"user@domain.com"`, `"invalid.email"`, `"test@"`, `"@domain.com"`
- Check: contains @, has text before @, has domain after @, has extension
- Report validation results and specific issues

**Expected Output**:
```
Testing: user@domain.com
✓ Contains @ symbol
✓ Has username (user)  
✓ Has domain (domain.com)
✓ Has extension (.com)
Result: Valid email

Testing: invalid.email
✗ Missing @ symbol
Result: Invalid email

Testing: test@
✓ Contains @ symbol
✓ Has username (test)
✗ Missing domain
Result: Invalid email
```

**Hint**: Use `find('@')`, `substr()` to extract parts, validate each component.

---

### **Exercise 18: Text Formatter**
**Task**: Format text with different alignment and padding options.

**Requirements**:
- Text: `"Hello World"`
- Show: left-aligned (width 20), right-aligned (width 20), center-aligned (width 20)
- Use different padding characters: spaces, dashes, asterisks

**Expected Output**:
```
Original: Hello World (11 chars)

Left aligned (width 20):
"Hello World         "
"Hello World---------"  
"Hello World*********"

Right aligned (width 20):
"         Hello World"
"---------Hello World"
"*********Hello World"

Center aligned (width 20):
"    Hello World     "
"----Hello World-----"
"****Hello World*****"
```

**Hint**: Calculate padding needed, distribute padding for center alignment.

---

### **Exercise 19: String Compression**
**Task**: Implement basic string compression (run-length encoding).

**Requirements**:
- Input: `"aabbcccaaaa"`
- Compress consecutive identical characters
- Show original, compressed, and decompression verification

**Expected Output**:
```
Original: aabbcccaaaa (11 chars)
Compressed: a2b2c3a4 (8 chars)
Compression ratio: 27.3% savings

Decompression verification: aabbcccaaaa
Match original: Yes

Testing: abcdef
Original: abcdef (6 chars)
Compressed: a1b1c1d1e1f1 (12 chars)  
Compression ratio: -100% (expansion, compression not beneficial)
```

**Hint**: Count consecutive characters, build compressed string with counts.

---

### **Exercise 20: Name Parser**
**Task**: Parse full names into components and format them differently.

**Requirements**:
- Input: `"John Michael Smith Jr."`
- Extract: first name, middle name(s), last name, suffix
- Format as: Last, First Middle, First M. Last, initials

**Expected Output**:
```
Full name: John Michael Smith Jr.
Components:
- First name: John
- Middle name: Michael  
- Last name: Smith
- Suffix: Jr.

Formatted versions:
Formal: Smith, John Michael Jr.
Professional: John M. Smith Jr.
Initials: J.M.S.
Casual: John Smith
```

**Hint**: Split by spaces, identify suffix patterns, handle edge cases.

---

## 🟡 **Part 3: Advanced String Processing Exercises (21-40)**

### **Exercise 21: Advanced Pattern Matching**
**Task**: Find complex patterns in text using string operations.

**Requirements**:
- Text: `"The phone numbers are 123-456-7890 and (555) 123-4567, plus 9876543210"`
- Find patterns: phone numbers (multiple formats), email-like patterns, numbers
- Extract and validate each pattern found

**Expected Output**:
```
Text: "The phone numbers are 123-456-7890 and (555) 123-4567, plus 9876543210"

Phone number patterns found:
1. "123-456-7890" (format: XXX-XXX-XXXX)
2. "(555) 123-4567" (format: (XXX) XXX-XXXX)  
3. "9876543210" (format: XXXXXXXXXX)

Validation results:
✓ 123-456-7890: Valid US phone number
✓ (555) 123-4567: Valid US phone number
✓ 9876543210: Valid (10 digits)

Other numbers found: none
```

**Hint**: Use multiple search passes with different patterns, validate extracted strings.

---

### **Exercise 22: Text Diff Analyzer**
**Task**: Compare two texts and show differences character by character.

**Requirements**:
- Text1: `"The quick brown fox jumps"`
- Text2: `"The slow brown fox walks"`
- Show: differences, insertions, deletions, character-level changes
- Highlight changes visually

**Expected Output**:
```
Text 1: The quick brown fox jumps
Text 2: The slow brown fox walks

Character-by-character comparison:
Position 4-8: "quick" → "slow" (substitution)
Position 20-24: "jumps" → "walks" (substitution)

Detailed diff:
The [quick] brown fox [jumps]
The [slow]  brown fox [walks]

Changes:
- quick → slow (5 chars changed to 4 chars)
- jumps → walks (5 chars → 5 chars)
Total changes: 2 words, 9 characters affected
```

**Hint**: Compare strings character by character, group consecutive changes.

---

### **Exercise 23: Advanced Anagram Solver**
**Task**: Find all anagrams of a word from a dictionary list.

**Requirements**:
- Target word: `"listen"`
- Dictionary: `["silent", "enlist", "hello", "world", "inlets", "tinsel"]`
- Find all anagrams and group them
- Show character frequency analysis

**Expected Output**:
```
Target word: listen
Character signature: eilnst (sorted)

Checking dictionary:
✓ silent → eilnst (match!)
✓ enlist → eilnst (match!)  
✗ hello → ehllo (no match)
✗ world → dlorw (no match)
✓ inlets → eilnst (match!)
✓ tinsel → eilnst (match!)

Anagram group for "listen":
- silent
- enlist  
- inlets
- tinsel

Total anagrams found: 4
Character frequency: e:1, i:1, l:1, n:1, s:1, t:1
```

**Hint**: Sort characters in each word to create signature, compare signatures.

---

### **Exercise 24: String Template Engine**
**Task**: Create a simple template system with variable substitution.

**Requirements**:
- Template: `"Hello {name}, welcome to {place}! Today is {day}."`
- Variables: name="Alice", place="C++ Course", day="Monday"
- Support: variable substitution, missing variable handling, nested templates

**Expected Output**:
```
Template: "Hello {name}, welcome to {place}! Today is {day}."
Variables:
- name = Alice
- place = C++ Course  
- day = Monday

Result: "Hello Alice, welcome to C++ Course! Today is Monday."

Advanced template: "User {user} has {count} {item}{plural}"
Variables: user="Bob", count="5", item="book", plural="s"
Result: "User Bob has 5 books"

Missing variable test: "Hello {name}, your {missing} is ready"
Result: "Hello Alice, your {missing} is ready"
Warning: Variable 'missing' not found
```

**Hint**: Find `{variable}` patterns, replace with values from map/array.

---

### **Exercise 25: Word Frequency Distribution**
**Task**: Analyze word frequency in text with advanced statistics.

**Requirements**:
- Text: Large paragraph (provide sample text)
- Calculate: frequency distribution, most/least common words, hapax legomena (words appearing once)
- Show: histogram, percentile analysis, word cloud data

**Expected Output**:
```
Text analysis: "The quick brown fox jumps over the lazy dog. The dog was very lazy and the fox was quick."

Total words: 19
Unique words: 13

Frequency distribution:
"the": 4 times (21.1%) ████████████
"fox": 2 times (10.5%) ██████
"dog": 2 times (10.5%) ██████  
"was": 2 times (10.5%) ██████
"lazy": 2 times (10.5%) ██████
"quick": 2 times (10.5%) ██████
"brown": 1 time (5.3%) ███
...

Most frequent: "the" (4 occurrences)
Hapax legomena: brown, jumps, over, very, and (5 words)
Vocabulary richness: 68.4% (13 unique / 19 total)
```

**Hint**: Split text into words, use map to count frequencies, calculate statistics.

---

### **Exercise 26: Spelling Suggestion Engine**
**Task**: Suggest corrections for misspelled words using edit distance.

**Requirements**:
- Misspelled word: `"programing"` (missing 'm')
- Dictionary: `["programming", "program", "programs", "programmer"]`
- Calculate edit distance (insertions, deletions, substitutions)
- Rank suggestions by similarity

**Expected Output**:
```
Misspelled: programing
Dictionary: programming, program, programs, programmer

Edit distance calculations:
programing → programming: 1 edit (insert 'm' at position 7)
programing → program: 3 edits (delete 'i', 'n', 'g')  
programing → programs: 2 edits (delete 'i', 'n' + insert 's')
programing → programmer: 3 edits (delete 'i', 'n', 'g' + insert 'm', 'e', 'r')

Suggestions (ranked by similarity):
1. programming (edit distance: 1, confidence: 90%)
2. programs (edit distance: 2, confidence: 70%)
3. program (edit distance: 3, confidence: 60%)
4. programmer (edit distance: 3, confidence: 60%)
```

**Hint**: Implement Levenshtein distance algorithm, rank by minimum edits needed.

---

### **Exercise 27: Text Summarization (Extractive)**
**Task**: Create basic extractive text summarization.

**Requirements**:
- Input: Multi-sentence paragraph
- Extract: key sentences based on word frequency, sentence position, length
- Create: summary with top N sentences

**Expected Output**:
```
Original text (5 sentences, 45 words):
"Artificial intelligence is transforming technology. Machine learning algorithms can process vast amounts of data. Deep learning networks mimic human neural networks. AI applications are found in healthcare, finance, and transportation. The future of AI looks very promising."

Sentence scoring:
1. "AI applications are found in healthcare, finance, and transportation." (Score: 8.5)
2. "Artificial intelligence is transforming technology." (Score: 7.2)
3. "Machine learning algorithms can process vast amounts of data." (Score: 6.8)
4. "The future of AI looks very promising." (Score: 5.1)
5. "Deep learning networks mimic human neural networks." (Score: 4.9)

Summary (top 2 sentences):
"AI applications are found in healthcare, finance, and transportation. Artificial intelligence is transforming technology."

Compression ratio: 40% (18 words from 45 original words)
```

**Hint**: Score sentences based on word frequency, position, and other factors.

---

### **Exercise 28: Regular Expression Simulator**
**Task**: Create basic pattern matching similar to regex.

**Requirements**:
- Support patterns: `*` (zero or more), `?` (zero or one), `.` (any character)
- Text: `"hello world, help me"`
- Patterns: `"he*"`, `"wor.d"`, `"he?lp"`

**Expected Output**:
```
Text: "hello world, help me"

Pattern: "he*"
Matches:
- Position 0-4: "hello" (he + llo)
- Position 13-15: "help" (he + lp)

Pattern: "wor.d"  
Matches:
- Position 6-10: "world" (wor + l + d)

Pattern: "he?lp"
Matches:  
- Position 13-16: "help" (he + lp, ? matches nothing)

Pattern: "hel?o"
Matches:
- Position 0-4: "hello" (hel + l + o, ? matches 'l')
```

**Hint**: Implement simple pattern matching with recursive or iterative approach.

---

### **Exercise 29: Text Encryption (Advanced)**
**Task**: Implement multiple encryption algorithms.

**Requirements**:
- Text: `"SECRET MESSAGE"`
- Algorithms: Caesar cipher, Vigenère cipher, simple substitution
- Show encryption and decryption for each method

**Expected Output**:
```
Original: SECRET MESSAGE

1. Caesar Cipher (shift 5):
Encrypted: XJHWJY RJXXFLJ
Decrypted: SECRET MESSAGE

2. Vigenère Cipher (key: "KEY"):
Key pattern: KEYKEYKEYKEYK
Encrypted: CIAVIX QICCEKI  
Decrypted: SECRET MESSAGE

3. Substitution Cipher (A→Z, B→Y, etc.):
Alphabet: ABCDEFGHIJKLMNOPQRSTUVWXYZ
Cipher:   ZYXWVUTSRQPONMLKJIHGFEDCBA
Encrypted: HVXIVG NVHHZTV
Decrypted: SECRET MESSAGE

Security analysis:
- Caesar: Easy to break (26 possibilities)
- Vigenère: Moderate security (depends on key length)  
- Substitution: 26! possibilities, but vulnerable to frequency analysis
```

**Hint**: Implement each cipher separately, handle uppercase/lowercase and spaces.

---

### **Exercise 30: Advanced String Parsing**
**Task**: Parse structured data from strings (CSV, JSON-like, custom formats).

**Requirements**:
- CSV data: `"Name,Age,City\nJohn,25,NYC\nMary,30,LA\nBob,22,Chicago"`
- JSON-like: `"{'name':'John','age':25,'city':'NYC'}"`
- Parse and structure the data for display

**Expected Output**:
```
CSV Parsing:
Raw: "Name,Age,City\nJohn,25,NYC\nMary,30,LA\nBob,22,Chicago"

Parsed structure:
Headers: Name, Age, City
Row 1: John, 25, NYC  
Row 2: Mary, 30, LA
Row 3: Bob, 22, Chicago

JSON-like Parsing:
Raw: "{'name':'John','age':25,'city':'NYC'}"

Parsed structure:
name: John (string)
age: 25 (number)
city: NYC (string)

Data validation:
✓ All rows have 3 fields
✓ Age values are numeric
✓ No empty required fields
```

**Hint**: Split by delimiters, handle quoted strings, validate data types.

---

### **Exercise 31: String Compression Algorithms**
**Task**: Implement multiple string compression techniques.

**Requirements**:
- Text: `"aaabbccccdddeee"`
- Implement: Run-length encoding, Huffman-like frequency encoding, LZ77-like
- Compare compression ratios

**Expected Output**:
```
Original: "aaabbccccdddeee" (15 characters)

1. Run-Length Encoding:
Compressed: "a3b2c4d3e3" (10 characters)
Compression ratio: 33.3%

2. Frequency Encoding:
Character frequencies: a:3, b:2, c:4, d:3, e:3
Most frequent: c(4) → 0, a(3) → 1, d(3) → 10, e(3) → 11, b(2) → 100
Encoded: 111100010101011111 (18 bits vs 120 bits)
Compression ratio: 85%

3. Dictionary-Based:
Dictionary: {aa:1, bb:2, cc:3, dd:4, ee:5}  
Compressed: "1a2334e" (7 characters)
Compression ratio: 53.3%

Best compression: Frequency encoding (85% reduction)
```

**Hint**: Implement each algorithm separately, measure before/after sizes.

---

### **Exercise 32: Text Mining and Analysis**
**Task**: Extract insights from text using advanced analysis.

**Requirements**:
- Large text sample (provide news article or similar)
- Extract: named entities (people, places), sentiment indicators, key topics
- Generate: readability