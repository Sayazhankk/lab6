#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    string s;
    getline (cin,s);
    int c = 0;
    for( int i = 0 ; i < s.length(); i++){
        if(s[i]>='a' && s[i]<='z')
        c++;
        }
        cout << c << " ";
        int co = 0;

    for( int i = 0 ; i < s.length(); i++){
        if(s[i]>='A' && s[i]<='Z')
        co++;
        }
        cout << co;


}