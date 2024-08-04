#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution.cpp"

using namespace std;

void printVector(vector<vector<int>> &v) {
    cout << "[";

    for (int i = 0; i < v.size(); ++i) {
        cout << "[";

        for (int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j];

            if (j != v[i].size() - 1) {
                cout << ", ";
            }
        }

        cout << "]";

        if (i != v.size() - 1) {
            cout << ", ";
        }
    }

    cout << "]";
}

int main() {
    Solution solution;

    vector<int> nums1 = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> answer1 = solution.threeSum(nums1);
    cout << "[[-1, -1, 2], [-1, 0, 1]]: ";
    printVector(answer1);
    cout << endl;

    vector<int> nums2 = {0, 1, 1};
    vector<vector<int>> answer2 = solution.threeSum(nums2);
    cout << "[]: ";
    printVector(answer2);
    cout << endl;

    vector<int> nums3 = {0, 0, 0};
    vector<vector<int>> answer3 = solution.threeSum(nums3);
    cout << "[[0, 0, 0]]: ";
    printVector(answer3);
    cout << endl;

    return EXIT_SUCCESS;
}
