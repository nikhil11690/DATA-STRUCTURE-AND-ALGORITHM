// Problem statement
// You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.

// Note :

// String 'S' is NOT case sensitive.
// Example :

// Let S = “c1 O$d@eeD o1c”.
// If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 100 
// 1 <= Length(S) <= 10^4

#include<iostream>
#include<cctype>
#include <bits/stdc++.h> 
using namespace std;

bool checkPalindrome(string s)
{
    int st = 0;
    int e = s.size()-1;
    while(st<e){
        while(st<e && !isalnum(s[st])){
            st++;
        }
        while(st<e && !isalnum(s[e])){
            e--;
        }
        if(tolower(s[st]) !=tolower(s[e])){
            return false;
        }
        st++;
        e--;
    

    }
    return true;   
}