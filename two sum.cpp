#include<iostream>
using namespace std;

void sum(int nums[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "Indices: " << i << " and " << j << endl;
                return;
            }
        }
    }
    cout << "Solution not found" << endl;
}
int main()
{
    int nums[] = {2, 3, 4, 5};
    int target = 9;            
    int n = 4;               
    sum(nums, n, target);   
    return 0;
}

