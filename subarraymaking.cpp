#include<iostream>
using namespace std;

int function(int arr[],int n){
    int sum=0;
    cout<<"sum of the sbarrays are: ";
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            cout<<" "<<sum;
        }
    }
}  
    
int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    function(arr,n);   

    return 0;
}
