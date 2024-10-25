//Write a program to find the multiplication values and the cubic values using inline function.
#include<iostream>
using namespace std;
inline int multi(int a,int b){
    return a*b;
    }
inline int cube(int a){
    return a*a*a;
    }

int main(){
    int a,b;
    cout<<"Enter numbers:";
    cin>>a>>b;
    cout<<"Result="<<multi(a,b)<<endl;
    cout<<"Result="<<cube(a)<<endl;
}