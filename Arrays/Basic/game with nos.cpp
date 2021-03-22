/*
https://practice.geeksforgeeks.org/problems/game-with-nos3123/1/ 
*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int* game_with_number(int arr[], int n);
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
        
        int *arr2;
        
        arr2 = game_with_number(arr, n);
        for(int i = 0;i < n; i++)
            cout << arr2[i] << " ";
        
        cout << endl;
        
    }

}
// } Driver Code Ends


int* game_with_number(int arr[], int n)
{
    
    int *arr2 = new int[n];
    
    // Bitwise OR on all elements from 0 to n-2 (2nd last element)
    for(int i=0; i<n-1; i++) {
        arr2[i] = arr[i] ^ arr[i+1];
    }
    
    // Copy the last element as it is
    arr2[n-1] = arr[n-1];
    
    return arr2;
  
}
