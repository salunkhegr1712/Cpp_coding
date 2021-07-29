#include<iostream>
using namespace std;

void cyclic_shift(int*a,int*b,int*c){
    int temp1,temp2;
    temp1=*b;
    temp2=*c;
    *b=*a;
    *a=temp2;
    *c=temp1;
}
void display(int a,int b,int c){
    cout<< "First number:: "<<a<<endl;
    cout<< "Second number:: "<< b<<endl;
    cout<< "Third number:: "<<c<<endl;
}
int main()
{
    int a,b,c;
    cout<< "enter first number:: ";
    cin>>a;
    cout<< "enter Second nummber:: ";
    cin>>b;
    cout<< "enter third number:: ";
    cin>>c;
    display(a,b,c);
    cout<<"shift 1"<<endl;
    cyclic_shift(&a,&b,&c);
    display(a,b,c);
    cout<<"shift 2"<<endl;
    cyclic_shift(&a,&b,&c);
    display(a,b,c);
    cout<<"shift 3"<<endl;
    cyclic_shift(&a,&b,&c);
    display(a,b,c);
    return 0;
}