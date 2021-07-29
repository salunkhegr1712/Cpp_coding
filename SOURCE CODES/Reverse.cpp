#include<iostream>
using namespace std;

int main()
{
    int i=0,a=0,r=0;
    cout<<"enter the number"<<endl;
    cin>>i;
    cout<<"Given number::"<<i<<endl;
    int count=0;
    while(i!=0){
        a=i%10;
        i=i/10;
        r=a+r*10;
        
    }
    cout<<"Reversed number::"<<r<<endl;
    
    return 0;
}