//Write a C++ program to create a class called Person that has private member variables for name, age and country. 
#include<iostream>
#include<string.h>
using namespace std;
class person{
    private:
    string name, country;
    int age;
    public:
    void set_data(string nm, string coun, int ag){
        name=nm;
        country=coun;
        age=ag;
    }

    void get_data(){
        cout<<"Name: "<<name<<endl;
        cout<<"Country: "<<country<<endl;
        cout<<"Age: "<<age<<endl;

    }

};
int main(){
    person p;
string name, country;
int age;
cout<<"Enter name:";
 getline(cin, name);
cout<<"Enter country name:";
cin>>country;
cout<<"Enter age of person:";
cin>>age;

p.set_data(name, country, age);
p.get_data();


}