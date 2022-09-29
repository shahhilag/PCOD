//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0;i<n;i++)
        {
            char alphabet='A';
            for(int j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            for(int j=1;j<=i+1;j++)
            {
                cout<<alphabet;
                alphabet++;
            }
            alphabet--;
            for(int j=1;j<=i;j++)
            {
                alphabet--;
                cout<<alphabet;
            }
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