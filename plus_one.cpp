class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = (int)digits.size(); 
        for (int i=length-1; i>=0; i--) {
            if (digits[i] == 9) {
                if (i == 0) {
                    digits[i] = 1; 
                    digits.push_back(0); 
                } else {
                    digits[i] = 0;
                }
            } else {
                digits[i]++; 
                break; 
            }
        }
        return digits; 
    }
};

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = (int)digits.size(); 
        for (int i=length-1; i>=0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                digits[i]++; 
                return digits;  
            }
        }
        digits.push_back(0); 
        digits[0] = 1; 
        return digits; 
    }
};