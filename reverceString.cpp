#include<iostream>
using namespace std;
int main(){
    string sname="sachin";
    string p="";
    for(int i=sname.length()-1;i>=0;i--){
       p+=sname[i]; 
    }
    cout<<p.length();
    cout<<p;
    return 0;
}