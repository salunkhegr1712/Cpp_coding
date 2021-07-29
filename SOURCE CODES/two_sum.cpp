#include<iostream>
#include "array_func.cpp"
using namespace std;
void display(int*a,int limit){

    for(int j=0;j <limit;j++){
        cout<<"no "<<j+1<<" element is :: "<<a[j]<<endl;
    }
}
int main()
{
    int*array=array_create();
    int limit;
    cout<<"enter limit"<<endl;
    cin>>limit;
    input(array,limit);
    display(array,limit);
    return 0;
}