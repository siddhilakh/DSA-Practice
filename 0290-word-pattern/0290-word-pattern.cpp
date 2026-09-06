class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;
        stringstream ss(s);
        string word;
        for(int i = 0; i<pattern.size(); i++) {
            if(!(ss >> word)) {
                return false;
            }
            if(mp1.count(pattern[i])) {
                if(mp1[pattern[i]] != word) {
                    return false;
                }
            }
            if(mp2.count(word)) {
                if(mp2[word] != pattern[i]) {
                    return false;
                }
            }
            mp1[pattern[i]] = word;
            mp2[word] = pattern[i];
        }
        if(ss >> word) {
            return false;
        }
        return true;

        
    }
};