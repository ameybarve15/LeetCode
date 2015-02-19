/*Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

For example,
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.

Note:
Have you consider that the string might be empty? This is a good question to ask during an interview.

For the purpose of this problem, we define empty string as valid palindrome.
*/

#include <string>
using namespace std;

bool is_Not_AlphaNum(char c)
{
	return !(isalpha(c) || isdigit(c));
}

bool isPalindrome(string s) {
	int size = s.size();
	if (size == 0) return true;
	int i = 0;
	int j = size - 1;
	while (j > i)
	{    		
		while (is_Not_AlphaNum(s.at(i)) && (j > i))
			i++;
		while (is_Not_AlphaNum(s.at(j)) && (j > i))
			j--;

		if (toupper(s.at(i)) != toupper(s.at(j)))
			return false;

		i++;
		j--;
	} 
	return true;
}
