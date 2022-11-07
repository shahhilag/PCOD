#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void rearrange(long long *arr, int n) 
{ 
    vector<long long int>v;
    int s=0;
    int e=n-1;
    while(s<=e){
        v.push_back(arr[e]);
        v.push_back(arr[s]);
        s++;
        e--;
    }
    for(int i=0;i<n;i++){
        arr[i]=v[i];
    }
}

int main()
{
    dfile();
    int n;
    cin>>n;
    long long int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    } 
    rearrange(v,n);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    } 
    return 0;
}

//Time Complexity : O(N)
//Space Complexity : O(1)