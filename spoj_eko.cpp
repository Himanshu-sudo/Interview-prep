#include<bits/stdc++.h>
using namespace std ;

long long height ; 
long long M ; 
const int N = 1e6 + 10 ; 
long long trees[N] ; 

bool is_sufficient(int h){
	long long wood = 0 ; 

	for(int i = 0 ; i < height ; i++){
		if(trees[i] >= h){
			wood += (trees[i] - h) ; 
		}
	}

	return (wood >= M) ; 
}

int main(){
	 
	 cin>>height>>M ; 

	 for(int i = 0 ; i < height ; i++){
	 	cin>>trees[i] ; 
	 }

	 long long lo = 0 , hi = 1e9 , mid; 

	 while(hi - lo > 1){
	 	mid = (hi + lo)/2 ; 

	 	if(is_sufficient(mid)){
	 		lo = mid ; 
	 	}
	 	else{
	 		hi = mid - 1 ; 
	 	}
	 }

	 if(is_sufficient(hi)){
	 	cout<<hi<<endl ; 
	 }
	 else{
	 	cout<<lo<<endl ; 
	 }

	return 0 ; 
}