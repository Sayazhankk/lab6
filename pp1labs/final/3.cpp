#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int a, b , c;
    cin >> a >> b >> c;
    int sum = 0;
    for(int i = 0 ; i < a; i++){
        int d = b*pow(c,i);
        sum += d;
        cout<<d<<" ";
        
}
cout<<endl<<"sum: "<<sum;}