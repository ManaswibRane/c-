#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
void print(string str,int idx){
    if(idx>=str.length()){
        return ;
    }
    print(str,idx+1);
    cout<<str[idx];


}
int main()
{
    string str="Hello World";
    print(str,0);
    return 0;
}