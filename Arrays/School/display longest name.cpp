/*
https://practice.geeksforgeeks.org/problems/display-longest-name0853/1/
*/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    string longest(string names[], int n) {
        int currMaxLength = 0;
        int currMaxIndex = 0;
        for(int i=0; i<n; i++) {
            if(names[i].length() > currMaxLength) {
                currMaxLength = names[i].length();
                currMaxIndex = i;
            }
        }
        return names[currMaxIndex];
    }
};


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}
  // } Driver Code Ends
