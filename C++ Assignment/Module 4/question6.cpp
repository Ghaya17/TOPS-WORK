//Write a C++ program to implement a class called Circle that has private member.

#include<iostream>
using namespace std;
#define PI 3.14
class circle{
    private:
    double r;
    public:
    circle();
    int area_r(){

     return PI * r * r;



    }
    int circum_c(){
        return 2 * PI * r;
    }
 

};
circle :: circle(){
    cout<<"Enter radius of circle:";
    cin>>r;
}

int main(){
circle c;
cout<<"Area of circle="<<c.area_r()<<endl;
cout<<"Circumference of circle="<<c.circum_c()<<endl;


}




