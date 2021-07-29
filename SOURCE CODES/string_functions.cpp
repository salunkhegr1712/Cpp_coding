#include<iostream>
#include<stdlib.h>
using namespace std;
void letter(string h){
    int i=0;
    int count1=0,count2=0,count3=0,count4=0;
    while(h[i]!='\0'){
        if(h[i]=='a'||h[i]=='e'||h[i]=='i'||h[i]=='o'||h[i]=='u'||h[i]=='A'
            ||h[i]=='E'||h[i]=='I'||h[i]=='O'||h[i]=='U'){
            count1++;
        }

        else if(h[i]=='1'||h[i]=='2'||h[i]=='3'||h[i]=='4'||h[i]=='5'||h[i]=='6'
            ||h[i]=='7'||h[i]=='8'||h[i]=='9'||h[i]=='0'){
            count2++;
        }

        else if(int(h[i]) ==32){
            count4++;
        }

        else{

            count3++;
        }
        i++;
    }
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;

    cout<<"The number of Character in string is:: "<<i<<endl;
    cout<<"The number of Vowels in string is:: "<<count1<<endl;
    cout<<"The number of Consonent in string is:: "<<count3<<endl;
    cout<<"The number of Number in string is:: "<<count2<<endl;
    cout<<"The number of Spaces in string is:: "<<count4<<endl;
}
int main()
{   
    string c;
    cout<<"enter the String here:: ";
    getline(cin,c);
    
    letter(c);

    return 0;
}