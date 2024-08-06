#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution.cpp"

using namespace std;

int main() {
    Solution solution;

    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "5: " << solution.maxProfit(prices1) << endl;

    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "0: " << solution.maxProfit(prices2) << endl;

    return EXIT_SUCCESS;
}
