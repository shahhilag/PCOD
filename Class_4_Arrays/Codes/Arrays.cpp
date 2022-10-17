#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

//In arrays, most important parts are traversal and input.

void solve()
{
    //Initialize Array after declaration

    //Declaration
    int  a[5];
    //Initialize
    for(int i=0;i<5;i++)
    {
        cin>>a[i]; // or a[i]=value you want to insert
    }

    //Array Traversal
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //Declaration(without size) + Initialization
    int b[]={1,2,3,4,5};//The size will be automatically calculated

    //Declaration(with size) + Initialization
    int c[5]={1,2,3,4,5};

    //Array Traversal
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    //If you want to initialize all values of array to zero
    int d[]={0};
    //The third value will be zero.Thus e[2]=0 but e[3] will throw a gargon value.
    int e[3]={1,2};

}

void reverse(int * a,int n)
{
    //Approach 1 - Two Pointer Approach(Time Complexity-O(N))
    int start=0;
    int end=n-1;
    // //Condition to exit - When start overshoots end i.e. start>end
    // while(start<=end)
    // {
    //     swap(a[start],a[end]);
    //     start++;
    //     end--;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    
    //Approach 2-Reverse traversal
    for(int i=end;i>=start;i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void maxmin(int *a,int n)
{
    //Approach 1 - Without sorting(O(N))

    // //INT_MIN and INT_MAX are the lowest and highest values an integer could store
    // int maxi=INT_MIN;
    // int mini=INT_MAX;
    // //max(value1,value2) will check and store greater value from value1 and value2 
    // for(int i=0;i<n;i++)
    // {
    //     maxi=max(maxi,a[i]);
    //     mini=min(mini,a[i]);
    // }
    // cout<<maxi<<" "<<mini<<endl;

    //Approach 2 - Using sorting(O(NlogN))
    sort(a,a+n);
    cout<<a[n-1]<<" "<<a[0]<<endl;
}

void secondMaxMin(int *a,int n)
{
    //Approach 1 - Without sorting(O(N))

    //INT_MIN and INT_MAX are the lowest and highest values an integer could store
    // int maxi=INT_MIN;
    // int mini=INT_MAX;
    // int omaxi=INT_MIN;
    // int omini=INT_MAX;
    // //max(value1,value2) will check and store greater value from value1 and value2 
    // for(int i=0;i<n;i++)
    // {
    //     maxi=max(maxi,a[i]);
    //     mini=min(mini,a[i]);
    // }
    // for(int i=0;i<n;i++)
    // {
    //     if(a[i]<maxi)
    //     {
    //         omaxi=max(a[i],omaxi);
    //     }
    //      if(a[i]>mini)
    //     {
    //         omini=min(a[i],omini);
    //     }
    // }
    // cout<<omaxi<<" "<<omini<<endl;

    //Approach 2 - Using sorting(O(NlogN))
    sort(a,a+n);
    cout<<a[n-2]<<" "<<a[1]<<endl;
}

void evenodd(int * a,int n)
{
    vector<int> even;
    vector<int> odd;
    //Even odd array creation
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0) even.push_back(a[i]);
        else odd.push_back(a[i]);
    }

    //Array Traversal to generate pattern
    for(int i=0;i<even.size();i++)
    {
        cout<<even.at(i)<<" ";
    }
    for(int i=0;i<odd.size();i++)
    {
        cout<<odd.at(i)<<" ";
    }
    cout<<endl;
}

void impVector(int n)
{
    //Vector initialization
    vector<int> v{1,10,2,5,8,9};

    //Vector with predefined size 5 and all values initialized by 0
    vector<int> a(n,0);
    sort(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    reverse(v.begin(),v.end());
     for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}

int main()
{
    dfile();
    int n;
    cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    //solve();
    //reverse(a,n);
    //maxmin(a,n);
    //secondMaxMin(a,n);
    //evenodd(a,n);
    impVector(n);
    return 0;
}