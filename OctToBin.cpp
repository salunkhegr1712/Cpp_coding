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
int DecToBin(int a){
    int b=1,sum=0;
    while(a > 0){
     
        sum=sum+(a%2)*b;
        b=b*10;
        a=a/2;
    }
    return sum;
}
int main()
{   int n;
    cout<< "enter the Octal value"<<endl;
    cin>>n;
    cout<<"the Binary value of Octal "<<n<<" is "<<DecToBin(octToDecimal(n));
    return 0;
}