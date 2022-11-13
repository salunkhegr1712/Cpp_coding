#include<iostream>
using namespace std;
int isArmstrong(int a){
    int c,armstrong=0,b;
    b=a;
    while(a != 0){
        c=a%10;
        a=a/10;
        armstrong=armstrong+c*c*c;
    }
    if (armstrong==b)
        return 1;
    else
        return-1;
        
}
int main()
{
    int low_limit,up_limit;
    cout<<"Enter lower limit"<<endl;
    cin>>low_limit;
    cout<<"Enter upper limit"<<endl;
    cin>>up_limit;

    cout<<"The Armstrong numbers between "<<low_limit<<" and "<<up_limit<<endl;

    for(int j=low_limit;j<=up_limit;j++){
        if(isArmstrong(j)==1){
            cout<<""<<j<<endl;
        }
    }
    return 0;
}