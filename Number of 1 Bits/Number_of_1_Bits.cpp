#include <iostream>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
    	int counter = 0;
	if (0 == n) return counter;

	while (1 < n) {
	    if (1 == n % 2) counter++;
	    n = n >> 2;
	}
	counter++;
    	return counter;
    }
};
