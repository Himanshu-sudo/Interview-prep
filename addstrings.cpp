#include<bits/stdc++.h>
using namespace std ; 

string addstrings(string num1 , string num2){
      int i = num1.size() - 1 ;
      int j = num2.size() - 1 ; 
      int current; 
      int carry = 0 ; 
      string result ; 
      while(i >= 0 || j >= 0 || carry){
        current = carry ; 
        if(i >= 0){
            current += (num1[i] - '0') ; 
        }

        if(j >= 0){
            current += (num2[j] - '0') ; 
        }

        carry = current / 10 ; 
        current = current % 10 ; 
        result.push_back((char)(current + '0')) ; 
        i-- ; 
        j-- ; 

      }
      reverse(result.begin() , result.end()) ; 
      return result ; 
}
int main(){
    
    cout<<addstrings("5443" , "49")<<endl ; 
    return 0 ; 
}