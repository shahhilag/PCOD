//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        for(int i=1-n;i<n;i++)
        {
            for(int j=1-n;j<n;j++)
            {
                if(abs(i)>abs(j)) cout<< abs(i)+1<<" ";
                else cout<< abs(j)+1<<" ";
            }
            cout << endl;
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends