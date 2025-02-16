#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int fibo(int n){
     if(n==0) return 0;
     if(n==1) return 1;
     return fibo(n-1)+fibo(n-2);
}
int main()
{
    cout<<fibo(3);
    int arr[]={1,2,3,4};
    cout << "sizeof(int): " << sizeof(int) << endl;
cout << "sizeof(arr): " << sizeof(arr) << endl;

    cout<<sizeof(arr)/4;
    return 0;
}
