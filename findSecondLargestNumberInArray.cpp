#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {6,3, 8, 5};
    int first = INT_MIN;
    int second = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    // {
    //     if (secondlarge < arr[i])
    //     {
    //         secondlarge=arr[i];
    //     }
       
    // }
    //         for (int i = 0; i < size; i++)
    //         {
    //             if(ni<arr[i]&&arr[i]!=secondlarge)
    //                 {
    //                     ni = arr[i];
    //                 } 
                
    //         }
    //        
    {
        if(first==0||arr[i]>first){
            second=first;
            first=arr[i];
        }else{
            if(second==0||arr[i]>second){
                if(arr[i]!=first){
                    second=arr[i];
                }
            }
        }
    }
    cout<<second;
}