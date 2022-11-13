#include<iostream>
using namespace std;
void Addition_with_WHILE(int array[],int n){
    int a=0;
    int i=0;
    int sum1=0,sum2=0;
    while(i < n){
        if(array[i]%2==1){
            sum1 +=array[i];
        }
        else{
            sum2 +=array[i];
        }
        i++;
    }
    cout<<"\t\t\t\tsum of inputed odd numbers is::"<<sum1<<endl;
    cout<<"\t\t\t\tsum of inputed even numbers is::"<<sum2<<endl;

};

int main()
{
    int n;
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;

    cout<<"Enter the number of values you want to enter::"<<endl;
    cin>>n;
    
    int array[n];
    for(int j=0;j<n;j++){
        cin>>array[j];
    }
    Addition_with_WHILE(array,n);
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;

    return 0;
}