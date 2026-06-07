#include<iostream>
using namespace std;

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter a element"<<i+1<<":";
        cin>>arr[i];
    }

        //displaying the array elements
         cout<<"Array elements are:"<<endl;
        for(int i=0;i<10;i++){
           cout<<arr[i]<<endl;
            
        }
        
    

    return 0;
}