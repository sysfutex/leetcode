#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        for (string word : strs) {
            string sorted = word;
            sort(sorted.begin(), sorted.end());

            map[sorted].push_back(word);
        }

        vector<vector<string>> ans;
        for (auto p : map) {
            ans.push_back(p.second);
        }

        return ans;
    }
};
