#include<iostream>
using namespace std;
int main(){
    system("cls");
    int a[]={5,3,6,7,3,2,7};
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<7;i++){
        cout<<a[i];
    }
}