#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> diffIdx;

        for (int i = 0; i < nums.size(); ++i) {
            if (diffIdx.find(nums[i]) != diffIdx.end()) {
                return {i, diffIdx[nums[i]]};
            } else {
                diffIdx[target - nums[i]] = i;
            }
        }

        return {};
    }
};
