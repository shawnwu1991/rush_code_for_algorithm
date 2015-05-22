#include <iostream>

using namespace std;

class Solution
{
	public:
	int removeDuplicates(int Arr[], int n)
	{
		int index = 0;
		
		for (int i = 1; i < n; ++i)
		{
			if (Arr[index] != Arr[i])
			{
				++index;
				Arr[index] = Arr[i];
			}
		}
		
		return index + 1;
	}
}