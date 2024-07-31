#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];

        int pos = 0;
        while (pos < first.size()) {
            if (first[pos] != last[pos]) {
                break;
            }

            ++pos;
        }

        return first.substr(0, pos);
    }
};
