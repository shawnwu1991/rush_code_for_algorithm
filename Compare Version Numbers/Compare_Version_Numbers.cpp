#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int size1 = version1.size();
        int size2 = version2.size();

        long int sum1, sum2;

        for (size_t i = 0, j = 0; i < size1 || j < size2; ++i, ++j) {
            sum1 = 0;
            while (i < size1 && version1[i] != '.') {
                 sum1 = sum1 * 10 + (version1[i] - '0');
                 ++i;
            }

            sum2 = 0;
            while (j < size2 && version2[i] != '.') {
                 sum2 = sum2 * 10 + (version2[i] - '0');
                 ++j;
            }

            if (sum1 < sum2) return -1;
            else if (sum1 > sum2) return 1;

    }
    return 0;
};
