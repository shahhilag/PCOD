#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void moveZeroes(vector<int>& nums) 
{
    int s=0,e=0;
    while(e<nums.size())
    {
        if(nums[e]) swap(nums[s++],nums[e++]);//Swap if number not equal to 0
        else e++;
    }
}

int main()
{
    dfile();
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    moveZeroes(nums);
    for(int x:nums)
    {
        cout<<x<<" ";
    }
    return 0;
}

//Time Complexity : O(N)
//Space Complexity : O(1)