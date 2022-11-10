#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

// int binarysearch(int n,int a[],int key)
// {
//     int s=0,e=n-1;
//     int mid=(s+e)/2;
//     while(s<=e)
//     {
//         if(key==a[mid]) return mid;
//         if(key>a[mid]) s=mid+1;
//         else e=mid-1;
//         mid=(s+e)/2;
//     }
//     return -1;
// }
int binarysearch(int n,int a[],int key)
{
    int s=0,e=n-1;
    int mid=s+((e-s)/2);
    while(s<=e)
    {
        if(key==a[mid]) return mid;
        else if(key>a[mid]) s=mid+1;
        else e=mid-1;
        mid=s+((e-s)/2);
    }
    return -1;
}

int main()
{
    dfile();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }   
    int key;
    cin>>key;
    int ans=binarysearch(n,a,key);
    cout<<ans<<endl;
    return 0;
}