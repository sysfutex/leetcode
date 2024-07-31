#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution.cpp"

using namespace std;

void printVector(vector<int>& vec) {
    cout << "[";

    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i != vec.size() - 1) {
            cout << ", ";
        } else {
            cout << "]";
        }
    }
}

int main() {
    Solution solution;

    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> solution1 = solution.twoSum(nums1, target1);
    cout << "[0, 1]: ";
    printVector(solution1);
    cout << endl;

    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> solution2 = solution.twoSum(nums2, target2);
    cout << "[1, 2]: ";
    printVector(solution2);
    cout << endl;

    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> solution3 = solution.twoSum(nums3, target3);
    cout << "[0, 1]: ";
    printVector(solution3);
    cout << endl;

    return EXIT_SUCCESS;
}
