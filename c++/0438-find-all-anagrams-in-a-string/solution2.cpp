#include <string>
#include <vector>

using namespace std;

class Solution2 {
public:
    vector<int> findAnagrams(string s, string p) {
        int pSize = p.size();
        int sSize = s.size();
        if (sSize < pSize) {
            return {};
        }

        int counts[26] = {0};
        for (int i = 0; i < pSize; ++i) {
            ++counts[p[i] - 'a'];
        }

        vector<int> result;

        int required = pSize;
        for (int left = 0, right = 0; right < sSize; ++right) {
            if (--counts[s[right] - 'a'] >= 0) {
                --required;
            }

            while (required == 0) {
                if (right - left + 1 == pSize) {
                    result.push_back(left);
                }

                if (++counts[s[left++] - 'a'] > 0) {
                    ++required;
                }
            }
        }

        return result;
    }
};
