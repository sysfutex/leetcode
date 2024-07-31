#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }

        unordered_set<int> set(nums.begin(), nums.end());

        int longest = 1;
        for (auto& n : set) {
            if (!set.count(n - 1)) {
                int count = 1;

                while (set.count(n + count)) {
                    ++count;
                }

                longest = max(count, longest);
            }

            if (longest > nums.size() / 2) {
                break;
            }
        }

        return longest;
    }
};
