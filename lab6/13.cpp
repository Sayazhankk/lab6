#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void up(string s){
    for(int i = 0; i <s.size();i++){
        if(i%2==0){
            s[i]=toupper(s[i]);}
    }
        
        cout<<s;
    
    
    
}
int main(){
    string s;
    getline(cin,s);
    up(s);
    return 0;
}