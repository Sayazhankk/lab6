#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int cnt = 0;
    vector<int>a;
    while(cin >> n){
        if(n==0){
            break;
        }
        a.push_back(n);
        cnt++;

    }
    
    int s;
    for(int i = 1 ; i <= cnt ; i++){
        if(i==1){
            s = a[1]+a[2];
        }
        else if(i%2==1){
            s= a[i]+a[i+1];
        }
        else if (cnt%2==1){
            s = a[cnt];
        }
    }
    cout << s<<" ";
}