#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main (){
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    int a=pow(s.size(),2);
    for(int i = 0; i < a ; ++i){
        cout<<s;
    }
  
}