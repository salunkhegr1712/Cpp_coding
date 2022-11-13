#include<iostream>
using namespace std;
void Rev_string(char str[],int n){
    cout<<""<<str[n]; 
    n--;
    Rev_string(str,n);
}
int main()
{
    char str1[10];
    cout<<"Enter the sentence::"<<endl;
    cin.get(str1,10);
    cout<<"Given statement is ::"<<endl<<str1;
    Rev_string(str1,10);

    return 0;
}