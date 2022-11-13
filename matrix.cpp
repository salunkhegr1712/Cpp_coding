#include<iostream>
using namespace std;

int main()
{
    int matrix1[3][3]={{1,3,4},{4,5,6},{7,4,5}};
    int matrix2[3][3]={{7,8,8},{9,3,9},{9,0,2}};
    int sum[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
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
    //second matrix
    cout<<"Second matrix"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<""<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    //sum matrix
    cout<<"Sum matrix"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<""<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}