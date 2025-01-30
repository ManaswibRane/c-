#include<iostream>
using namespace std;
int main()
{
    int ans[3][3]={0};
    int mat1[3][3]={ {1,0,0}, {0,1,0}, {0,0,1}},mat2[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           
            for(int k=0;k<3;k++){
               ans[i][j]=ans[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";

        }
        cout<<endl;
    }


    return 0;
}