#include<iostream>
using namespace std;

int main(){

    int a=1,b=4,c=9;

    if((a>b) && (a>c)){
        cout<<a<<"the greatest";
    }
    else if((b>a) && (b>c)){
        cout<<b<<"the grestest ";
    }
    else{
        cout<<c<<" the greatest";

    }
return 0;
}