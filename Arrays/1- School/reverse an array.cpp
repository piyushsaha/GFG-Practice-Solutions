/*
https://practice.geeksforgeeks.org/problems/reverse-an-array/0/
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int *arr = new int[n];
	    for(int i=0; i<n ; i++) {
	        cin >> arr[i];
	    }
	    int start = 0, end = n-1;
	    while(start < end) {
	        int temp = arr[start];
	        arr[start] = arr[end];
	        arr[end] = temp;
	        start++;
	        end--;
	    }
	    
	    for(int i=0; i<n; i++) {
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
