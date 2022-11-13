#include<iostream>
using namespace std;

int main()
{
    int j=0,sum=0;
    int arr[10];
    cout<<"Enter values"<<endl;
    for(int i=0;i<10;i++){
            cin>>arr[i];
    }
    while(j<10){
        sum=sum +arr[j];
        j++;
    }
    float b = sum/10;
    cout<<"Sum is:: "<<sum<< endl;
    cout<<"average is:: "<<b<< endl;
    return 0;
}