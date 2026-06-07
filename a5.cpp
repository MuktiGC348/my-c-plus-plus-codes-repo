#include<iostream>
#include<iomanip>
using namespace std;

struct student{
    char name[50];
    int cls,phy,chem,maths,total,avg;

};

int main(){
    struct student s[3];
    for(int i=0;i<3;i++){
        cout<<"Enter the name of the student:"<<endl;
        cin>>s[i].name;
        cout<<"Enter the class of the student :"<<endl;
        cin>>s[i].cls;
        cout<<"Enter the mark in physics:"<<endl;
        cin>>s[i].phy;
        cout<<"Enter the mark in chemistry:"<<endl;
        cin>>s[i].chem;
        cout<<"Enter the mark in maths:"<<endl;
        cin>>s[i].maths;
    }

    for(int i=0;i<3;i++){
        s[i].total=(s[i].phy+s[i].chem+s[i].maths);
        s[i].avg=s[i].total/3;
    }
    
    cout<<"---------------------------------------------------"<<endl;

    cout<<left<<setw(10)<<"std name"
        <<left<<setw(10)<<"class"
        <<left<<setw(10)<<"Phy"
        <<left<<setw(10)<<"Chemistry"
        <<left<<setw(10)<<"Maths"
        <<left<<setw(10)<<"total"
        <<left<<setw(10)<<"averaGE"<<endl;

    cout<<"---------------------------------------------------"<<endl;
    for(int i=0;i<3;i++){
    cout<<left<<setw(10)<<s[i].name
        <<left<<setw(10)<<s[i].cls
        <<left<<setw(10)<<s[i].phy
        <<left<<setw(10)<<s[i].chem
        <<left<<setw(10)<<s[i].maths
        <<left<<setw(10)<<s[i].chem
        <<left<<setw(10)<<s[i].maths<<endl;
    }
    
    return 0;
}