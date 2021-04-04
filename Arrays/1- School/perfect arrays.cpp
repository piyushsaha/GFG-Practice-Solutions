/*
https://practice.geeksforgeeks.org/problems/perfect-arrays4645/1/
*/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool IsPerfect(int a[],int n);

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        if(IsPerfect(a,n))
            cout<<"PERFECT\n";
        else
            cout<<"NOT PERFECT\n";
        
    }
    
}// } Driver Code Ends


//User function Template for C++


bool IsPerfect(int a[],int n)
{
    int start = 0, end = n-1;
    while(start<end) {
        if(a[start] != a[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
