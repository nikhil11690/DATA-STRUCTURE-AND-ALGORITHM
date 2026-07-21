// https://leetcode.com/submissions/detail/2075986712/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int gcd(int a , int b){
        while(b!= 0){
           int rem = a%b;
           a = b;
           b= rem;
        }
        return a;
    }

    int gcdOfOddEvenSums(int n) {
        
        int sumodd = 0;
    for(int i = 1 ; i<2*n ; i+=2){
        sumodd +=i;
    }
    int sumeven = 0;
    for(int j = 2 ; j<2*n ; j+=2){
        sumeven +=j;
    }
    return gcd(sumodd,sumeven);
         
        
    }
};