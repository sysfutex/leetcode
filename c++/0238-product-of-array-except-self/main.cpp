#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution.cpp"

using namespace std;

void printVector(vector<int>& v) {
    cout << "[";

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];

        if (i != v.size() - 1) {
            cout << ", ";
        } else {
            cout << "]";
        }
    }
}

int main() {
    Solution solution;

    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> solution1 = solution.productExceptSelf(nums1);
    cout << "[24, 12, 8, 6]: ";
    printVector(solution1);
    cout << endl;

    vector<int> nums2 = {-1, 1, 0, -3, 3};
    vector<int> solution2 = solution.productExceptSelf(nums2);
    cout << "[0, 0, 9, 0, 0]: ";
    printVector(solution2);
    cout << endl;

    return EXIT_SUCCESS;
}
