#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
       int n,q;
       cin>>n;
       vector<int> v(n);
       for (int &a:v){
        cin>>a;
       }
       cin>>q;
       for (int i=0;i<q;i++){
            int k;  
            cin>>k;
            auto lb= lower_bound(v.begin(),v.end(),k);
            if (lb!=v.end() && *lb==k){
                cout<<"Yes";
            }
            else {cout<<"No";}
            int index= lb - v.begin()+1;
            cout<<" "<<index<<endl;
       }
    return 0;
}
