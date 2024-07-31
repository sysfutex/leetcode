#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int daysCount = temperatures.size();

        vector<int> result(daysCount);

        stack<int> days;
        for (int currentDay = 0; currentDay < daysCount; ++currentDay) {
            while (!days.empty() && temperatures[currentDay] > temperatures[days.top()]) {
                int previousDay = days.top();
                days.pop();

                result[previousDay] = currentDay - previousDay;
            }

            days.push(currentDay);
        }

        return result;
    }
};
