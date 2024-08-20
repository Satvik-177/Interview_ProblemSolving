// Given an array arr, rotate the array by one position in clock-wise direction.

// Examples:

// Input: arr = [1, 2, 3, 4, 5]
// Output: [5, 1, 2, 3, 4]
// Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
// Input: arr = [9, 8, 7, 6, 4, 2, 1, 3]
// Output: [3, 9, 8, 7, 6, 4, 2, 1]
// Explanation: After rotating clock-wise 3 comes in first position.
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1<=arr.size()<=105
// 0<=arr[i]<=105

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    void reverse(vector<int> &arr, int s, int e){
        
        while(s<=e){
            
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
    
    void rotate(vector<int> &arr) {
        
        
        int n = arr.size();
        vector<int>ans;
        
        int k = 1;
        
        reverse(arr,0,n-1); //entire array
        
        reverse(arr,0,k-1);  //reverse first k=1 element
        
        reverse(arr,k,n-1);  //reverse remaining
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        ob.rotate(arr);
        for (long long i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends