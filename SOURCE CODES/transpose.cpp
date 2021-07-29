#include<iostream>
using namespace std;

int main()
{
    int matrix1[3][3]={{1,3,4},{4,5,6},{7,4,5}};
    int sum[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=matrix1[j][i];
        }
    }
    //first matrix
    cout<<"first matrix"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<""<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //sum matrix
    cout<<"Transpose matrix"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<""<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}