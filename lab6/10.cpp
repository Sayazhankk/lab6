#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>
using namespace std;

void num(string s ,int n){
    int cnt;
    cnt=0;
    for(int i = 0 ; i <s.size();i++){
        if(isdigit(s[i])){
            cnt++;}
            }
        if(n==cnt){
                cout<<"YES";}
        else if(n<cnt){
                    cout << "YES";
                }
        else if(n>cnt){
                    cout<<"NO";}
                    cout<<endl;
    
    }
 int main() {
    string input;
    getline(cin, input); // Read the entire line

    // Use istringstream to separate the string and the integer
    istringstream iss(input);
    string s;
    int n;

    // Extract the string and the integer from the input
    getline(iss, s, ' '); // Read until the first space
    iss >> n; // Read the integer

    num(s, n);
    return 0;
}