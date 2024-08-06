#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int result = 0;
        int left = 0, right = 1;

        while (right < prices.size()) {
            if (prices[left] < prices[right]) {
                result = max(result, prices[right] - prices[left]);
            } else {
                left = right;
            }

            ++right;
        }

        return result;
    }
};
