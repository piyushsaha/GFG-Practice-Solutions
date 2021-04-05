/*
Link : https://practice.geeksforgeeks.org/problems/average4856/1/
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    
	    vector<float> ans;
	    int cumSum = 0;
	    
	    // Adding the cumulative sum in each iteration and getting avg at that point by
	    // dividing by i+1 (+1 because arrays are 0 based indexed)
	    for(int i=0; i<n; i++) {
	        cumSum += arr[i];
	        float avg = (float)cumSum / (i+1);
	        ans.push_back(avg);
	    }
	    
	    return ans;
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
        auto ans = ob.streamAvg(arr, n);
        cout << fixed<< setprecision(2);
        for (auto x : ans) {
            cout <<x<<" ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
