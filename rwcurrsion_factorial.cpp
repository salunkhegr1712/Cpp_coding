#include<iostream>
using namespace std;
int factorial(int n){

    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main()
{
    int a;
    cout<<"enter number::"<<endl;
    cin>>a;
    
    cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}