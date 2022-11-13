#include<iostream>
using namespace std;
//string is collection of characters
//string is also an form of array
//string ends with '\0'
//if string has 4 characters then it has 4 + 1 = 5 characters
int main()
{    
    char str[]="string Hello";//must be double quotes
    char str1[]={'s','t','r','i','n','g','\0'};//must be single quotes
    cout<<""<<str<<endl;
    cout<<""<<str1<<endl;
 
    
    return 0;
}