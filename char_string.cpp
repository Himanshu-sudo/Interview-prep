#include<bits/stdc++.h>
using namespace std ; 

int main(){
    unordered_map<int , int> prefix ; 
    prefix[0]++ ; 
    prefix[1]++ ; 
    prefix[2]++ ; 

    cout<<prefix[0]<<" "<<prefix[1]<<" "<<prefix[2]<<" "<<prefix[3]<<" "<<endl ; 
    cout<<prefix[100]<<endl ; 
    return 0 ; 
}