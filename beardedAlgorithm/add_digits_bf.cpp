class Solution {
public:
    int addDigits(int num) {
        while (true) {
            int res = 0;
            while (num > 0) {
                int temp = num % 10;
                num /= 10;
                res += temp; 
            }
            num = res;
            if (num < 10) {
                break;
            }
        }
        return num;
    }
};
