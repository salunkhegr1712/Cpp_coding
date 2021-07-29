#include<iostream>
using namespace std;
int main()
{
    int c;
    cin >> c;
    if(c > 0){
        if(c==2){
            cout<<"Number is prime number"<< endl;
        }
        else if(c==1){
            cout<<"Number is not a prime number"<< endl;    
        }
        else{
            int a=2;
            while( a < c){
                if(c % a == 0){
                    cout<<"Number is not a prime number"<< endl;
                    return 0;  
                }
                a++;
            }
            cout<<"Number is prime number"<< endl;
        }
    }
    return 0;
}