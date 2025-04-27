#include<iostream>
using namespace std;
int main(){
    int num=1234555;
    int count=0;

    while (num!=0)
    {
       count++;
       num=num/10;
    }
    cout<<count;
    
}