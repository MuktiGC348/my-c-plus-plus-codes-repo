#include<iostream> //Swping pointer using function
using namespace std;

void swap(int*c,int*d){
     int temp=*c;
        *c=*d;
        *d=temp;

    cout<<"NUmber after swaping is "<< *c <<" " <<*d;
}

int main(){
    int a,b,temp;
    cin>>a>>b;

    int*c=&a;
    int*d=&b;

    cout<<"Number before Swaping are "<<*c<<" "<<*d<<endl;

    swap(c,d);
    

    return 0;
}