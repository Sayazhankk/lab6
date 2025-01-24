#include <bits/stdc++.h>
using namespace std;
int main () {
    string g;
    char x;
    int n;
    getline(cin,g);
    stringstream ss(g);
    string s;
     ss >>s >> x >> n;
    int d = 0;
    for( int i = 0 ; i < s.length() ; i++){
        if(s[i] == x){
            d++;
        }
    }
        if(d == n){
        cout << "YES";}
        else{
        cout << "NO";}
    
}