#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main () {
    int n,x;
    cin>>n>>x;
    int a[n],b[x];
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
     for(int j = 0 ; j < n ; j++){
        cin>>b[j];
     }
    
    
    int m[n+x];
    for(int i = 0 ; i < n ; i++){
        m[n]=a[i];
    }
    for(int j = 0 ; j < x; j++){
        m[n+x]=b[j];
    }
    sort(m,m+n+x);
     for(int k = 0 ; k < n+x ; k++){
        
    
    
    cout<<m[n+x]<<" ";}


    return 0;
}