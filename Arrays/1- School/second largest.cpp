/*
Link : https://practice.geeksforgeeks.org/problems/second-largest3735/1/
*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    
	    
	    // Initialize both max and max2 as INT_MIN
	    int max, max2;
	    max = max2 = -1;
	    
	    for(int i=0; i<n; i++) {
	        
	        // If new max is found, make it max2 and set new max
	        if(arr[i] > max) {
	            max2 = max;
	            max = arr[i];
	        }
	        // If the number is between max and max, update max2
	        if(arr[i] < max && arr[i] > max2) {
	            max2 = arr[i];
	        }
	    }
	    
	    return max2;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
