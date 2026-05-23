#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void tangGapDoi(int &x) {
x=x*2;
}
long long tinhTongDeQuy(vector <int> &a, int n) {
    if (n<=0){
        return 0;
    }
    return a[n-1] + tinhTongDeQuy(a,n-1);
}
int main() {
    int n;
cin>>n;
vector <int> a(n);
for(int i=0;i<=n-1;i++) {
cin>>a[i];
tangGapDoi(a[i]);
cout<<a[i]<<" ";
}
cout<<endl<<tinhTongDeQuy(a,n);
return 0;
}
