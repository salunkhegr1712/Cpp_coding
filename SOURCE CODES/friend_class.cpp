#include<iostream>
using namespace std;
class class2;
class class1{
    private:
        int certain=10;
    friend class2;

};
class class2{    
    private:
        int x=50;
    public:
        class1 m;
        void multiply(){
            cout<<"multiplication is:"<<m.certain*x;
        }

//just say friend class_name and in new class declare variable of first class 
//if you dont write the code saying friend so private membrs cannot be acccesed
// outside the class
};
int main()
{
    class2 a;
    a.multiply();
    return 0;
}