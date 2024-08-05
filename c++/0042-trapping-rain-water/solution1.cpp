#include <algorithm>
#include <vector>

using namespace std;

class Solution1 {
public:
    int trap(vector<int> &height) {
        int size = height.size();

        vector<int> maxLeft(size);
        vector<int> maxRight(size);
        int result = 0;

        int currentMax = height[0];
        for (int i = 0; i < size; ++i) {
            maxLeft[i] = max(height[i], currentMax);
            currentMax = maxLeft[i];
        }

        currentMax = height[size - 1];
        for (int i = size - 1; i >= 0; --i) {
            maxRight[i] = max(height[i], currentMax);
            currentMax = maxRight[i];
        }

        for (int i = 0; i < size; ++i) {
            result += min(maxLeft[i], maxRight[i]) - height[i];
        }

        return result;
    }
};
