#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
    int a,b,c,d,f,e,h;
   
    cout<<"the quadratic equation is in form ax^2+bx+c=0"<<endl;
    
    cout<<"the value of a is::"<<endl;
    cin>>a;
    
    cout<<"the value of b is::"<<endl;
    cin>>b;
    
    cout<<"the value of c is::"<<endl;
    cin>>c;
    f=4*a*c;
    d=sqrt(b^2-f);
    e=(d-b)/(2*a);
    h=((-d-b)/(2*a));
    cout<<"Root 1::"<<e<<endl;
    cout<<"Root 1::"<<h<<endl;
    return 0;
}