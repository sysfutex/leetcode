#include <stack>
#include <utility>

using namespace std;

class MinStack {
    stack<int> s;
    stack<pair<int, int>> ms;

public:
    MinStack() {}

    void push(int val) {
        s.push(val);

        if (ms.empty() || val < ms.top().first) {
            ms.push({val, 1});
        } else if (val == ms.top().first) {
            ++ms.top().second;
        }
    }

    void pop() {
        if (s.top() == ms.top().first) {
            if (--ms.top().second == 0) {
                ms.pop();
            }
        }

        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return ms.top().first;
    }
};
