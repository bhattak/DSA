#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

void findVector(vector<int>v){
    auto it = find(v.begin(), v.end(),5);
    if (it !=v.end()){
       int index = it-v.begin();  
       //int index=distance(v.begin(), it);  //works fine as well
       cout<<"Element is present at "<< index+1 << " position"<<endl;
    }
    else
        cout<<"Not Present..."<<endl;
}

void findSet(set<int> s){
    auto pos = s.find(3);
    if(pos != s.end()){
        int loc=distance(s.begin(), pos);
        cout<<"Element is present at "<< loc+1<< " position"<<endl;
    }
    else
        cout<<"Element not present !!!"<<endl;   
}

int main(){
    vector<int> v{1,3,5,-5,2,4,7,8};
    set<int> s{2,3,4,5};
    int n=v.size();
    findVector(v);
    findSet(s);
    return 0;
}