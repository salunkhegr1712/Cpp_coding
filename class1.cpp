#include<iostream>
using namespace std;

class rectangle{
    private:
        int length;
        int breadth;

    public:
        void input(){
            cout<<"Enter the length:: "<<endl;
            cin>>length;
            cout<<"Enter the Breadth:: "<<endl;
            cin>>breadth;
        }
        void display(){
            cout<<"Value of the Length:: "<<length<<endl;
            cout<<"Value of the Breadth:: "<<breadth<<endl; 
        }

        void area(){
            cout<<"Area is:: "<< length*breadth<<endl;
        }

        void perimeter(){
            cout<<"Perimeter is:: "<< 2*(length+breadth)<<endl;
        }

        void overwrite(){
            cout<<"Enter new the length:: "<<endl;
            cin>>length;
            cout<<"Enter new the Breadth:: "<<endl;
            cin>>breadth;
        }
};

int main()
{
    rectangle apple;
    apple.input();
    apple.display();
    apple.area();
    apple.perimeter();
    apple.overwrite();
    apple.display();
    apple.area();
    apple.perimeter();
   
    return 0;
}