#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> &vec){
    for(int x: vec){
        cout<<x<<" ";
    }

}
bool myComparator(int a,int b){
    if(a<b){
        return true;
    }
    return false;
}
int main()
{
    vector<int> vec={57,423,7543};


  sort(vec.begin(),vec.end(),myComparator);
    print(vec);
    return 0;
}