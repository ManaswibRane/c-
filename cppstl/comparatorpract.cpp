#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comparator(int a,int b){
    if(a>b){
        return true;
    }
    return false;
}
void print(vector<int> vec){
    for(int i:vec){
        cout<<i<<" ";
    }
}
int main()
{
    vector<int> vec={74,13,753,8642,23};
    sort(vec.begin(),vec.end(),comparator);
    print(vec);
    return 0;
}