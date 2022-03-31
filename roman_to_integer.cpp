#include <iostream> 
#include <string> 
#include <map> 

using namespace std; 

class Solution {
    public:
    int romanToInt(string s) {
        map<char, int> m {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int res = 0, prev = 0; 
        for (int i=s.size()-1; i>=0; --i) {
            if (prev > m[s[i]]) {
                res -= m[s[i]];
            } else {
                res += m[s[i]];
            }
            prev = m[s[i]];
        }
        return res;
    }
}; 

int main() {
    int n; 
    cin >> n; 
    cout << "Your entered number is: " << n << endl; 
    return 0; 
}