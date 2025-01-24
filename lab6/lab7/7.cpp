#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
using namespace std;
int main (){
    int n;
    cin>>n;
    map<string,pair<double,int>>m;
    for(int i = 0 ; i < n ; i++){
        string s;
        double r;
        cin>>s>>r;
        m[s].first+=r;
        m[s].second+=1;

}
int cnt=0;
for(map<string,pair<double,int>>::iterator it = m.begin(); it!=m.end(); ++it){
    string s=it->first;
    double tr=it->second.first;
    int cnt=it->second.second;
    double av=tr/cnt;
    cout<<s<<": "<<fixed<<setprecision(3)<<av<<endl;
}

}