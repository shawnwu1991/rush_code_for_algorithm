#include <iostream>

using namespace std;

class Solution {
    public:
    bool isHappy(int n)
    {
    	if (1 == n)
	    return true;
	else if (4 == n ||  16 == n || 37 == n || 58 == n || 
	        89 == n || 145 == n || 42 == n || 20 == n)
	    return false;
	else {
    	    int t = 0, num = 0;
	    while (n != 0) {
	    	t = n % 10;
		n = n / 10;
		num += pow(t, 2);
	    }
	    return isHappy(num);
	}
    }
}
