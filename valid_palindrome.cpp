class Solution {
public:
    bool isPalindrome(string s) {
        s = removeNoneAlphanumberic(s); 
        toLower(s); 
        for (int first = 0, second = s.size() - 1; first < second; first++, second--) {
            if (s[first] != s[second]) {
                return false; 
            }
        }
        return true; 
    }
    
    string removeNoneAlphanumberic(string s) {
        string ans = ""; 
        for (int i=0; i<s.size(); i++) {
            if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                ans += s[i]; 
            }
        }
        return ans; 
    }
    
    void toLower(string& s) {
        for (int i=0; i<s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32; 
            }
        }
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        int first = 0, second = s.size() - 1; 
        while (first < second) {
            if (s[first] >= 'A' && s[first] <= 'Z') {
                s[first] += 32; 
            } 
            if (!((s[first] >= 'a' && s[first] <= 'z') || (s[first] >= '0' && s[first] <= '9'))) {
                first++; 
                continue; 
            }
            if (s[second] >= 'A' && s[second] <= 'Z') {
                s[second] += 32; 
            } 
            if (!((s[second] >= 'a' && s[second] <= 'z') || (s[second] >= '0' && s[second] <= '9'))) {
                second--; 
                continue; 
            }
            if (s[first] != s[second]) {
                return false; 
            }
            first++, second--; 
        }
        return true; 
    }
};