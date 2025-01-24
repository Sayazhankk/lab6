#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(size_t i = 0 ; i < s.size();i++){
        s[i]=s[i]+1;
       
        cout<<s[i];}
    
    if(s.back()=='z'){
        s.back()='a';
    
    cout<<s.back();
}}