#include<iostream> //linear search
using namespace std;


int searching(int arr[],int key,int n){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the number of elements in array:"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element in array for search:"<<endl;
    cin>>key;

    int d=searching(arr,key,n);
    
    
    cout<<"Element is present in the index:"<<d;
    return 0;
}