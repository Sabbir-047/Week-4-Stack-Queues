/*
Problem link -> https://leetcode.com/problems/backspace-string-compare/description/
*/

// -------
// code
// -------


/*


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // for stack s
        stack<char> st1;
        for(char c : s){
            if(c == '#'){
                if(!st1.empty())
                    st1.pop();
            }
            else
                st1.push(c);
        }

        // for stack t
        stack<char> st2;
        for(char c : t){
            if(c == '#'){
                if(!st2.empty())
                    st2.pop();
            }
            else
                st2.push(c);
        }
        
        // checking condition
        // if(st1 == st2)
        //     return true;
        // else
        //     return false;
        //shortcut version of this
        return (st1 == st2);
    }
};

*/