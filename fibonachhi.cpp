#include<iostream>
using namespace std;

int main()
{
    int a=1,b=1,c,d;
    cout<<"How many number you want to print::"<<endl;
    cin>>c;
    if(c==1){
        cout<<""<<a;
    }
    else if(c==2){
        cout<<""<<a<<endl;
        cout<<""<<b<<endl;
    }
    else{
        cout<<""<<a<<endl;
        cout<<""<<b<<endl;
        for(int i=0;i<=c-2;i++){
            d=b;
            b=b+a;
            a=d;
            cout<<""<<b<<endl;
        }
    }
    return 0;
}