#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"Input the character:";
    cin>>button;

    switch(button){

        case 'a':
        cout<<"netre vai laude";
        break;
        
        case 'b':
        cout<<"netre is a donkey";
        break;

        case 'c':
        cout<<"laude netre";
        break;

        case 'd':
        cout<<"go go go";
        break;

        case 'e':
        cout<<"You are SNOW cool";
        break;

        default:
        cout<<"No character assigned";
    }
}

