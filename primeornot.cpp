#include<iostream>
using namespace std;

int main(){

    int n1,n2;
    cout<<"Enter the range of the numbers:";
    cin>>n1>>n2;

    for(int i=n1;i<=n2;i++){
        for(i=2;i<=n2;i++){
            if(i%2!=0){
            continue;
             }
            if(i==i){
            cout<<i<<endl;

             }  
        }
        
        return 0;
    }
}