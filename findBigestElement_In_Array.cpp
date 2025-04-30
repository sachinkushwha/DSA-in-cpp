#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={51,6,2,4,1,88};
    int len=sizeof(arr)/sizeof(arr[0]);
    int big=INT_MIN;
    for(int i=0;i<len;i++){
        if(big<arr[i]){
            big=arr[i];
        }
    }
    cout<<big;
}