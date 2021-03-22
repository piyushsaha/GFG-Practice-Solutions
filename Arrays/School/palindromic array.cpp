/*
https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1/
*/

// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends


bool isPalin(int);

/*Complete the function below*/
int PalinArray(int a[], int n)
{
    int isPalinArray = 1;
    for(int i=0; i<n; i++) {
        if(isPalin(a[i])) {
            continue;
        }
        else {
            isPalinArray = 0;
            break;
        }
    }
    return isPalinArray;
}

bool isPalin(int n) {
    int copy = n;
    int rev = 0;
    
    while(copy > 0) {
        rev *= 10;
        rev += copy%10;
        copy /= 10;
    }
    return rev == n;
}
