//Write A program to calculate potential energy of body. [PE=MGH where G=9.8]
#include<iostream>
using namespace std;

int main(){

    int mass,height;
    cout<<"Enter the mass of the body:";
    cin>>mass;
    cout<<"Enter the height of the body:";
    cin>>height;


    float PE;
    PE = mass*9.8*height;


    cout<<"The potential energy of the body is "<<PE<<endl;

    return 0;




}