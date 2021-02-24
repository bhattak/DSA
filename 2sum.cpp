#include<iostream>
#include<math.h>
using namespace std;

void check(int arr[],int sum,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum)
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
        }
    }
}
int main(){
    int arr[]={1,2,3,5,4,6,3};
    int sum=7;
    int size=sizeof(arr)/sizeof(arr[0]);
    check(arr,sum,size);
    return 0;
}