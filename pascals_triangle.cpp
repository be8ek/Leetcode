class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans; 
        vector<int> curLevel;
        vector<int> prevLevel;
        for (int i=0; i<numRows; i++) {
            for (int j=0; j<=i; j++) {
                if (i == j || j == 0) {
                    curLevel.push_back(1); 
                } else {
                    curLevel.push_back(prevLevel[j-1] + prevLevel[j]); 
                }
            } 
            ans.push_back(curLevel); 
            prevLevel.swap(curLevel);
            curLevel.clear(); 
        }
        return ans; 
    }
};