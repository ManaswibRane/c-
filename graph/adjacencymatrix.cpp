#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main()
{
    return 0;
}
// class Solution {
// public:
//     bool canFinish(int numCourses, vector<vector<int>>& pre) {
//         //graph creaion
//         unordered_map<int,vector<int> adj;
//         for(vector<int> & vec : pre){
//             int v=vec[1];
//             int u=vec[0];
//             adj[u].push_back(v);
            
//         }
//         return solve(adj);
//     }
// };
// n=4 0,1,2,3
// list{ (1,0),(2,0),(2,1),(3,1)   }
// 1---edge-->0
// n courses--->0--->n-1
// cyclic/bipatite