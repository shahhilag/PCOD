#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void segregateEvenOdd(int arr[], int n) 
{
    vector<int> odd;
    vector<int> even;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0) even.push_back(arr[i]);
        else odd.push_back(arr[i]);
    }
    for(int i=0;i<even.size();i++)
    {
        arr[i]=even.at(i);
    }
    int temp=0;
    for(int i=even.size();i<n;i++)
    {
        arr[i]=odd.at(temp);
        temp++;
    }
}

int main()
{
    dfile();
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    segregateEvenOdd(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}