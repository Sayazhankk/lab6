#include <iostream>
using namespace std;
void tran(int n, int m , int a[10000][10000]){
 int b[10000][10000];
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j <m; j++){
            b[j][i]=a[i][j];
        
        }
    }
    for(int i = 0 ; i < m; i++){
        for(int j = 0 ; j <n; j++){
            cout<<b[i][j]<<" ";
            if(j>n-1)
            cout<<" ";
        
        }
        cout<<endl;
    }
}

int main (){
    int n;
    int m;
    cin >> n>>m;
    int a[10000][10000];
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j <m; j++){
          cin>>a[i][j];


        }
    }
    tran(n,m ,a);

    return 0;
}