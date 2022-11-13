#include<iostream>
using namespace std;
int isprime(int c){
    if(c > 0){
        if(c==2){
            return 1;
        }
        else if(c==1){
            return -1;   
        }
        else{
            int a=2;
            while( a < c){
                if(c % a == 0){
                    
                    return -1;  
                }
                a++;
            }
            return 1;
        }
    }
}
int main()
{
    int low_limit,up_limit;
    cout<<"Enter lower limit"<<endl;
    cin>>low_limit;
    cout<<"Enter upper limit"<<endl;
    cin>>up_limit;
    cout<<"The prime numbers between "<<low_limit<<" and "<<up_limit;
    for(int j=low_limit;j<=up_limit;j++){
        if(isprime(j)==1){
            cout<<""<<j<<endl;
        }
    }
    return 0;
}