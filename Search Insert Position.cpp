/* in this code We set two pointers left initialize with 0 and right with n-1
We calculate the middle index (left + right) / 2
If the middle value  is equal to the target we return that index.
If the target is greater than nums[mid] we search in the right part of the
array by updating left to mid + 1
If the target is smaller than nums[mid] we search in the left part by updating
right to mid - 1.
If the target is not found the left pointer will be the position
where the target should be inserted to keep the array sorted.
*/
#include <iostream>
using namespace std;
int searchInsertPosition(int nums[], int n, int target) 
{
    int left = 0;
    int right = n - 1;

    while (left <= right) 
	{
        int mid = (left + right) / 2;  

        if (nums[mid] == target) 
		{
            return mid;  
        }
     
        if (nums[mid] < target) 
		{
            left = mid + 1;  
        }
     
        else
		{
            right = mid - 1;  
        }
    }

    return left;
}
int main() 
{
    int nums[] = {1, 3, 5, 6};
    int target = 5;  
    
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = searchInsertPosition(nums, n, target);
    cout << "index is " << result << endl;

    return 0;
}

