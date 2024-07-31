#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "solution.cpp"

using namespace std;

int main() {
    Solution solution;

    vector<int> nums1 = {1, 2, 3, 1};
    string solution1 = solution.containsDuplicate(nums1) ? "true" : "false";
    cout << "true: " << solution1 << endl;

    vector<int> nums2 = {1, 2, 3, 4};
    string solution2 = solution.containsDuplicate(nums2) ? "true" : "false";
    cout << "false: " << solution2 << endl;

    vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    string solution3 = solution.containsDuplicate(nums3) ? "true" : "false";
    cout << "true: " << solution3 << endl;

    return EXIT_SUCCESS;
}
