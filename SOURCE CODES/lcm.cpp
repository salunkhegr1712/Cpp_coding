#include<iostream>
using namespace std;

int main()
{
    int lcm;
    int a,b,c,i,GCD;
    cout<<"Enter first number:-"<<endl;
    cin>>a;
    cout<<"Enter second number:-"<<endl;
    cin>>b;
    if(a>b)
        c=a;
    else
        c=b;

    for(i=1;i<=c;i++){
        if(a%i==0 && b%i==0){
            GCD=i;
        }
    }
    lcm=(a*b)/GCD;
    cout<<"LCM of "<<a<<" & "<<b<<" is ::"<<lcm<<endl;   
    return 0;
}