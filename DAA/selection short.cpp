// #include<iostream>
// using namespace std;

// int main(){
// int arr[]={4,8,6,7,2,1};
// for(int i=0;i<5;i++){
//     int minindx=i;
//     for(int j=i+1;j<6;j++){
//         if(arr[j]<arr[minindx]){
//             minindx=j;
//         }
       
//     }
//      int temp=arr[i];
//         arr[i]=arr[minindx];
//         arr[minindx]=temp;
// }
// for(int i=0;i<6;i++){
//     cout<<arr[i];
// }
// }

#include<iostream>
using namespace std;
void selectionSort(int a[],int size){
    int smallest=0;
    int k=0;
    for(int i=0;i<size-1;i++){
        smallest=a[i];
        // k=i;
        cout<<k;
        for(int j=i+1;j<size;j++){
            if(a[j]<smallest){
                smallest=a[j];
                k=j;
            }
                
        }
        // a[k]=a[i];
        // a[i]=smallest;
        // cout<<a[k];
        int temp=a[k];
        a[k]=a[i];
        a[i]=temp;

    }
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<' ';
    }
}

int main(){
int arr[6]={5,4,3,2,1,6};
selectionSort(arr,6)  ;  
    return 0;
}