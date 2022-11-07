#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count=0;
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==1) 
        {
            count++;
            
        }
        else 
        {
            count=0;
        }
        ans=max(count,ans);
    }
    return ans;
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
    int ans=findMaxConsecutiveOnes(nums);
    cout<<ans<<endl;
    return 0;
}