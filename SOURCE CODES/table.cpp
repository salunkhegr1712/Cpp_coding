#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number::";
    cin>>n;
    cout<<"Table of "<<n<<endl;

    for(int i=1;i<=10;i++){
        cout<<" "<<n <<"X "<<i<<" ="<<i*n<<endl;    
    }
    return 0;
}