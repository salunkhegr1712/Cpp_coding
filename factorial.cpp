#include<iostream>
using namespace std;

int main()
{
    int n;
    int fact=1;
    cin>>n;
    if(n==1 || n==0){
        cout<<"Factorial is "<<fact;
    }
    else{
        for(int a=1;a<=n;a++ ){
            fact = fact*a;    
        }
        cout<<"Factorial is "<<fact;
    }
    return 0;
}