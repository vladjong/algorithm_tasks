class Solution {
public:
    string reverseOnlyLetters(string s) {
        string resultStr(s);
        for (int i = 0, j = s.size() - 1; i < s.size(); i++) {
            if (isLetter(s[i])) {
                while (!isalpha(s[j])) {
                    j--;
                }
                resultStr[j] = s[i];
                j--;
            }
        }
        return resultStr;
    }
};
