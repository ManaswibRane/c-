#include<iostream>
using namespace std;
int main()
{
    
    return 0;
}
// accumulate-->sum  
// accumulate(begin(mat),end(mat),0,lambda)
// auto lambda =[&](int sum,vector<int> vec){
//     //    sum+=accumulate(vec.begin(),vec.end(),0);
//     if(row!=n-row-1){vec[row]+vec[n-row-1];}
    
// };
// class Solution {
// public:
//     int diagonalSum(vector<vector<int>>& mat) {
//         int row=0;
//         auto lambda=[&](int sum,vector<int> vec){
//              sum+=vec[row];
//              if(row!=(vec.size()-row-1 )){
//                 sum+=vec[vec.size()-row-1];
//              }
//              row++;
//              return sum;
//         };



//         int result=accumulate(mat.begin(),mat.end(),0,lambda);
//         return result;
//     }
// };
