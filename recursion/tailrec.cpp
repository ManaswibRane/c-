// End step recursive call
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
//space efficient
int fact(int n,int prod){
   if(n<=1){
    return prod;
   }   
   
    return fact(n-1, prod*n);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n,1);
    return 0;
}