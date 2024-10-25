//Write a program to create simple calculator.

#include<iostream>
using namespace std;
class Addition
{
    public:
    int num1,num2, add;
    public:
    Addition(){
    cout<<"\nEnter num1 and num2:";
    cin>>num1>>num2;
    add=num1+num2;
    cout<<"Addition of "<<num1<<"+"<<num2<<" ="<<add;
    }
 
};
class Subtraction{
    public:
    int num1,num2, Sub;
    public:
    Subtraction(){
    cout<<"\nEnter num1 and num2:";
    cin>>num1>>num2;
    Sub=num1-num2;
    cout<<"Subtraction of "<<num1<<"-"<<num2<<" ="<<Sub;
    }

 
};
class Multiplication{
    public:
    int num1,num2, multi;
    public:
    Multiplication()
    {
    cout<<"\nEnter num1 and num2:";
    cin>>num1>>num2;
    multi=num1*num2;
    cout<<"Multiplication of "<<num1<<"*"<<num2<<" ="<<multi;
    }

 
};
class Division
{
    public:
    int num1,num2, Div;
    public:
    Division()
    {
    cout<<"\nEnter num1 and num2:";
    cin>>num1>>num2;
    Div=num1/num2;
    cout<<"Division of "<<num1<<"/"<<num2<<" ="<<Div;
    }

 
};

int main(){
Addition();
Subtraction();
Multiplication();
Division();

}

