#include<bits/stdc++.h>
using namespace std;

int main(){
    
    stack<int> st ;
    int n ; 
    cin>>n ; 
    vector<pair<int , int>> elem ; 
    int x ; 
    for(int i = 0 ; i < n ; i++){
        cin>>x ; 
        if(st.empty()){
            st.push(x) ; 
        }
        else{
            while(x > st.top()){
                elem.push_back({st.top() , x}) ; 
                st.pop() ; 
                if(st.empty()){
                    break ; 
                }
            }
            st.push(x) ; 
        }
    }
    while(!st.empty()){
        elem.push_back({st.top() , -1}) ; 
        st.pop() ; 
    }
    for(auto value : elem){
        cout<<value.first<<" "<<value.second<<"\n" ; 
    }
    return 0 ;
}