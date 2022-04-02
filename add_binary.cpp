class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int carry = 0; 
        for (int i=0; i<max(a.size(), b.size()); i++) {
            int total = carry;
            if (i < a.size()) total += (int)(a[a.size()-i-1] - '0'); 
            if (i < b.size()) total += (int)(b[b.size()-i-1] - '0'); 
            res = (char)(total%2 + '0') + res; 
            carry = total / 2; 
        }
        if (carry == 1) {
            res = '1' + res; 
        }
        return res; 
    }
};