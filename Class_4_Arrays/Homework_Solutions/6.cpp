#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        int flag=1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]<=arr[i+1]) continue;
            else 
            {
                flag=0;
                break;
            }
        }
        if(flag==1) return 1;
        else return 0;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

//Time Complexity : O(N)
//Space Complexity : O(1)