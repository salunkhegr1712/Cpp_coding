#include<iostream>
using namespace std;
void input(int *c,int size){
    cout<<"Enter values::"<<endl;
    for(int i=0;i<size;i++){
            cin>>c[i];
    }
}

void display(int *c,int size){
    cout<<"values Are:: ";
    for(int i=0;i<size;i++){
            cout<<""<<c[i]<<" ";
    }
    cout<<""<<endl;
}

void average(int*c,int size){
    int j=0,sum=0;
    
    while(j<size){
        sum=sum + c[j];
        j++;
    }
    float b = sum/size;
    cout<<"Sum is:: "<<sum<< endl;
    cout<<"average is:: "<<b<< endl;
}
void largest(int*c,int size){
    int max,i=0;
    max=c[i];
    while(i<size){
        if(c[i] > max ){
            max=c[i];
        }
        i++;
    }
    cout<<"The Maximum Element in Array is:: "<<max<<endl;
}
int main()
{    
    int c;
    cout<<"enter size::"<<endl;
    cin>>c;
    int f[12];
    input(f,c);
    display(f,c);
    //average(f,c);
    largest(f,c);
    return 0;
}