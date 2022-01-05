#include<bits/stdc++.h>
using namespace std ; 

int main(){

	unordered_map<int , int> count ; 
	
	count[0]++ ;
	count[1]++ ; 
	count[0]++ ; 
	count[2]++ ; 
	count[2]++ ; 

	for(auto it = count.begin() ; it != count.end() ; it++){
		cout<<it->first<<" "<<it->second<<endl ; 
	}
cout<<endl ; 
	for(auto &value : count){
		cout<<value.first<<" "<<value.second<<endl ; 
	}
	return 0 ; 
}