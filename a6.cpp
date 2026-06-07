#include<iostream>
#include<iomanip>
using namespace std;

struct employee{
    char name[50],address[50],post[50];
    int salary;
    float tax,netsalary;

};

int main(){
    struct employee e[3];
    for(int i=0;i<3;i++){
        cout<<"Enter the name of the employee:"<<endl;
        cin>>e[i].name;
        cout<<"Enter the address of the employee :"<<endl;
        cin>>e[i].address;
        cout<<"Enter the post of the employee:"<<endl;
        cin>>e[i].post;
        cout<<"Enter the salary of the employee:"<<endl;
        cin>>e[i].salary;
        //cout<<"Enter the mark in maths:"<<endl;
        //cin>>s[i].maths;
    }

    for(int i=0;i<3;i++){
        e[i].tax=0.15*e[i].salary;
        e[i].netsalary=e[i].salary-e[i].tax;
    }
    
    cout<<"---------------------------------------------------"<<endl;

    cout<<left<<setw(10)<<"EMP name"
        <<left<<setw(10)<<"ADDRESS"
        <<left<<setw(10)<<"POST"
        <<left<<setw(10)<<"SALARY"
        <<left<<setw(10)<<"TAX AMT"
        <<left<<setw(10)<<"NETSALARY"<<endl;
        //<<left<<setw(10)<<"averaGE"<<endl;

    cout<<"---------------------------------------------------"<<endl;
    for(int i=0;i<3;i++){
    cout<<left<<setw(10)<<e[i].name
        <<left<<setw(10)<<e[i].address
        <<left<<setw(10)<<e[i].post
        <<left<<setw(10)<<e[i].salary
        <<left<<setw(10)<<e[i].tax
        <<left<<setw(10)<<e[i].netsalary
        //<<left<<setw(10)<<s[i].avg
        <<endl;
    }
    
    return 0;
}