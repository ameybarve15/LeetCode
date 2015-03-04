#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int> &numbers, int target) 
	{
		vector<int> result;
		unordered_map<int, int> first_map;
		for(int i =0;i <numbers.size(); i++)
		{
			if( first_map.count(target-numbers[i]))
			{
				result.push_back( first_map[target-numbers[i]]+1);
				result.push_back(i+1);
			}

			first_map[numbers[i]] = i;
		}
		return result;
	}
};
