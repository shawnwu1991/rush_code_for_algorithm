#include <iostream>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
    	string result = itoa(n);
    	for (size_t i = 0; i < n; ++i) 
	    result = countDealing(result);
	return result;
    }

    string countDealing(string result) {
    	
	return ;
    }
};
