#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
auto myComparator(pair<int,int> p1,pair<int,int> p2){//bool
    if(p1.first>p2.first){
        return true;
    }
    

      return p1.second>p2.second;//     if(p1.second>p2.second){
                               //         return true;
                               //     }
                               // }
                               // return false;
}
void print(vector<pair<int,int>> &vec){
    for(pair<int,int> p : vec){
        cout<<"{"<<p.first<<" , "<<p.second<<"} ";
    }
}
int main()
{  
    vector<pair<int,int>> vec={ {1,2}, {1,4} ,{1,1} ,{2,1} };
    sort(vec.begin(),vec.end(),myComparator);
    print(vec);
    return 0;
}