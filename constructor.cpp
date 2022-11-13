#include<iostream>
using namespace std;
class xyz{
    private:
        int num1;
        int num2;
        int num3;
    public:
        void input();
        xyz(){
            num1 =1;
            num2=2;
            num3=3;
        }
        xyz(int a,int b,int c);

        void mutliplication(){

            cout<<"multiplication is : "<<num1*num2*num3<<endl;
        }
};
void xyz::input(){
        int a,b,c;
        cout<<"enter num 1:: ";
        cin>>a;
        cout<<"enter num 2:: ";
        cin>>b;
        cout<<"enter num 3:: ";
        cin>>c;
        num1=a;
        num2=b;
        num3=c;
}
xyz::xyz(int a,int b,int c){
    cout<<"multiplication is : "<<a*b*c;
}
int main()
{   
    xyz a;
    xyz b;
    a.mutliplication();
    b.input();
    b.mutliplication();
    
    xyz c(4,5,1);
    
    return 0;
}