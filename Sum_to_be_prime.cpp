#include<iostream>
using namespace std;
int isprime(int c){
    if(c > 0){
        if(c==2){
            return 1;
        }
        else if(c==1){
            return -1;   
        }
        else{
            int a=2;
            while( a < c){
                if(c % a == 0){
                    
                    return -1;  
                }
                a++;
            }
            return 1;
        }
    }
}
int main()
{
    int a,i=2,j=-1;
    cout<<"enter the number::";
    cin>>a;
    while(i != a/2 +1){
        if(isprime(i)==1 && isprime(a-i)==1){
            cout<<" "<<a<<" = "<<i<<" + "<<a-i<<endl;
            j=1;
        }
        i++;
    }
    if(j==-1){
        cout<<"the number "<<a<<" cant be written as sum of two prime numbers";
    }
    return 0;
}