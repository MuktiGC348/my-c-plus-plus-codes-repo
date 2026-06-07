#include<iostream>
using namespace std;

int array(int arr[],int key,int n){
    int s=0;
    int e=n;                      // 1 2 3 4 5 6 7 

    while(s<=e){
        int mid=(s+e)   /2;
        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]>key){
            e=mid-1;
        }

        else{
            s=mid+1;
        }
    }
    return -1;
}  
    
int main(){
    int n;
    cout<<"HOw many elements :";
    cin>>n;

    int arr[n];
    cout<<"The elements are: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int key;
    cout<<" search for what ?  :";
    cin>>key;
    int d=array(arr,key,n);
   
    cout<<"FOund: "<<d;

    return 0;

}