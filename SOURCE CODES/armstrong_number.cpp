#include<iostream>
using namespace std;

int main()
{
    int c,b,a,armstrong=0;
    cout<<"enter the number::"<<endl;
    cin>>a;
    b=a;
    while(a != 0){
        c=a%10;
        a=a/10;
        armstrong = armstrong+ c*c*c;
    }
    if (armstrong==b)
        cout<<"the number "<<b<<" is an armstrong number"<<endl;
    else
        cout<<"the number "<<b<<" is not an armstrong number"<<endl;
    
    return 0;
}