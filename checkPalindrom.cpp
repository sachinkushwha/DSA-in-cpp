#include<iostream>
using namespace std;
int main(){
    string n="sss";
    string r="";
    for(int i=n.length()-1;i>=0;i--){
        r+=n[i];
    }
    if(r==n){
        cout<<"palindrom";
    }else{
        cout<<"not palin"<<r;
    }
}