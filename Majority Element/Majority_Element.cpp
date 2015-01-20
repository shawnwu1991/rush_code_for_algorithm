#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int majorityElement(vector<int> &num){
		int counter = 0, major;

		for (size_t i = 0; i < num.size(); i++)
		{
			if (counter == 0)
			{
				major = num.at(i);
			}

			if (major == num.at(i))
			{
				counter++;
			}
			else
			{
				counter--;
			}
		}

		counter = 0;

		for (size_t i = 0; i < num.size(); i++)
		{
			if (major == num.at(i))
			{
				counter++;
			}
		}

		if (counter > num.size() / 2)
		{
			return major;
		}

		return -1;
	}
};