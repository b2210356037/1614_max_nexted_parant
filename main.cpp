#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int res = 0;
        int temp = 0;
        for(auto& c : s){
            if(c == '('){
                st.push(c);
                temp++;
            } else if(c == ')'){
                st.pop();
                if(res < temp) res = temp;
                temp = 0;
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    string s1 = "(1+(2*3)+((8)/4))+1";
    cout << s.maxDepth(s1);
    return 0;
}
