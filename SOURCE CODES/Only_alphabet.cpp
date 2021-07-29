#include<iostream>
#include <stdlib.h>
using namespace std;
void diff(string h,string z){
    
    int i=0,j=0;
    while(h[i]!='\0'){
        if(isalpha(h[i])==1){
            z[j]=h[i];
            j++;
        }
        i++;
    }
    cout<<"string only with alphabets is :: "<<z;  

}
int main()
{
    string h,z;
    cout<<"enter your string"<<endl;
    cout<<"your responce::";
    getline(cin,h);
    diff(h,z);
    return 0;
}