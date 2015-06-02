#include <iostream>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
    	 bool *temp = new bool[n];
	 memset(temp, true, sizeof(bool) * n);
	 for (size_t i = 2; pow(n, 2) < n; ++i)
	     if (temp[i])
	     	for (size_t j = 2; i * j < n; ++j)
		    temp[i * j] = false;
	 
	 int result = 0;
	 for (size_t i = 2; i < n; ++i)
	     if (temp[i])
	     	++result;

	 delete[] temp;
	 return result;
    }
};
