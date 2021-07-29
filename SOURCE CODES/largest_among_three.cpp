#include<iostream>
using namespace std;

int main()
{
    cout<<"this programme find greatest number among three"<<endl;
    int m,n,o;
    cout<<"enter first number::"<<endl;
    cin>>m;

    cout<<"enter second number::"<<endl;
    cin>>n;

    cout<<"enter third number::"<<endl;
    cin>>o;

    if(m>n && m>>o){
        cout<<"gretest is first number that is::"<< m <<endl;
    }
    else if(n>o){
        cout<<"gretest is second number that is::"<< n <<endl; 
      
    }
    else{
        cout<<"gretest is third number that is::"<< o <<endl;
    }
    return 0;
}