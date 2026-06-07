#include<iostream>
using namespace std;

struct student{
    char name[50];
    int roll,classs;
};

int main(){
    struct student s;
    cout<<"Enter the name:";
    cin>>s.name;
    cout<<endl<<"Enter the roll number:";
    cin>>s.roll;
    cout<<endl<<"Enter the class :";
    cin>>s.classs;

    cout<<"NAME:"<<s.name<<endl;
    cout<<"ROLL NUMBER:"<<s.roll<<endl;
    cout<<"CLASS:"<<s.classs<<endl;

    return 0;    
}
