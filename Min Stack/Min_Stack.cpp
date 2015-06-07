#include <iostream>

using namespace std;

class MinStack {
public:
    void push(int x) {
        minStack.push_back(x);
    }

    void pop() {
        minStack.pop_back();
    }

    int top() {
        return minStack.back();
    }

    int getMin() {
        int result = minStack.at(0);
        for (size_t i = 0; i < mimStack.size(); ++i) {
             if (result > minStack[i]) result = minStack[i];
        }
        return result;
    }

private:
    vector<int> minStack;
};
