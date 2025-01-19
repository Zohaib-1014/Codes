#include <iostream>
using namespace std;
int romanToInt(string s) 
{
    int total = 0;
    int n = s.length();
    
    // Traversing
    for (int i = 0; i < n; ++i) 
	{
        int currentVal = 0;
        int nextVal = 0;

        // Get the current characters value
        if (s[i] == 'I') currentVal = 1;
        else if (s[i] == 'V') currentVal = 5;
        else if (s[i] == 'X') currentVal = 10;
        else if (s[i] == 'L') currentVal = 50;
        else if (s[i] == 'C') currentVal = 100;
        else if (s[i] == 'D') currentVal = 500;
        else if (s[i] == 'M') currentVal = 1000;

        if (i + 1 < n) 
		{
            if (s[i + 1] == 'I') nextVal = 1;
            else if (s[i + 1] == 'V') nextVal = 5;
            else if (s[i + 1] == 'X') nextVal = 10;
            else if (s[i + 1] == 'L') nextVal = 50;
            else if (s[i + 1] == 'C') nextVal = 100;
            else if (s[i + 1] == 'D') nextVal = 500;
            else if (s[i + 1] == 'M') nextVal = 1000;
        }

        if (currentVal < nextVal) {
            total = total - currentVal;
        } else {
            total =total + currentVal;
        }
    }
    
    return total;
}
int main() 
{
    string roman = "IX";  
    cout << "Roman numeral " << roman << " is equal to "<< romanToInt(roman) << endl;

    roman = "LVIII";
    cout << "Roman numeral " << roman << " is equal to "<< romanToInt(roman) << endl;

    roman = "MCMXCIV";
    cout << "Roman numeral " << roman << " is equal to "<< romanToInt(roman) << endl;
    return 0;
}

