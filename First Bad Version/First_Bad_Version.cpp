#include <iostream>

using namespace std;

bool isBadVersion(int version);

class Solution {
    public:
        int firstBadVersion(int n) {
            if (!isBadVersion(n)) return -1;

            int max = n, min = 1;
            n = (max + min) / 2;

            while (0 != (max - min)) {
                 if (isBadVersion(n))
                 {
                     max = n;
                     n = (min + max) / 2;
                 }
                 else {
                      min = n;
                      n = (max + min) / 2;
                 }
            }
            return max;
        }
};
