#include <cstdlib>
#include <iostream>

#include "min_stack.cpp"

using namespace std;

int main() {
    MinStack* ms = new MinStack();
    ms->push(-2);
    ms->push(0);
    ms->push(-3);
    cout << "-3: " << ms->getMin() << endl;
    ms->pop();
    cout << "0: " << ms->top() << endl;
    cout << "-2: " << ms->getMin() << endl;
    delete ms;

    return EXIT_SUCCESS;
}
