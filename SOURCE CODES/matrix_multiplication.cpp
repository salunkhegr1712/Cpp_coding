#include<iostream>
using namespace std;

int main()
{
    int matrix1[3][2]={{1,3},{4,5},{7,4}};
    int matrix2[2][3]={{7,8,8},{9,3,9}};
    int product[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            product[i][j]=matrix1[i][j]*matrix2[j][i];
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
            cout<<""<<product[i][j]<<" ";
        }
        cout<<endl;
    }
    //product matrix
    cout<<"product matrix"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<""<<product[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}