#include <bits/stdc++.h>
using namespace std;
int pos(int n){
    int pos = sqrt((pow(n,2)));
    return pos;
}
int main (){
    int n;
    cin >> n;
    int m = pos(n);
    cout << m;
    
}
