#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;
int main(){
    int n;
    cin>> n;
    vector<string> s(n);
    bool foundlower=false, foundupper=false;
    for(int i = 0 ; i < n ; i++){
        cin>>s[i];
    }
    vector<string>::iterator it;
    for(it=s.begin(); it!=s.end();++it){
          string& str = *it;  
        for(size_t i = 0 ; i < str.size(); ++i){
        foundlower=(str[i]>='a'||str[i]<='z');
        foundupper=(str[i]>='A'||str[i]<='Z');
        if(foundlower&&foundupper&&isdigit(s[it])){
            cout<<str.size()<<endl<<*it<<endl;
        }
        

    }
    }
}
