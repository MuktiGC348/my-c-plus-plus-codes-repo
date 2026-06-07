#include<iostream>
#include<string>
using namespace std;

bool checkpalindrome(string text){
    int i=0;
    int j=text.length()-1;
    while(i<j){
        if(text[i]!=text[j]){
            return false;
        }
        i++;
        j--;

    }
    return true;

}

int main(){
    string text;
    getline(cin,text);

    if(checkpalindrome(text)){
        cout<<text<<"--->"<<"Plindrome";
    }
    else{
        cout<<text<<"--->"<<"not ";
    }
    return 0;
}