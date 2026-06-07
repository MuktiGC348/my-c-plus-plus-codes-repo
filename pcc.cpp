#include<iostream>
#include<iomanip>
using namespace std;

struct employee {
    char name[50],post[50];
    int id;
    float salary;
};

int main(){
  struct employee s[3];
  for(int i=0;i<3;i++){
    cout<<"Enter the name of the employee:"<<endl;;
    cin>>s[i].name;
    cout<<"Enter the ID:"<<endl;;
    cin>>s[i].id;
    cout<<"Enter the post:"<<endl;;
    cin>>s[i].post;
    cout<<"Enter the salary:"<<endl;;
    cin>>s[i].salary;
    
    
  }
  for(int i=0;i<3;i++){
    s[i].salary=s[i].salary+(20/100)*s[i].salary;
  }

  //using setw>> setwidth function to make table 
  cout<<left<<setw(10)<<"NAME"
        <<setw(8)<<"ID"
        <<setw(10)<<"POST"
        <<setw(10)<<"SALARY"<<endl;

    cout<<"-----------------------------------------------------"<<endl;
    

    for(int i=0;i<3;i++){
        cout<<left<<setw(10)<<s[i].name
        <<setw(10)<<s[i].id
        <<setw(10)<<s[i].post
        <<setw(10)<<s[i].salary<<endl;
    }
return 0; 
}