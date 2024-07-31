#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution1.cpp"
#include "solution2.cpp"

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
    Solution1 solution1;

    cout << "Solution 1: [0, 6]: ";
    vector<int> solution11 = solution1.findAnagrams("cbaebabacd", "abc");
    printVector(solution11);
    cout << endl;

    cout << "Solution 1: [0, 1, 2]: ";
    vector<int> solution12 = solution1.findAnagrams("abab", "ab");
    printVector(solution12);
    cout << endl;

    cout << "Solution 1: [1]: ";
    vector<int> solution13 = solution1.findAnagrams("baa", "aa");
    printVector(solution13);
    cout << endl
         << endl;

    Solution2 solution2;

    cout << "Solution 2: [0, 6]: ";
    vector<int> solution21 = solution2.findAnagrams("cbaebabacd", "abc");
    printVector(solution21);
    cout << endl;

    cout << "Solution 2: [0, 1, 2]: ";
    vector<int> solution22 = solution2.findAnagrams("abab", "ab");
    printVector(solution22);
    cout << endl;

    cout << "Solution 2: [1]: ";
    vector<int> solution23 = solution2.findAnagrams("baa", "aa");
    printVector(solution23);
    cout << endl;

    return EXIT_SUCCESS;
}
