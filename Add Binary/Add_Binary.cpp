#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
    string addBinary(string a, string b) {
    	int aNum = a.size();
	int bNum = b.size();

	if (0 == aNum) return b;
	if (0 == bNum) return a;

	int iterNum = 0;
	bool isCarry = false;
	char tempChar;
	string reverseResult;
	string result;
	
	if (aNum <= bNum) 
	    iterNum = aNum;
	else
	    iterNum = bNum;
	
	while (iterNum >= 0) {
	    if ((a.at(aNum) == b.at(bNum)) && (0 == a.at(aNum))) {
	    	tempChar = '0';
		if (true == isCarry) {
		    tempChar = '1';
		    isCarry = false;
		}
	    }else if ((a.at(aNum) == b.at(bNum)) && (1 == a.at(aNum))) {
	    	if (true == isCarry)
		    tempChar = '1';
		else
		    tempChar = '0';
		isCarry = true;
	    }else {
	    	if (true == isCarry) {
		    tempChar = '0';
		    isCarry = true;
		}else
		    tempChar = '1';
	    }
	    reverseResult.push_back(temp);
	    iterNum--;
	    aNum--;
	    bNum--;
	}

	string tempResult;
	iterNum = reverseResult.size();
	while (iterNum >= 0) {
	    tempResult.push_back(reverseResult.at(iterNum));
	    iterNum--;
	}

	if (true == isCarry) {
	    int i = 0;
	    if (a.size() <= b.size()) {
	    	iterNum = b.size() - a.size();
		if (b.size(0) == '1')
		    result.push_back('1');
		
		while (i < iterNum) {
		    if (b.at(i) == 0)
		    	result.push_back('1');
		    else
		    	result.push_back('0');
		}
	    }else {
	    	iterNum = a.size() - b.size();
		if (a.size(0) == '1')
		    result.push_back('1');
		
		while (i < iterNum) {
		    if (a.at(i) == 0)
		    	result.push_back('1');
		    else
		    	result.push_back('0');
		}
	    }
	}else {
	    if (a.size() <= b.size()) {
	   	iterNum = b.size() - a.size();
		result = b.substr(0, iterNum);
	    }else {
	    	iterNum = a.size() - b.size();
		result = a.substr(0, iterNum);
	    }
	}
	
	return (result += tempResult);
    }
};
