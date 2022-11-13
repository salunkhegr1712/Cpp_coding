#include<iostream>
using namespace std;
void code(int a){
    cout<<"The value is Integer"<<endl;
}
void code(char a){
    cout<<"The value is Character"<<endl;
}
void code(float a){
    cout<<"The value is Float"<<endl;
}
void code(double a){
    cout<<"The value is Double"<<endl;
}
int main()
{
    int a=19;
    char b='s';
    float c=45.66;
    double d=34.6576;
    code(a);
    code(b);
    code(c);
    code(d);
    return 0;
}
