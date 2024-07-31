#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> digits = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans = 0;
        int cur = 0, prev = 0;

        for (int i = s.size() - 1; i >= 0; --i) {
            cur = digits[s[i]];
            ans = (cur < prev) ? (ans - cur) : (ans + cur);
            prev = cur;
        }

        return ans;
    }
};
