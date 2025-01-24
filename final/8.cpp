#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(size_t i = 0 ; i < s.size();i++){
        if(s[i]>='A'&& s[i]<='Z'){
            tolower(s[i]);
        }
        cout<<s[i];
    }
}