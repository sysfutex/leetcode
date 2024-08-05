#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution1.cpp"
#include "solution2.cpp"

using namespace std;

int main() {
    vector<int> height1 = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    vector<int> height2 = {4, 2, 0, 3, 2, 5};

    Solution1 solution1;
    cout << "Solution #1 | 6: " << solution1.trap(height1) << endl;
    cout << "Solution #1 | 9: " << solution1.trap(height2) << endl << endl;

    Solution2 solution2;
    cout << "Solution #2 | 6: " << solution2.trap(height1) << endl;
    cout << "Solution #2 | 9: " << solution2.trap(height2) << endl << endl;

    return EXIT_SUCCESS;
}
