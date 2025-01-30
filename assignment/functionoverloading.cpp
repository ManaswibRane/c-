#include<iostream>
using namespace std;
#define PI 3.142
int area(int r){
    return PI*r*r;
    }
int area(int l,int b){
    return l*b;

}
int area(float x){
    return x*x;

}    

int main()
{
    int l,b,r;
    float x;
    cin>>l>>b>>r>>x;
    cout<<"Area of rectangle is "<<area(l,b)<<endl;
    cout<<"Area of circle is "<<area(r)<<endl;
    cout<<"Area of square is "<<area(x)<<endl;
    return 0;
}