#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
public:
    vector<int> queryResults(int l, vector<vector<int>>& q) {
             unordered_set<int> colour;
             unordered_set<int> balls;

             vector<int> ans;
             int c=0;

          for(int i=0;i<l;i++) {
             if(colour.find(q[i][1])==colour.end() && balls.find(q[i][0])==balls.end()){
              c++;
             colour.insert(q[i][1]);
             balls.insert(q[i][0]);
             }
            ans.push_back(c);
          }    
          return ans; 
    }
};
int main()
{
    int l=4;
   vector<vector<int>> q= {{1,4},{2,5},{1,3},{3,4}};
  Solution S;
  S.queryResults(l,q);
    return 0;
}