#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    string t;
    getline(cin,s);
    getline(cin,t);
    if(t.find(s) != string :: npos){
    cout << "YES";}
    else {
        cout << "NO";
        }
        return 0;
}