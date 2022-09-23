#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 


//Variable is passed - Pass by value - If function does not return value and you want it to output modified value than argument then pass by value
void my_function(int x) 
{
   x = 50;
   cout << "Value of x from my_function: " << x << endl;
}

int main()
{
    dfile();
    int x = 10;
    my_function(x);
    cout << "Value of x from main function: " << x;
    return 0;
}