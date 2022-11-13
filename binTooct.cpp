#include<iostream>
using namespace std;
int binaryToDecimal(int n){
    int a=1,b,sum=0;
    while(n!=0){
        b=n%10;
        n=n/10;
        sum= sum + b*a;
        a=a*2;
    }
    return sum;
}
int DecToOct(int a){
    int b=1,sum=0;
    while(a > 0){
     
        sum=sum+(a%8)*b;
        b=b*10;
        a=a/8;
    }
    return sum;
}
//here we first convert binary to decimal and them decimal to octal
int main()
{   int n;
    cout<< "enter the Binary value"<<endl;
    cin>>n;
    cout<<"the octal value of binary "<<n<<" is "<<DecToOct(binaryToDecimal(n));
    return 0;
}