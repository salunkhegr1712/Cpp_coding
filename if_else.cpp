#include<iostream>
int main()
{
    int c;
    std::cin >> c;
    if(c > 0){
        std::cout<<"Number is Positive";
    }
    else if(c<0){
        std::cout<<"Number is Negative";
    }
    else{
        std::cout<<"Number is Zero";
    }
    return 0;
}
