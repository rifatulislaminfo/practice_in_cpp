#include<bits/stdc++.h>
using namespace std;

int main() {
    
   vector<string>v;

   v.push_back("rifat");
   v.push_back("Rifat");
   v.push_back("Shifat");
   v.push_back("Ashik");

   sort(v.begin(),v.end());

   for(auto u:v){
   	cout<<u<<endl;
   }
    
	return 0;
}
