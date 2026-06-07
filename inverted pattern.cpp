#include<iostream>
using namespace std;

int main(){

    int h;
    cin>>h;


    for(int i=1;i<=h;i++){
        for(j=1;j<=h+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}