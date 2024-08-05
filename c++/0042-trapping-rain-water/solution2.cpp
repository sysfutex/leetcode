#include <algorithm>
#include <vector>

using namespace std;

class Solution2 {
public:
    int trap(vector<int> &height) {
        int left = 0, right = height.size() - 1;
        int maxLeft = height[left], maxRight = height[right];
        int result = 0;

        while (left < right) {
            if (maxLeft < maxRight) {
                ++left;
                maxLeft = max(maxLeft, height[left]);
                result += maxLeft - height[left];
            } else {
                --right;
                maxRight = max(maxRight, height[right]);
                result += maxRight - height[right];
            }
        }

        return result;
    }
};
