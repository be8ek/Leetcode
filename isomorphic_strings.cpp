class Solution {
private: 
    const int SIZE = 128;     
public:
    bool isIsomorphic(const string& s, const string& t) {
        assert(s.size() == t.size()); 
        unordered_map<char, char> sToT; 
        unordered_map<char, char> tToS; 
        for (size_t i = 0; i < s.size(); i++) {
            char sc = s[i]; 
            char tc = t[i]; 
            auto si = sToT.find(sc); 
            auto ti = tToS.find(tc); 
            if (si == sToT.end() && ti == tToS.end()) {
                sToT[sc] = tc; 
                tToS[tc] = sc; 
            } else if (si == sToT.end() || ti == tToS.end()) {
                return false; 
            } else if (si->second == tc && ti->second == sc) {
                continue; // ok
            } else {
                return false; 
            }
        }
        return true; 
    }
};

class Solution {
private: 
    const int SIZE = 128;     
public:
    bool isIsomorphic(string s, string t) {
        assert(s.size() == t.size()); 
        vector<int> sToT(SIZE, -1); 
        vector<int> tToS(SIZE, -1); 
        for (size_t i = 0; i < s.size(); i++) {
            char sc = s[i]; 
            char tc = t[i]; 
            if (sToT[sc] == tc && tToS[tc] == sc) {
                continue; // ok
            } else if (sToT[sc] == -1 && tToS[tc] == -1) {
                sToT[sc] = tc; 
                tToS[tc] = sc;
            } else {
                return false; 
            }
        }
        return true; 
    }
};