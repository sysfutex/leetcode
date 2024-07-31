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

    vector<int> nums1 = {1, 1, 1, 2, 2, 3};
    int k1 = 2;
    vector<int> solution1 = solution.topKFrequent(nums1, k1);
    cout << "[1, 2]: ";
    printVector(solution1);
    cout << endl;

    vector<int> nums2 = {1};
    int k2 = 1;
    vector<int> solution2 = solution.topKFrequent(nums2, k2);
    cout << "[1]: ";
    printVector(solution2);
    cout << endl;

    return EXIT_SUCCESS;
}
