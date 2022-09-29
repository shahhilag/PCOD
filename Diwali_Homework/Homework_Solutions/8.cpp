//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    int temp=2*(n-1)+1;
	    for(int i=0;i<n;i++)
	    {
	        //Spaces
	        for(int j=0;j<i;j++)
	        {
	            cout<<" ";
	        }
	        //Star
	        for(int j=1;j<=temp;j++)
	        {
	            cout<<"*";
	        }
	        temp-=2;
	        cout<<endl;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends