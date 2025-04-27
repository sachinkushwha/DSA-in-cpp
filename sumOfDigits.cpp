#include<iostream>
using namespace std;
int main(){
    int digit=2215;
    int sum=0;
    while(digit>0){
        int onedigit=digit%10;
        sum=sum+onedigit;
        digit=digit/10;
    }
    cout<<sum;
}