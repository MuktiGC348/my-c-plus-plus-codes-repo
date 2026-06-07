#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n ;i++){
        cin>>n;
    }

   
    const N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++ ){
        idx[i]=-1;
    }

    int minidx=__INT_MAX__;
    for(int i=0;i<n;i++){
        if(idx[arr[i]]==-1){
            idx=i;
        }
        else{
            minidx=min(minidx,idx[arr[i]]);
        }

    }

    //Cout part

    if(idx==__INT_MAX__){
        cout<<"-1";
    }
    else{
        cout<< minidx+1<<endl;
    }

    return 0;
}