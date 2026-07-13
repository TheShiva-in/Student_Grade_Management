#include<iostream>
using namespace std;
int main()
{
    int P,R,T;
    int Principle;
   
    cout<<"Enter Priciple:";
     cin>>P;
    
    cout<<"Enter Rate:";
    cin>>R;
    
    cout<<"Enter Time";
    cin>>T;
   
    Principle=P*R*T;
    cout<<"Principle is = "<<Principle;
    return 0;

}