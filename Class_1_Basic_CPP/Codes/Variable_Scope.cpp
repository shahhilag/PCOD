#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int global_var = 10;
  
void func() 
{
    cout << "Access inside func: " << global_var << endl;
}

int main()
{
    dfile();
    int global_var=20;
    func();
    //Local variable > Global variable
    cout << "Access inside main: " << global_var << endl;
    return 0;
}