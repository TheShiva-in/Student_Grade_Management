#include<iostream>
using namespace std;
int main()
{
    int i=2;
    int n=8;
    while (i<=(n-1))
    {
        if (n%i==0)
        {
            cout<<"Non-Prime";
        }
        else
        {
            cout<<"Prime";
        }
        
    }
    return 0;
    
}