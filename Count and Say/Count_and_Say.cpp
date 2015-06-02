#include <iostream>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
    	string result = to_string(n);
    	for (size_t i = 0; i < n; ++i) 
	    result = countDealing(result);
	return result;
    }

    string countDealing(string result) {
    	string tempResult;
	int counter = 1;
    	for (size_t i = result.size() - 1; i >= 0; --i) {
	    if (counter > 1) {
	    	if (i >)
	    }
	    tempResult.insert(0, result[i]);
	    tempResult.insert(0, to_string(counter));
	}
	return tempResult;
    }
};
