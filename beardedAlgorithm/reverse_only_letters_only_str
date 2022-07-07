class Solution {
public:    
    string reverseOnlyLetters(string s) {
        int left = 0, right = s.size() - 1;
        while (true) {
            while (left < right && !isalpha(s[left])) {
                left++;
            }
            while (left < right && !isalpha(s[right])) {
                right--;
            }
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            } else {
                break;
            }
        }
        return move(s);
    }
};
