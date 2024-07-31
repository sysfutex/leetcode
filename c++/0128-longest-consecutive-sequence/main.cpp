#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution.cpp"

using namespace std;

int main() {
    Solution solution;

    vector<int> nums1 = {100, 4, 200, 1, 3, 2};
    cout << "4: " << solution.longestConsecutive(nums1) << endl;

    vector<int> nums2 = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    cout << "9: " << solution.longestConsecutive(nums2) << endl;

    return EXIT_SUCCESS;
}
