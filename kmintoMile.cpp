#include<iostream>
using namespace std;

int main(){

    int num; //km may also be float but it is not necessarily to be included
    cin>>num;

    float miles;  //ans will come in decimal form so we use the float datatype here
    miles=num*0.621371;


    cout<<num<<" km is "<<miles<<" miles"<<endl;


    return 0;

}