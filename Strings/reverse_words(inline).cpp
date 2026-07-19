// You are given a string 'str' of length 'N'.
// Your task is to reverse the original string word by word.
// There can be multiple spaces between two words and there can be leading or trailing spaces but in the output reversed string you need to put a single space between two words, and your reversed string should not contain leading or trailing spaces.
// Example :
// If the given input string is "Welcome to Coding Ninjas", then you should return "Ninjas Coding to Welcome" as the reversed string has only a single space between two words and there is no leading or trailing space.

// sc- o(n)
// tc - o(n)


#include<iostream>
#include<cctype>
#include<vector>

using namespace std;


string reverseString(string &str)
{
    vector<string> words;

    int start = 0;
    int end = str.size();

    while(start < end)
    {
        while(start < end && str[start] == ' ')
            start++;

        string word = "";

        while(start < end && str[start] != ' ')
        {
            word += str[start];
            start++;
        }

        if(word != "")
            words.push_back(word);
    }

    string ans = "";

    for(int i = words.size() - 1; i >= 0; i--)
    {
        ans += words[i];

        if(i != 0)
            ans += " ";
    }

    return ans;
}