#include<iostream>
using namespace std;

void array(int arr1[2][2],int  arr2[2][2],int add[2][2]){
    int i,j;
    
    for(i=0;i<2;i++){
        for(j=0;i<2;j++){
            add[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
}
void displaymatrix(int mat[2][2]){  
    
    for(int i=0;i<2;i++){
        for(int j=0;i<2;j++){
           cout<<" " <<mat[i][j];
        }
    }
    cout<<endl;
    cout<<endl;
}
      


int main(){
    int arr1[2][2];
    cout<<"Enter first matrix: ";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        cin>>arr1[i][j];
        }
    }

    int arr2[2][2];
    cout<<"Enter second matrix: ";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr2[i][j];
        }
    }

   int add[2][2];
   

    cout<<"FIRST matrix: ";
    displaymatrix(arr1);

     cout<<"second matrix: ";
    displaymatrix(arr2);

     cout<<"third matrix: ";
    displaymatrix(add);


    array(arr1,arr2,add);


    return 0;
}   
