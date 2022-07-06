class Solution {
public:
    int fib(int n) {
        if (n<=1) return n;
        long long arrayNumbers[n+1];
        arrayNumbers[0] = 0;
        arrayNumbers[1] = 1;
        for(int i = 2; i <= n; i++){
            arrayNumbers[i] = arrayNumbers[i - 1] + arrayNumbers[i - 2];
        }
        return arrayNumbers[n];
    }
};
