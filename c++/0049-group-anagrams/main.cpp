#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "solution.cpp"

using namespace std;

void printAns(vector<vector<string>>& ans) {
    cout << "[";

    for (int i = 0; i < ans.size(); ++i) {
        for (int j = 0; j < ans[i].size(); ++j) {
            if (j == 0) {
                cout << "[";
            }

            cout << ans[i][j];

            if (j != ans[i].size() - 1) {
                cout << ", ";
            } else {
                cout << "]";
            }
        }

        if (i != ans.size() - 1) {
            cout << ", ";
        }
    }

    cout << "]";
}

int main() {
    Solution solution;

    vector<string> strs1 = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans1 = solution.groupAnagrams(strs1);
    cout << "[[bat], [nat, tan], [ate, eat, tea]]: ";
    printAns(ans1);
    cout << endl;

    vector<string> strs2 = {""};
    vector<vector<string>> ans2 = solution.groupAnagrams(strs2);
    cout << "[[]]: ";
    printAns(ans2);
    cout << endl;

    vector<string> strs3 = {"a"};
    vector<vector<string>> ans3 = solution.groupAnagrams(strs3);
    cout << "[[a]]: ";
    printAns(ans3);
    cout << endl;

    return EXIT_SUCCESS;
}
