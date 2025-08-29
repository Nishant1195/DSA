#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string &s) {
        string cleaned;
        for(char c : s){
            if(c != ',' && c != ':' && !isspace(c)) {  // Optional: remove spaces too
                cleaned += tolower(c);
            }
        }
        cout<<cleaned;
        return check(cleaned, 0);
        
    }

    bool check(const string &s, int i){
        if(i >= s.size() / 2) return true;  // Only check till middle
        if(s[i] != s[s.size() - i - 1]) return false;
        return check(s, i + 1);
    }
};

int main(){
    Solution s;
    string str = "A man, a plan, a canal: Panama";
    s.isPalindrome(str);

}
