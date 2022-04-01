class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = haystack.find(needle); 
        return index; 
    }
};

class Solution {
public:
    int strStr(string haystack, string needle) {
        int length = (int)needle.size(); 
        for (int i=0; i<=(int)haystack.size() - length; i++) {
            string sub_str = haystack.substr(i, length); 
            if (sub_str == needle) {
                return i; 
            }
        }
        return -1; 
    }
};