// Given two arrays arr1[] and arr2[], the task is to find the number of elements in the union between these two arrays.

// The Union of the two arrays can be defined as the set containing distinct elements from both arrays. If there are repetitions, then only one element occurrence should be there in the union.

// Note: Elements are not necessarily distinct.

// Examples

// Input: arr1[] = [1, 2, 3, 4, 5], arr2[] = [1, 2, 3]
// Output: 5
// Explanation: 1, 2, 3, 4 and 5 are the elements which comes in the union setof both arrays. So count is 5.
// Input: arr1[] = [85, 25, 1, 32, 54, 6], arr2[] = [85, 2] 
// Output: 7
// Explanation: 85, 25, 1, 32, 54, 6, and 2 are the elements which comes in the union set of both arrays. So count is 7.
// Input: arr1[] = [1, 2, 1, 1, 2], arr2[] = [2, 2, 1, 2, 1] 
// Output: 2
// Explanation: We need to consider only distinct. So count is 2.
 

// Expected Time Complexity: O(n+m)
// Expected Auxilliary Space: O(n+m)

// Constraints:
// 1 ≤ arr1.size, arr2.size ≤ 105
// 0 ≤ arr1[i], arr2[i] < 105

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(vector<int> arr1, vector<int> arr2) {
        
        set<int>Union;
        
        int size1 = arr1.size();
        int size2 = arr2.size();
        
        for(int i=0; i<size1; i++){
        
            Union.insert(arr1[i]);
        }
        
        for(int i=0; i<size2; i++){
        
            Union.insert(arr2[i]);
        }
        
        int ans = Union.size();
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading t

    while (t--) {
        vector<int> a;
        vector<int> b;

        string input;
        // For a
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // For b
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        cout << ob.doUnion(a, b) << endl;
    }

    return 0;
}
// } Driver Code Ends