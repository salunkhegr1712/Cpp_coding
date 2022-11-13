#include<iostream>
using namespace std;
int sum_recursion(int n){

    if(n==1){
        return n;
    }
    else{
        return sum_recursion(n-1)+n;
    }
}
int main()
{  
    int n;
    cout<<"enter number upto you want sum::"<<endl;
    cin>>n;
    cout<<"the sum of natural numbers upto "<<n<<" is "<<sum_recursion(n)<<endl;
    return 0;
}