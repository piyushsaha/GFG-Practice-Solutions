/*
https://practice.geeksforgeeks.org/problems/print-the-left-element2009/1/
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int leftElement(int a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) cin >> a[i];

        cout << leftElement(a, n) << endl;
    }
}
// } Driver Code Ends




int leftElement(int a[], int n) {
    sort(a, a+n);
    if(n%2 == 0) {
        return a[n/2 - 1];
    }
    else {
        return a[n/2];
    }
}
