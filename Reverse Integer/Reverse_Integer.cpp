#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        string result;
        bool flag = false;
        int temp;
        if (x < 0) {
            flag = true;
            x = -x;
        }
        while (x >= 0) {
            temp = x % 10;
            if (!temp) continue;
            result.push_back(temp - MARGIN);
        }

        if (((result[0] + MARGIN) * result.length()) > MAX_VALUE)
            return 0;
        else
            return flag ? -atoi(result) : atoi(result);
    }
};
