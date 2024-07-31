#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int length = position.size();

        if (length == 1) {
            return 1;
        }

        vector<pair<int, double>> cars;
        for (int i = 0; i < length; ++i) {
            double time = (double) (target - position[i]) / speed[i];

            cars.push_back({position[i], time});
        }
        sort(cars.begin(), cars.end());

        double maxTime = 0.0;
        int result = 0;

        for (int i = length - 1; i >= 0; --i) {
            if (cars[i].second > maxTime) {
                maxTime = cars[i].second;
                ++result;
            }
        }

        return result;
    }
};
