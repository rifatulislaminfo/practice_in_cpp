/* Bismillah
 * author:  Rifatul Islam
 * created: 15.10.2023
 */ 
#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    int p=0;
    int a=0;
    cin>>s;

    for(auto u:s){
       
       p+=(u-'0');
        
    }
    
    string sn=to_string(p);
    string s1=sn;

    reverse(sn.begin(),sn.end());

    if(sn==s1){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;

}