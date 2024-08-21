// // ALSO known as "Kadane's Algorithm"

#include<bits/stdc++.h>
using namespace std;

// Given an integer array arr[]. Find the contiguous sub-array(containing at least one number) that has the maximum sum and return its sum.

// Examples:

// Input: arr[] = [1, 2, 3, -2, 5]
// Output: 9
// Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.
// Input: arr[] = [-1, -2, -3, -4]
// Output: -1
// Explanation: Max subarray sum is -1 of element (-1)
// Input: arr[] = [5, 4, 7]
// Output: 16
// Explanation: Max subarray sum is 16 of element (5, 4, 7)
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ arr.size() ≤ 106
// -107 ≤ arr[i] ≤ 107

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int maxi = INT_MIN;
        int currSum = 0;

        for(int i=0; i<n; i++){
           
           currSum += nums[i];
           maxi = max(maxi,currSum);
          
           if(currSum < 0){

                currSum = 0;
            }
        }

        return maxi;
    }
};