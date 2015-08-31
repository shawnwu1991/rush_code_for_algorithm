#include <iostream>

using namespace std;

class Solution {
    public:
        int addDigits(int num) {
            if (num < 0) return 0;
            while (num >= 10) {
                int tempNum = 0;
                while (num % 10 > 0) {
                    tempNum += num % 10;
                    num = num / 10;
                }
                num = tempNum;
            }
            return num;
        }
};
