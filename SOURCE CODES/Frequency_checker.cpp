#include<iostream>
using namespace std;
int frequency(string s,char a){
    int count=0;
    int i=0;
    while(s[i]!='\0'){
        if(s[i] == a){
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    string c;
    getline(cin,c);
    cout<<"In string \'e\' charcter persent in "<<frequency(c,'e')<<" times"<<endl;

    return 0;
}