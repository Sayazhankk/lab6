#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main () {
    int n,l,r;

    cin >>n>>l>>r;
    int a[n];
    int b[n];
    for (int i=0; i<n ; i++){
     cin>>a[i];}
    
     for( int i = l-1 ; i <= r-1; i++){
      b[n]=a[n-i-1];}
       for (int i=0; i<n ; i++){
     a[i]=b[n];
     cout<<a[i];}
     
         return 0;}