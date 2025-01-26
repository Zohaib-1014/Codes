/*Remove element 
in this code we simple remove the elements from the array 
firstly we make the array from which we remove the element 
in this code we remove the value =3 
to solve this we use loop for transversing and check every element in the array and compare the 
element if it is equal to the 3 then remove it and move to the second element and then compare it 
and vice versa 
in the end we display the array which show after the removal of the value which we suppose according
to the code is 3 
*/
#include <iostream>
using namespace std;

int removeElement(int nums[], int size, int val) {
    int k = 0;  

    
    for (int i = 0; i < size; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;  
        }
    }
    
    return k; 
}

int main() {
    int nums[] = {3, 2, 2, 3, 4, 5}; 
    int size = sizeof(nums) / sizeof(nums[0]);  
    int val = 3; 

    int k = removeElement(nums, size, val);  

    
    cout << "Number of elements not equal to " << val << ": " << k << endl;
    cout << "Array after removal: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";  
    }
    cout << endl;

    return 0;
}

