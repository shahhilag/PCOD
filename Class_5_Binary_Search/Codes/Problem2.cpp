#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

 int peakIndexInMountainArray(vector<int>& arr) 
 {
    int start=0,end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]<arr[mid+1]) start=mid+1;
        else end=mid;
        mid=start+(end-start)/2;
    }
    return start;
}

int main()
{
    dfile();
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int ans= peakIndexInMountainArray(nums);
    cout<<ans<<endl;
    return 0;
}