/*Remove duplicate from sorted array 
in this code we want to remove the duplicate elements/value from array and we create the array 
and place the unique number/value/element 
firstly make the example array 
call the removeduplicate function from main function 
now move to the removeduplicate function with two parameters num and size 
in this funciton firstly we check if size is equal to zero then return 0 and code end 
in next line we initialize the uniqueindex with 1 because uniqueindex is the place where the next 
unique element place becaue in the array the first element is always consider unique
we compare the frist index which is the second element of the aray with first element which is in 
zero index. if the second element is not equal to the first element place the second element in the 
array beacuse both are unique number 
change the location of the unique index for placing and checking/comparing the next numbers which is
in array 
in the end with the help of for loop we show the sorted array and in this array no duplicate number
exist
*/
#include <iostream>
using namespace std;

int removeDuplicates(int nums[], int size) {
    if (size == 0) return 0;  
    int uniqueIndex = 1;  
    
   
    for (int i = 1; i < size; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[uniqueIndex] = nums[i];  
            uniqueIndex++;  
        }
    }
    
    return uniqueIndex; 
}

int main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    int k = removeDuplicates(nums, size); 
    
    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";  
    }
    cout << endl;

    return 0;
}

