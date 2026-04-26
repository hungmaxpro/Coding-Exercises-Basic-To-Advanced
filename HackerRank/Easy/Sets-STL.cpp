#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    int k;
    cin>>k;
    set<int> s;
    int i=0;
    while(i<k) {
        int q1,q2;
        cin>>q1>>q2;
        if (q1==1){s.insert(q2);}
        else if (q1==2){s.erase(q2);}
        else if (q1==3){
            auto a=s.find(q2);
            if (s.find(q2)==s.end()){
                cout<<"No"<<endl;
            }
            else{cout<<"Yes"<<endl;}
            }
        i++;
    }
    return 0;
}
