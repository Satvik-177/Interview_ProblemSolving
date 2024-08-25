// Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. Find the other two numbers. Return in increasing order.

// Example 1:

// Input: 
// N = 2
// arr[] = {1, 2, 3, 2, 1, 4}
// Output:
// 3 4 
// Explanation:
// 3 and 4 occur exactly once.
// Example 2:

// Input:
// N = 1
// arr[] = {2, 1, 3, 2}
// Output:
// 1 3
// Explanation:
// 1 3 occur exactly once.
// Your Task:
// You do not need to read or print anything. Your task is to complete the function singleNumber() which takes the array as input parameter and returns a list of two numbers which occur exactly once in the array. The list must be in ascending order.

// Expected Time Complexity: O(N)
// Expected Space Complexity: O(1)

// Constraints:
// 2 <= N <= 106 
// 1 <= arr[i] <= 5 * 106

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int n = nums.size();
        int res = 0;

        
        for(int i=0; i<n; i++){
            
            res = res ^ nums[i];   //two unique elements will be left with their XOR
        }
        
        //finding rightmost set bit mask 
        int rmsb = res & (-res);
        int firstEle = 0;
        int secondEle = 0;
        
        for(int i=0; i<n; i++){
            
            if((rmsb & nums[i]) == 0){
                
                firstEle = firstEle ^ nums[i];
            }
            
            else {
                
                secondEle = secondEle ^ nums[i];
            }
        }
        
        if(firstEle <= secondEle)
        return {firstEle,secondEle};
        
        else
        return {secondEle,firstEle};
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends