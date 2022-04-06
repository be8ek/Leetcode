class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> curLevel; 
        vector<int> prevLevel; 
        for (int i=0; i<=rowIndex; i++) {
            for (int j=0; j<=i; j++) {
                if (j == i || j == 0) {
                    curLevel.push_back(1); 
                } else {
                    curLevel.push_back(prevLevel[j-1] + prevLevel[j]); 
                }
            }
            prevLevel.swap(curLevel); 
            curLevel.clear(); 
        }
        return prevLevel; 
    }
};

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans; 
        for (int i=0; i<=rowIndex; i++) {
            ans.insert(ans.begin(), 1); 
            for (int j=1; j<i; j++) {
                ans[j] = ans[j+1] + ans[j]; 
            }
        }
        return ans; 
    }
};

