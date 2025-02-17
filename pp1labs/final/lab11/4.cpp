#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main (){
    string n;
    cin >> n;
    bool isdigit = false;

    for(size_t i = 0; i < n.size() ; i++){
        if('0'<=n[i] && n[i]<='9'){
           isdigit = true;
        }
       
    }
    if(isdigit){
        cout << "Wrong username";
    }
    else{
        cout<<"Valid username";
    }
}