#include<iostream>
using namespace std;
void prog(int a=2, int b=3, int c=4,int d=5){
    cout<<"Sum is :: "<<a+b+c+d<<endl;
}
//when you pass external argument then they overwrite the default arguments
int main()
{   
    cout<<"programmme flow"<<endl;
    prog(1,2,3,4);
    cout<<"programmme flow"<<endl;
    
    return 0;
}