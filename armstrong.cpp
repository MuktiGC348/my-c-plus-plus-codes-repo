#include<iostream>
using namespace std;

int array(int arr[],int n){
    if(n==1){
        return 1;               // 
    }

    int ans=0;
    int mx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx=max(mx,arr[i]);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int arr[n+1];
     arr[n]=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int d=array(arr,n);
    cout<<"record breakin"<<d;

    return 0;
}