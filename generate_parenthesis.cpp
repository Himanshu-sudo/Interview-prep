#include<bits/stdc++.h>
using namespace std;

vector<string> result ; 

void generate(string &st , int open , int close){
    if(open == 0 && close == 0){
        result.push_back(st) ;
        return ;  
    }

    if(open > 0){
        st.push_back('(') ;
        generate(st , open - 1 , close) ; 
        st.pop_back() ;  
    }

    if(open < close && close > 0 ){
        st.push_back(')') ; 
        generate(st , open , close - 1) ; 
        st.pop_back() ; 
    }
}

int main(){
    string s ; 
    int x ; 
    cin>>x ; 
    generate(s , x , x) ; 
    for(string elem : result){
        cout<<elem<<endl; 
    }
    return 0 ;
}