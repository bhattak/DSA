#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for (int j=5; j >i; j--){
            cout<<" ";
        }        
        for(int j=0;j<=i;j++){
            cout<<1;
        }                  
        for(int j=0;j<=i-1;j++){
            cout<<1;
        }       
         for (int j=5; j >i; j--){
            cout<<" ";
        } 
        cout<<endl;
    }
    return 0;
}