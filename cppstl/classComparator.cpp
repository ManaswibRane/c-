#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class myComparator{
    public:
    bool operator(int a,int b){
        if(a<b) return true;

        return false;
    }
};
int main()
{

    
    return 0;
}