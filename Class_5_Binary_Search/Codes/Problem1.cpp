//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/839260081/

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

vector<int> searchRange(vector<int>& nums, int target) {
    int start = 0,end = nums.size()-1;
    int mid,str = -1,last = -1;
    
    while(start <= end){
        mid = start + (end-start)/2;          
        
        if(nums[mid] == target){
            str = mid;                       
            end = mid-1;                     
        }
        
        else if(nums[mid] < target){
            start = mid+1;
        }
        else end = mid-1;
    }
    
    start = 0,end = nums.size()-1;
    last = -1;
    
    while(start <= end){
        mid = start + (end-start)/2;
        
        if(nums[mid] == target){
            last = mid;                   
            start = mid+1;                
        }
        
        else if(nums[mid] < target){
            start = mid+1;
        }
        else end = mid-1;
    }
    
    return {str,last};        
    
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
    int target;
    cin>>target;
    vector<int> ans=searchRange(nums,target);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}

//Time Complexity - O(logn)
//Space Complexity - O(1)