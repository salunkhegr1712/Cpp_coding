#include<iostream>
using namespace std;
int num=4;
int change(int n){
    n=6;
    return n; 
}
int main()
{   cout<<"1)value of n is ::"<< num<<endl;
    int num=5;
    cout<<"2)value of n is ::"<< num<<endl;
    cout<<"3)value of n is ::"<< change(num)<<endl;
    return 0;
}