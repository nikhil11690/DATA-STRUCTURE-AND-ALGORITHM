class Solution {
public:
    string processStr(string s) {
        string result;
        for(char ch:s){
            if(ch>='a' && ch<='z'){
                result.push_back(ch);
            }
            if(ch == '#'){
                result += result;
            }
            else if(ch == '%'){
                reverse(result.begin(),result.end());
            }
            else if(ch == '*'){
                if(!result.empty())
                result.pop_back();
            }
        }
        return result;
        
    }
};
