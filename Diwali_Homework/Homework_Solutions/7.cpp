//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int temp=1;
        for(int i=0;i<n;i++)
        {
            //Space
            for(int j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            //Star
            for(int j=1;j<=temp;j++)
            {
                cout<<"*";
            }
            temp+=2;
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