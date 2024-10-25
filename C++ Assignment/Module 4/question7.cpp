//Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
#include<iostream>
using namespace std;
class rectangle{
    private:
    int length, width;
    public:
    rectangle();
    int area_r(){
    return length * width;
}
  
int circum(){
    return 2*length +2*width;
}


};
rectangle :: rectangle(){
    cout<<"Enter length and width of circle:";
    cin>>length>>width;
}

int main(){
rectangle r;
cout<<"Area of rectangle="<<r.area_r()<<endl;
cout<<"Circumference of rectangle="<<r.circum()<<endl;


}

