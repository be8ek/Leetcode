class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = ""; 
        bool isEnd = false; 
        for (int i=0; i<(int)strs[0].size(); i++) {
            char letter = strs[0][i]; 
            for (int j=0; j<(int)strs.size(); j++) {
                if (letter != strs[j][i]) {
                    isEnd = true; 
                }
            }
            if (isEnd) {
                return result; 
            } else {
                result += letter; 
            }
        }
        return result; 
    }
};

