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
int main()
{   int n;
    cout<< "enter the Binary value"<<endl;
    cin>>n;
    cout<<"the decimal value of binary "<<n<<" is "<<binaryToDecimal(n);
    return 0;
}