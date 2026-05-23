#include <iostream>
#include <string>
#include <vector>
#include <sstream> 
#include <cctype>
using namespace std;
void chuanhoa(string &s) {
    for (char &c : s) c = tolower(c);
    stringstream ss(s); 
    string tu;         
    vector<string> v;   
    while (ss >> tu) {
        tu[0] = toupper(tu[0]);
        v.push_back(tu);       
    }
    string ketQua = "";
    for (int i = 0; i < v.size(); i++) {
        ketQua += v[i];
        if (i != v.size() - 1) { 
            ketQua += " ";
        }
    }
    
    s = ketQua; 
}
int demso(string &x) {
    int dem = 0; 
    for (char c : x) {
        if (isdigit(c)) dem++;
    }
    return dem;
}
int main() {
    string s, mk;
    getline(cin, s);
    getline(cin, mk);
    chuanhoa(s);
    cout << s << endl;
    cout << demso(mk);   
    return 0;
}
