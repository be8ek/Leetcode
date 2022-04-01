class Solution {
public:
    int lengthOfLastWord(string s) {
        bool isSpace = false; 
        int word_length = 0; 
        for (int i=0; i<(int)s.size(); i++) {
            if (s[i] == ' ') {
                isSpace = true; 
                continue; 
            } else {
                if (isSpace) {
                    word_length = 0; 
                    isSpace = false;
                }
                word_length++; 
            }
        }
        return word_length; 
    }
};

class Solution {
public:
    int lengthOfLastWord(string s) {
        int word_length = 0; 
        for (int i=(int)s.size()-1; i >= 0; i--) {
            if (s[i] == ' ' && word_length != 0) {
                return word_length; 
            } else if (s[i] != ' ') {
                word_length++; 
            }
        }
        return word_length; 
    }
};

