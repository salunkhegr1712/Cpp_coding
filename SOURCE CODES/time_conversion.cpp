#include<iostream>
using namespace std;
class time{
    private:
        int hours;
        int minutes;
        int seconds;
    public:

        void input();
        void time_conversion();
};
void time::input(){
    cout<<"enters total time in seconds ::"<<endl;
    cin>>seconds;
}
void time::time_conversion(){
    int a=seconds;
    seconds=a%60;
    a=a/60;
    minutes=a%60;
    a=a/60;
    hours=a;
    cout<<"format is hour:minutes:seconds"<<endl;
    cout<< "conversion is = "<<hours<<" : "<<minutes<<" : "<<seconds<<endl; 
}

int main()
{
    time a;
    a.input();
    a.time_conversion();
   return 0;
}