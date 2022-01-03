#include<bits/stdc++.h>
using namespace std ; 

const int N = 1e5 + 10; 
int locations[N] ; 
int n , cows; 

bool is_possible(int x){
	int cows_placed = 1 , last_position = locations[0] ;

	for(int i = 1 ; i < n ; i++){
		if(locations[i] - last_position >= x){
			cows_placed++ ; 
			last_position = locations[i] ; 
		}
		if(cows_placed == cows){
			break ; 
		}
	}
	
	return (cows_placed == cows) ; 
}


int main(){

	int test ; 
	cin>>test ; 


	while(test--){
		int hi = 1e9 , lo = 0 , mid ; 
		cin>>n>>cows ; 

		for(int i = 0 ; i < n ; i++){
			cin>>locations[i] ; 
		}

		sort(locations , locations + n) ; 
		while(hi - lo > 1){
		mid = (hi + lo)/2 ; 
		if(is_possible(mid)){
			lo = mid ; 
		}
		else{
			hi = mid - 1 ; 
		}
	}
	
	if(is_possible(hi)){
		cout<<hi<<endl ; 
	}
	else{
		cout<<lo<<endl ; 
	}
	}
	
	return 0 ; 
}