/*Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
*/
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.size() %2 != 0) return false; //early elimination

		stack<char> st;
        for(int i=0; i<s.size(); ++i)
		{  
			char c = s.at(i);
			if (c == '(' || c == '{' || c == '[') {
			  st.push(c);
			}
			else {
			    if (st.empty()) return false;
				if (c == ')' && st.top() != '(' ) return false; 
				if (c == '}' && st.top() != '{' ) return false;
				if (c == '[' && st.top() != ']' ) return false;
				st.pop();
			}
        }

		return st.empty();
    }
};