#include<iostream>
#include<math.h>
using namespace std;
class hell{
    private:
        double a,b,c;

    public:
        void input();
        void display();
        void area();
        hell(){
            a=20.00;
            b=30.00;
            c=25.0;
        }
        hell(double x,double y,double z){
            a=x;b=y;c=z;
        }   
        //here & is important
        hell(hell &h1){
            h1.a=a;h1.b=b;h1.c=c;
    
        }
};
void hell::input(){
    cout<<"enter first dimension::"<<endl;
    cin>>a;
    cout<<"enter second dimension::"<<endl;
    cin>>b;
    cout<<"enter third dimension::"<<endl;
    cin>>c;    
}

void hell::display(){
    cout<<"------------------------------"<<endl;
    cout<<"------------------------------"<<endl;


    cout<<"First dimension : "<< a<<endl;
    cout<<"Second dimension : "<<b<<endl;
    cout<<"Third dimension : "<<c<<endl;

    cout<<"------------------------------"<<endl;
    cout<<"------------------------------"<<endl;

}
void hell::area(){
    double l,m;
    l=(a+b+c)/2;
    m=sqrt(l*(l-a)*(l-b)*(l-c));
    cout<<"area is::"<<m<<endl;
}
int main()
{   
    hell a;
    a.input();
    a.display();
    a.area();
    hell b ;
    b.display();
    b.area();
    hell c(21,23,24);
    c.display();
    c.area();
    
    return 0;
}