#include<iostream>
#include<iomanip>
using namespace std;

struct employee{
    int id;
    float salary,updatesalary;
    char name[50],post[50];
};
int main(){
    struct employee s[3];
    for(int i=0;i<3;i++){
        cout<<"Enter the name of the employee:"<<endl;
        cin>>s[i].name;
        cout<<"Enter the id of the employee:"<<endl;
        cin>>s[i].id;
        cout<<"Enter the post of the employee:"<<endl;
        cin>>s[i].post;
        cout<<"Enter the salary of the employee:"<<endl;
        cin>>s[i].salary;
        s[i].updatesalary=s[i].salary-(0.15*s[i].salary);
    }

    //update salary
   


    //for table
    cout<<left<<setw(10)<<"EMP_NAME"
        <<setw(8)<<"EMP_ID"
        <<setw(10)<<"EMP_POST"
        <<setw(8)<<"SALARY"
        <<setw(8)<<"NET_Salary"<<endl;

cout<<"-------------------------------------------------------------"<<endl;

for(int i=0;i<3;i++){
    if(s[i].updatesalary>=2000  &&  s[i].updatesalary<=10000){
    cout<<left<<setw(10)<<s[i].name
        <<left<<setw(8)<<s[i].id
        <<left<<setw(8)<<s[i].post
        <<left<<setw(8)<<s[i].salary
        <<left<<setw(8)<<s[i].updatesalary<<endl;
    }
}

return 0;

}