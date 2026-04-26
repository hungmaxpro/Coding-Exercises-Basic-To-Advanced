#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    map<string,int> p;
     int a;
     cin>>a;
     for(int i=0;i<a;i++){
        int lenh;
        cin>>lenh;
        if(lenh==1){
            string key;
            int diem;
            cin>>key>>diem;
            if (p.find(key)==p.end()){
                p.insert(make_pair(key, diem)); }   
            else{
            p.find(key)->second+=diem;}
        }
        if (lenh==2){
            string key;
            cin>>key;
            p.erase(key);
        }
        if (lenh==3){
            string key;
            cin>>key;
            if(p.find(key)==p.end()){
                cout<<0<<endl;
            }
            else{
            cout<<p.find(key)->second<<endl;
            }
        }
     }
    return 0;
}




