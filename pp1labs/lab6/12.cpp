#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void vowel(string s){
    string vowels  = "aeiouAEIOU" ;
    for(int i = 0 ; i< s.size(); i++){
    for(char c: vowels){
        s.erase(remove(s.begin(),s.end(),c),s.end());
    }}
    cout<<s;
    



}
int main(){
    string s;
    getline(cin,s);
    string vowels;
    vowel(s);
    return 0;
}