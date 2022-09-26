//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
   
    string isInRange(int N){
         string ans[11]={"one","two","three","four","five","six","seven","eight","nine","ten"};
         string res;
         
        if(N>=1 and N<=10)
        {
            return ans[N-1];
        } 
        else return "not in range";
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
        cout << ob.isInRange(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends