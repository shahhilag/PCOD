#include <bits/stdc++.h> 
using namespace std;
int fibonacciNumber(int n){
   int mod = (int) 1e9 + 7;
   int a = 0;
   int b = 1;
   int c;

   for (int i = 2; i <= n; i++) 
   {
       c = (a + b) % mod;
       a = b;
       b = c;
   }
   return b;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacciNumber(n)<<endl;
    return 0;
}

//Time Complexity- O(N) [O(N-1) to be precise but we drop constant]
//Space Complexity - O(1)