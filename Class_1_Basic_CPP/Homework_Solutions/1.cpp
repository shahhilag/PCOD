#include <iostream>
using namespace std;

int main() {
    string input;
    cin>>input;
    if(input>="A" && input<="Z")
    {
        cout<<1<<endl;
    }
    else if(input>="a" && input<="z")
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

    return 0;
}

//Time Complexity - O(1)
//Space Complexity - O(1) - The size of input string is not considered as we are not returning it or using it for manipulation.