#include<iostream>
using namespace std;
int main(){
    system("cls");
    int a[]={5,8,74,2,6,10};
    for(int j=1;j<6;j++){
        int key=a[j];
        int i=j-1;
        while(i>=0 && a[i]>key){
            a[i+1]=a[i];
            i=i-1;
             a[i+1]=key;
        }
        // a[i+1]=key;
    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<",";
    }
}