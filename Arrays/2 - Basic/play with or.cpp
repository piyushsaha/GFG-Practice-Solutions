/*
Link : https://practice.geeksforgeeks.org/problems/play-with-or5515/1/
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
    
    int *newArr = new int[n];
    
    for(int i=0; i<n-1; i++) {
        newArr[i] = arr[i] | arr[i+1];
    }
    
    // Copying last element as it is
    newArr[n-1] = arr[n-1];
    
    return newArr;
    
}
