#include<iostream>
using namespace std;

int main(){
    int n=10;
    int prev=0;
    int cur=0;
    int next=0;
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<cur <<" ";
        }
        else if(i==1){
            cur=cur+1;
            cout<<cur<<" ";
        }
        else{
            next=cur+prev;
            cout<<next<< " ";
            prev=cur;
            cur=next;
        }
    }
    return 0;
}