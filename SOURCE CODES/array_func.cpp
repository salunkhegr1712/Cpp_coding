#include<iostream>
using namespace std;
int * array_create(){
    int*array;
    array=new int;
    return array;
}
 void input(int*array,int limit){
    for(int i=0;i<limit;i++){
        cout<<i+1<<" element ::"<<endl;
        cin>>array[i];
    }
}
