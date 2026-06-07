#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number upto which you want odd numbers :";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }


        if(i%2!=0){
            cout<<i<<endl;

        }
    }

    return 0;

}