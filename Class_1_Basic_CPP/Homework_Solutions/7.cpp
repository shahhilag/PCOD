#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans=1;
    if(n==0) cout<<1<<endl;
    else if(n>0)
    {
        while(n>0)
        {
            ans*=n;
            n--;
        }
        cout<<ans<<endl;
    }
    else
    {
        cout<<"Error"<<endl;
    }

    return 0;
}

//Time Complexity - O(N)
//Space Complexity - O(1)