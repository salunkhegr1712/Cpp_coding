#include<iostream>
#include<stdlib.h>
using namespace std;
struct studInfo{
    char name[100];
    char roll_no[10];
    char contact_info[10];
    char class1[10];
    char division[10];
};
void input(studInfo*a){

    cout<<"enter name::"<<endl;
    cin.getline(a->name,100);
    cout<<"enter roll number ::"<<endl;
    cin.getline(a->roll_no,100);
    cout<<"enter contact info::"<<endl;
    cin.getline(a->contact_info,100);
    cout<<"enter your current class::"<<endl;
    cin.getline(a->class1,100);
    cout<<"enter division::"<<endl;
    cin.getline(a->division,100);

}
void display(studInfo*a){
    cout<<""<<endl;
    cout<<"----------------------------------------------------------";
    cout<<"----------------------------------------------------------";
    cout<<"----------------------------------------------------------";

    cout<<"Name :: "<<a->name<<endl;
    cout<<"Roll number :: "<<a->roll_no<<endl;
    cout<<"Current class :: "<<a->class1<<endl;
    cout<<"Current division  :: "<<a->division<<endl;
    cout<<"Contact info :: "<<a->name<<endl;

    cout<<"----------------------------------------------------------";
    cout<<"----------------------------------------------------------";
    cout<<"----------------------------------------------------------";
}
int main()
{   
    studInfo*a;
    a= new studInfo;
    input(a);
    display(a);
    return 0;
}