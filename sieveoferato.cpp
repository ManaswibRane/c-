#include<iostream>
#include<vector>
using namespace std;
vector<bool> Prime(int n){
   vector<bool> isPrime(n+1,true);
   isPrime[0]=false;
   isPrime[0]=false;
   for(int i=2;i<=n;i++){
    if(isPrime[i]==true){
        for(int j=2;j*i<=n;j++){
            isPrime[i*j]=false;
        }
    }
   }
   return isPrime;
}
int main(){
   vector<bool> ans=Prime(30);
   for(int i=0;i<=30;i++){
    if(ans[i]){
        cout<<i<<"\t";
    }
   }
    return 0;
}