#include<bits/stdc++.h>
using namespace std;
#define NUMBER 10 //Macro

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int main()
{
    dfile();
    //For Loop 1
    for(int i=0;i<NUMBER;i++)
    {
        cout<<"Hi"<<endl;
    }

    //For Loop 2
    for(int i=0;i<NUMBER;)
    {
        cout<<"Hi"<<endl;
        i++;
    }

    //For Loop 3
    int i;
    for(;i<NUMBER;)
    {
        i=0;
        cout<<"Hi"<<endl;
        i++;
    }

    //While loop
    i=0;
    while(i<NUMBER)
    {
        cout<<"Hi"<<endl;
        i++;
    }
    
    return 0;
}