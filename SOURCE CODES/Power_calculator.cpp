#include<iostream>
using namespace std;
void power(int a){
    int b=0;
    int c=a;
    while(a!=0){
        a=a/10;
        b++;
    }
    cout<<"the power of number "<<c<<" is "<<b-1<<endl;
}
int main()
{
    int a;
    cout<<"enter the number for which you have to find power::";
    cin>>a;
    power(a);
    return 0;
}