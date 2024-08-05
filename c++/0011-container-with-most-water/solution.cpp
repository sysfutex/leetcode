#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int> &height) {
        int n = height.size();
        if (n == 2) {
            return min(height[0], height[1]);
        }

        int left = 0, right = n - 1;
        int maxArea = 0;

        while (left < right) {
            maxArea = max(maxArea, (right - left) * min(height[left], height[right]));

            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }

        return maxArea;
    }
};
