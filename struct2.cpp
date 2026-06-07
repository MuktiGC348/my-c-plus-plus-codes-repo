#include<iostream>
using namespace std;

struct student{
    char name[50];
    int roll;
    float height;

};

int main(){
    struct student s;
    cin>>s.name;
    cin>>s.roll;
    cin>>s.height;

    cout<<"Info:"<<endl;
    cout<<"NAME:"<<s.name<<endl;
    cout<<"ROLL:"<<s.roll<<endl;
    cout<<"HEIGHT:"<<s.height<<endl;

    return 0;
}