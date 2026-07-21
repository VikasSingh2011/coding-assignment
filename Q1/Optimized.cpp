#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:

    int longestValidParentheses(string s) {

        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {

            int open = 0;
            int close = 0;

            for (int j = i; j < n; j++) {

                if (s[j] == '(') {
                    open++;
                }
                else {
                    close++;
                }

                if (open == close) {
                    ans = max(ans, open + close);
                }

                if (close > open) {
                    break;
                }
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    string s;
    cin >> s;

    cout << obj.longestValidParentheses(s);

    return 0;
}