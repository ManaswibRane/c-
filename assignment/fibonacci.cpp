#include<iostream>
using namespace std;
void fibonacci(int n){
   
       int a=0,b=1;
        if(n>2){
        cout<<a<<" "<<b<<" ";
    }
    for(int i=0;i<n;i++){
           int sum=a+b;
           cout<<sum<<" ";
           a=b;
           b=sum;
    }
}
int main()
{
    int n;
    cin>>n;
    fibonacci(n);
 
    return 0;
}