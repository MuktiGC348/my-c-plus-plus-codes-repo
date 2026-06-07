#include<iostream>
#include<iomanip>
using namespace std;

struct employee{
    char name[50],post[50],address[50];
    int salary;

};

int main(){
    struct employee e;
    
        cout<<"Enter the name of the employee:"<<endl;
        cin>>e.name;
        cout<<"Enter the address of the employee:"<<endl;
        cin>>e.address;
        cout<<"Enter the post of the employee:"<<endl;
        cin>>e.post;
        cout<<"Enter the salary of the employee:"<<endl;
        cin>>e.salary;
    
    
    cout<<"---------------------------------------------------"<<endl;

    cout<<left<<setw(10)<<"EMPname"
        <<left<<setw(10)<<"ADDRESS"
        <<left<<setw(10)<<"POST"
        <<left<<setw(10)<<"SALARY"<<endl;

    cout<<"---------------------------------------------------"<<endl;

    cout<<left<<setw(10)<<e.name
        <<left<<setw(10)<<e.address
        <<left<<setw(10)<<e.post
        <<left<<setw(10)<<e.s<<endl;
    
    
    return 0;
}