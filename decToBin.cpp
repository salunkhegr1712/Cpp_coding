#include<iostream>
using namespace std;
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
{   int n,m;
    cout<< "enter the Decimal value"<<endl;
    cin>>n;

    cout<<"the Binary value of Decimal "<<n<<" is "<<DecToBin(n);
    return 0;
}