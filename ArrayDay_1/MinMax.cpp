// Given an array arr. Your task is to find the minimum and maximum elements in the array.

// Note: Return an array that contains two elements the first one will be a minimum element and the second will be a maximum of an array.

// Examples:

// Input: arr = [3, 2, 1, 56, 10000, 167]
// Output: 1 10000
// Explanation: minimum and maximum elements of array are 1 and 10000.
// Input: arr = [1, 345, 234, 21, 56789]
// Output: 1 56789
// Explanation: minimum and maximum element of array are 1 and 56789.
// Input: arr = [56789]
// Output: 56789 56789
// Explanation: Since the array contains only one element so both min & max are same.
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= arr.size() <= 105
// 1 <= arr[i] <=1012

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    
    long long getMini(vector<long long int>& arr,int n){
    
        long long minimum = INT_MAX;
        
        for(int i=0; i<n; i++){
            
            minimum = min(arr[i],minimum);
        }
        
        return minimum;
        
    }
    
    long long getMaxi(vector<long long int>& arr,int n){
        
        long long maximum = INT_MIN;
        
        for(int i=0; i<n; i++){
            
            maximum = max(arr[i],maximum);
        }
        
        return maximum;
        
    }
    
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        
        int n = arr.size();
        vector<pair<long long,long long>>ans;
        pair<long long,long long>p;
        
        long long mini = getMini(arr,n);
        long long maxi = getMaxi(arr,n);
        
        p.first = mini;
        p.second = maxi;
        
        
        
        return p;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends