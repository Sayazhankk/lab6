#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main (){
    int n ;
    cin >> n;
    map<pair<string,string>, int> team;
    for(int i = 0 ; i < n; i++){
        string name1 , name2;
        int score1 , score2;
        cin >> name1 >> score1 >> name2 >> score2 ;
       
       
        int totalsc = score1 + score2;

        
        if(team[{name1 , name2}] != totalsc){
    
            team[{name1, name2}] = totalsc;
            
            
            cout <<name1 <<" and "<<name2<<" " <<totalsc<<endl;
        }
        
    }}

