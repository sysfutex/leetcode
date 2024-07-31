#include <cstring>
#include <string>
#include <vector>

using namespace std;

class Solution1 {
    bool areEquals(int* a, int* b) {
        for (int i = 0; i < 26; ++i) {
            if (a[i] != b[i]) {
                return false;
            }
        }

        return true;
    }

public:
    vector<int> findAnagrams(string s, string p) {
        int sSize = s.size();
        int pSize = p.size();
        if (sSize < pSize) {
            return {};
        }

        int pCounts[26] = {0};
        for (int i = 0; i < pSize; ++i) {
            ++pCounts[p[i] - 'a'];
        }

        vector<int> result;

        int sCounts[26] = {};
        for (int i = 0; i <= sSize - pSize; ++i) {
            for (int j = i; j < i + pSize; ++j) {
                ++sCounts[s[j] - 'a'];
            }

            if (areEquals(sCounts, pCounts)) {
                result.push_back(i);
            }

            memset(sCounts, 0, 26 * sizeof(int));
        }

        return result;
    }
};
