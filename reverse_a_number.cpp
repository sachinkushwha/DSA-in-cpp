#include<iostream>
using namespace std;
int main(){
    int a=1234;
    int rev=0;
    int digit;
    while(a!=0){
        digit=a%10;
        rev=rev*10+digit;
        a=a/10;
    }
    cout<<rev;
}