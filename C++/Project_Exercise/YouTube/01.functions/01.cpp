#include <iostream>
using namespace std;

// String Repeat
// write doucmant for my code 
/**
 * Repeats the given string a specified number of times, inserting a separator after each repeat.
 *
 * Note:
 * - The implementation appends the separator after every repetition, including the last one.
 *   For example: stringrepeat("ab", 3, "#") -> "ab#ab#ab#"
 *
 * Parameters:
 * - st:   The substring to repeat.
 * - r:    Number of repetitions (r >= 0). If r == 0, returns an empty string.
 * - sep:  Separator appended after each repetition.
 *
 * Returns:
 * - A string composed of r repetitions of `st`, each followed by `sep`.
 *
 * Complexity:
 * - Time:  O(r * (|st| + |sep|))
 * - Space: O(r * (|st| + |sep|)) for the resulting string.
 *
 * Examples:
 * - stringrepeat("mohammed ", 3, "#") => "mohammed #mohammed #mohammed #"
 * - stringrepeat("x", 0, ",")        => ""
 */
string stringrepeat(string st, int r, string sep ) {
    string result;

for (int i=0; i < r; i++) {
    result += st + sep;
}


    return result;

}


int main () {


cout <<stringrepeat("mohammed ", 3 , "#") << endl;


    return 0;
}