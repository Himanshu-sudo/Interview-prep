/* recursion and backtracking */

#include<bits/stdc++.h>
using namespace std ; 

vector<int> vec ; 
vector<vector<int>> result ; 

void generate_subsets(vector<int> &v , auto it){
	if(it == vec.end()){
		result.push_back(v) ;
		return ; 
	}
	int x = *it ;
	it++ ; 
	generate_subsets(v , it) ; 
	v.push_back(x) ; 
	generate_subsets(v , it) ;
	v.pop_back() ;       
}


int main(){
	int n ; 
	vector<int> v ; 
	int x ; 
	cin>>n ; 
	for(int i = 0 ; i < n ; i++){
		cin>>x ; 
		vec.push_back(x) ; 
	}
	
	generate_subsets(v , vec.begin() ) ; 
	
	for(auto elem : result){
		for(int value : elem){
			cout<<value<<" " ; 
		}
		cout<<endl ; 
	}
	
}