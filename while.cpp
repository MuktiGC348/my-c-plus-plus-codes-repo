#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i=0;
    while(i<=10){
        int multiply;
        multiply=n*i;
        cout<<n<<"x"<<i<<"="<<multiply<<endl;
        i++;
    }

    return 0;

}