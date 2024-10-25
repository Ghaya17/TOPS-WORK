//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class maths{
    public:
    int num1,num2;
    public:
    maths();
    int add_a(){
        return num1+num2;
    }
    int sub_s(){
        return num1-num2;
    }
    int Div_d(){
        return num1/num2;
    }
    int multi_m(){
        return num1*num2;
    }


};
maths:: maths(){
cout<<"Enter num1 and num2: ";
cin>>num1>>num2;

}
int main(){
maths m;
cout<<"Addition of numbers:"<<m.add_a()<<endl;
cout<<"Subtraction of numbers:"<<m.sub_s()<<endl;
cout<<"Division of numbers:"<<m.Div_d()<<endl;
cout<<"Multiplication of numbers:"<<m.multi_m()<<endl;

}