#include<iostream>
using namespace std;

void array(int arr[2][2],int arrr[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<" "<<arr[i][j];

        }
    }
        cout<<"ADDed matrix is: ";
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                int add[i][j]={arr[i][j]+arrr[i][j]};
                cout<<"  "<<add[i][j];
            }
             cout<<endl;
        cout<<endl;
        cout<<endl;
        }
      
    
}

int main(){
    cout<<"Enter first matrix:";
    int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter second matrix: ";
    int arrr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }


    array(arr,arrr);

    return 0;
}