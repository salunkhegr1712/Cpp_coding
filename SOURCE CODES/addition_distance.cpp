#include<iostream>
using namespace std;
class addition{
    private:
        double cm;
        double m;
    public:
        void input();
        void add();
};
void addition::input(){
        cout<<"enter distance in cm"<<endl;
        cin>>cm;
        cout<<"enter distance in m"<<endl;
        cin>>m;
}
void addition::add(){
        cout<<"addition is:: "<<cm/100 +m <<" mtr " <<"or "<<m*100 +cm << " cms";
        
}

int main()
{   
    addition a;
    a.input();
    a.add();
    return 0;
}