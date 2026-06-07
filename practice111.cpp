#include<iostream>
using namespace std;
int array(int arr[]){
    int greatest;
    for(int i=0;i<10;i++){
        greatest=arr[i];
        if(arr[i+1]>greatest){
            greatest=arr[i];
        }
    }
    return greatest;

 

    
}

int main(){
    int arr[4];
    cout<<"Enter the number in array:";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int d=array(arr);
    cout<<d;
    return 0;
}
