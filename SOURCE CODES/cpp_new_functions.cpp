#include<iostream>
#include <math.h>
using namespace std;
class hell{
    private: 
        double a,b,c;
    friend void gforce(hell abc);
    friend void hello();
    public:
    //friend function take a object as input
    void input(){
        cout<<"enter a:"<<endl;
        cin>>a;
        cout<<"enter b:"<<endl;
        cin>>b;
        cout<<"enter c:"<<endl;
        cin>>c;
    }
    
};
//you cant create a friend fuction and inside it you may not declare class variable
//but you cant acces the private variable
void gforce(hell abc){
            double s=(abc.a+abc.b+abc.c)/2,f;
            f=sqrt(s*(s-abc.a)*(s-abc.b)*(s-abc.c));
            cout<<"Area is ::"<<f;
        }
int main()
{   
    hell a;
    a.input();
    gforce(a);
    
    return 0;
}