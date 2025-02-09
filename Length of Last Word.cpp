/*
in this code Start by skipping over any spaces at the end of the string.
This is done in the first while loop  which moves the index i backward as long as there are spaces.
Once you find the last non-space character start counting characters in the second
while loop until you hit a space or the beginning of the string.
The variable length will contain the length of the last word when the loop finish.
*/
include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int length = 0;
    int n = s.length();
    
    // Start from the end of the string and skip any trailing spaces
    int i = n - 1;
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    
    // Now count the characters of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }
    
    return length;
}

int main() {
    string s = "Hello World  ";  // Example input string
    cout << "Length of the last word: " << lengthOfLastWord(s) << endl;  // Output will be 5 (for "World")
    
    return 0;
}

