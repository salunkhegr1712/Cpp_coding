#include<iostream>
using namespace std;
int DecToOct(int a){
    int b=1,sum=0;
    while(a > 0){
     
        sum=sum+(a%8)*b;
        b=b*10;
        a=a/8;
    }
    return sum;
}
int main()
{   int n,m;
    cout<< "enter the Decimal value"<<endl;
    cin>>n;

    cout<<"the Octal value of Decimal "<<n<<" is "<<DecToOct(n);
    return 0;
}