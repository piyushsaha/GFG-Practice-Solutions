/*
Link : https://practice.geeksforgeeks.org/problems/multiply-left-and-right-array-sum1555/1/
*/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{
    // Complete the function
    
    
    // First half : 0 to (n/2)-1
    // Second half : n/2 to n-1
    
    int sumLeft = 0, sumRight = 0;
    
    for(int i=0; i<n; i++) {
        if(i <= (n/2)-1) {
            sumLeft += arr[i];
        }
        else {
            sumRight += arr[i];
        }
    }
    
    return sumLeft * sumRight;
}
