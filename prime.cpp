#include<iostream>
#include<math.h>
using namespace std;

int isPrime1(int n){
    if(n==0 || n==1)
        return 1;
    else
        for(int i=2;i<n/2;i++){
            if(n%i == 0)
                return -1;
        }
        return 1;
}
int isPrime2(int n){
    if(n==0 || n==1)
        return 1;
    else
        int r=sqrt(n);
        for(int i=2;i<=sqrt(n);i++){
            if(n%i == 0)
                return -1;
        }
        return 1;
}

int main(){
    int n=49;
    int result=isPrime1(n);
    if(result==1)
        cout<<"Is Prime ....";
    else    
        cout<<"Not Prime ....";
    return 0;
}