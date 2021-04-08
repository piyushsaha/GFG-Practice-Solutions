/*
Link : https://practice.geeksforgeeks.org/problems/ishaan-loves-chocolates2156/1/
*/

// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


int chocolates(int arr[], int n);


int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        cout << chocolates(arr, n);
        cout << endl;
        
    }

}
// } Driver Code Ends


int chocolates(int arr[], int n)
{
    // Complete the function
    
    // Taking two pointer approach
    int first = 0, last = n-1;
    
    // While first is less than last, keep eating tasty block
    while(first < last) {
        if(arr[first] > arr[last]) {
            first++;
        }
        else {
            last--;
        }
    }
    
    return arr[first];
    
}