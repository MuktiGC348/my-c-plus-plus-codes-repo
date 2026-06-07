#include<iostream>
using namespace std; 

int main(){

    int n1,n2;
   char op;
   cout<<"Enter  two numbers:";
   cin>>n1>>n2;

   cout<<"Enter operahends:";
   cin>>op;

   switch(op){

    case '+':
        cout<<n1+n2;
        break;

    case '-':
        cout<<n1-n2;
        break;

    case '*':
        cout<<"Your answer is ";
        cout<<n1*n2;
        break;

    case '%':
        cout<<n1%n2;
        break;

    default:
        cout<<"non assigned opperahends";

   }

   return 0;


}