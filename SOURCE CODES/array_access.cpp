#include<iostream>
using namespace std;
// * = referencing
// & = Dereferncing

int main()
{
    int array[]={1,2,3,4,5,6,7,8};
    int*a= & array[0];
    for(int i=0;i<8;i++){
        cout<<" "<< *(a)<<" ";
        a++;
    }
    
    return 0;
}