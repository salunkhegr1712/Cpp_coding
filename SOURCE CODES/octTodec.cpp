#include<iostream>
using namespace std;
int octToDecimal(int n){
    int a=1,b,sum=0;
    while(n!=0){
        b=n%10;
        n=n/10;
        sum= sum + b*a;
        a=a*8;
    }
    return sum;
}
int main()
{   int n;
    cout<< "enter the Octal value"<<endl;
    cin>>n;
    cout<<"the decimal value of Octal "<<n<<" is "<<octToDecimal(n);
    return 0;
}