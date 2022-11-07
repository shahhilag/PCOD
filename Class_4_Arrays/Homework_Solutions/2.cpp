#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int missingNumber(vector<int>& nums) {
    int sum = 0; 
    int total = nums.size()*(nums.size() + 1)/2; // total is the sum of all numbers in the array
    for (auto number : nums) 
    { 
        sum += number; 
    }
    return total - sum; // return the difference between the sum and the total that is the missing number
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
    int ans=missingNumber(nums);
    cout<<ans<<endl;
    return 0;
}