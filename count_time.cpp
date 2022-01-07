// Brute force solution for this problemo

#include<bits/stdc++.h>
using namespace std ; 

int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0 ; 
        for(int i = 1 ; i < time.size() ; i++){
            for(int j = 0 ; j < i ; j++){
                
                if(((time[i] + time[j]) % 60) == 0){
                    
                    count++ ; 
                }
            }
        }
        return count ; 
}

int main(){

    vector<int> nums ; 
    int t ; 
    cin>>t ; 
    for(int i = 0 ; i < t ; i++){
        int x ; 
        cin>>x ; 
        nums.push_back(x) ; 
    }

    cout<<numPairsDivisibleBy60(nums)<<endl ; 
    return 0 ; 
}