#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:

    bool isValid(string str) {

        int count = 0;

        for (int i = 0; i < str.size(); i++) {

            if (str[i] == '(') {
                count++;
            }
            else {
                count--;
            }

            if (count < 0) {
                return false;
            }
        }

        if (count == 0) {
            return true;
        }

        return false;
    }

    int longestValidParentheses(string s) {

        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {

            for (int j = i; j < n; j++) {

                string temp = s.substr(i, j - i + 1);

                if (isValid(temp)) {
                    ans = max(ans, j - i + 1);
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