//Subarrays making
#include<iostream>
using namespace std;

void array(int arr[],int n){
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            
            cout<<" "<<arr[j];
        }
    }
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    array(arr,n);
    
    return 0;
}