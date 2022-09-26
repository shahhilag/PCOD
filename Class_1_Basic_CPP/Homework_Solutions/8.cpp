#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int s,e,w;
    cin>>s>>e>>w;
    for(int i=s;i<=e;i+=w)
    {
        int ans=((i-32)*5)/9;
        cout<<i<<"\t"<<floor(ans)<<endl;
    }
    return 0;
}

//Time Complexity - O(E) [There will be two solutions O(E) and O((E-S)/W) but as O is the worst case complexity and E>(E-S)/W thus we consider worst case complexity as O(E)]
//Space Complexity - O(1)