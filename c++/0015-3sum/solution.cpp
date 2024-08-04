#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        sort(nums.begin(), nums.end());

        int size = nums.size();
        vector<vector<int>> results;

        for (int i = 0; i < size - 2; ++i) {
            if (nums[i] > 0) {
                break;
            }

            if (i > 0 && nums[i - 1] == nums[i]) {
                continue;
            }

            int left = i + 1, right = size - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum < 0) {
                    ++left;
                } else if (sum > 0) {
                    --right;
                } else {
                    results.push_back({nums[i], nums[left], nums[right]});

                    while (left < right && nums[left] == nums[left + 1]) {
                        ++left;
                    }

                    while (left < right && nums[right] == nums[right - 1]) {
                        --right;
                    }

                    ++left;
                    --right;
                }
            }
        }

        return results;
    }
};
