/*plaindrome number: a number that reads the same forward and backward
 If the number is negative then it is not plaindrome 
 In three steps
 1- x % 10 (for taking the last digit of x )
 2- initially reversed=0 then reversed * 10 + (x % 10) 
 3- x = x /10 (remove the last digit of x ) 
 then repeat the process using while condition 
*/

#include <iostream>
using namespace std;
bool isPalindrome(int x) 
{
    if (x < 0) 
	{
        return false; 
    }
    int original = x;
    int reversed = 0;

    while (x > 0) 
	{
        reversed = reversed * 10 + x % 10;
        x = x / 10;
    }
    return original == reversed;
}

int main() {
    int x = 121; 
    
    if (isPalindrome(x)) 
	{
        cout << x << " is a palindrome." << endl;
    } 
	else 
	{
        cout << x << " is not palindrome." << endl;
    }
    return 0;
}

