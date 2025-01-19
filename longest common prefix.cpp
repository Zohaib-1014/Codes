/* Common prefix for example if array is {flower, flight ,fly } then the common prefix is fl. 
to find the common prefix firstly assuming the first string in the array is the longest common
prefix. 
start form second one and then compare it with first one which we assume.
if secnd one share a commmon prefix then we update the prefix 
we also count the total prefix 
*/ 
#include <iostream>
#include <string>
using namespace std;

string longestCommonPrefix(string strs[], int n) 
{
    if (n == 0) 
	return ""; 
    
    string prefix = strs[0]; 
    
    for (int i = 1; i < n; i++) 
	{
        int j = 0;
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j])
		{
            j++;
        }
        prefix = prefix.substr(0, j);
    
        if (prefix == "") 
		{
            return "";
        }
    }
    return prefix;
}

int main() {
    string strs[] = {"flower", "flow", "flight"};
    int n = sizeof(strs) / sizeof(strs[0]);
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs, n) << endl;
    
    return 0;
}

