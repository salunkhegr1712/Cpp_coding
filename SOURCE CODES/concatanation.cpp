#include<iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

// int main()
// {
//     char h[100];
//     char z[100];
//     char*m;
//     cout<<"enter your 1st string"<<endl;
//     cout<<"your responce::";
//     cin.getline(h,100);
//     cout<<"enter your 2nd string"<<endl;
//     cout<<"your responce::";
//     cin.getline(z,100);
//     strcat(h,z);
//     cout<<" "<<h;

//     return 0;
// }
int main(){
    string h,z;
    cout<<"enter your 1st string"<<endl;
    cout<<"your responce::";
    getline(cin,h);
    cout<<"enter your 2nd string"<<endl;
    cout<<"your responce::";
    getline(cin,z);
    h=h+z;
    cout<<" "<<h;
    return 0;

}