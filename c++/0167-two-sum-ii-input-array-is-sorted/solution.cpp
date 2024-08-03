#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int size = numbers.size();
        if (size == 2) {
            return {1, 2};
        }

        int left = 0, right = size - 1;
        int sum = numbers[left] + numbers[right];
        while (sum != target) {
            if (sum < target) {
                sum = numbers[++left] + numbers[right];
                continue;
            }

            sum = numbers[left] + numbers[--right];
        }

        return {left + 1, right + 1};
    }
};
