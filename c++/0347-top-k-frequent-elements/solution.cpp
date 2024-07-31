#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (int n : nums) {
            ++map[n];
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> queue;
        for (auto p : map) {
            queue.push({p.second, p.first});

            if (queue.size() > k) {
                queue.pop();
            }
        }

        vector<int> result;
        while (!queue.empty()) {
            result.push_back(queue.top().second);
            queue.pop();
        }

        return result;
    }
};
