/*Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), 
design an algorithm to find the maximum profit.
*/

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	int maxProfit(vector<int> &prices) {
		if(prices.size() == 0) return 0;
		if(prices.size() < 2) return 0;
		int low = prices[0];
		int max_difference = 0;
		for(int i=1; i<prices.size(); i++)
		{
			if(prices[i] < low)
				low = prices[i];
			else if(prices[i] - low > max_difference)
				max_difference = prices[i] - low;
		}
		return max_difference;   
	}
};