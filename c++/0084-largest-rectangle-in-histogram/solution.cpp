#include <algorithm>
#include <climits>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int> &heights) {
        int histogramLength = heights.size();
        if (histogramLength == 1) {
            return heights[0];
        }

        stack<pair<int, int>> s;
        int largest = INT_MIN;

        for (int i = 0; i < histogramLength; ++i) {
            int startIndex = i;
            int currentHeight = heights[i];

            while (!s.empty() && s.top().second > currentHeight) {
                int index = s.top().first;
                int height = s.top().second;
                s.pop();

                largest = max(largest, height * (i - index));
                startIndex = index;
            }

            s.push({startIndex, currentHeight});
        }

        while (!s.empty()) {
            int index = s.top().first;
            int height = s.top().second;
            s.pop();

            largest = max(largest, height * (histogramLength - index));
        }

        return largest;
    }
};
