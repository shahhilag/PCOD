//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string compareFive(int n){
       if(n>5) return "Greater than 5";
       else if(n<5) return "Less than 5";
       else return "Equal to 5";
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.compareFive(N) << endl;
    }
    return 0; 
} 

// } Driver Code Ends