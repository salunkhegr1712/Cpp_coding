#include<iostream>
using namespace std;

int main()
{
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
    cout<<"GCD of "<<a<<" & "<<b<<" is ::"<<GCD<<endl;    
    return 0;
}