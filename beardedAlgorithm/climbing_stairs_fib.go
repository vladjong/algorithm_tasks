func climbStairs(n int) int {
    var fib [46]int
    fib[0] = 1
    fib[1] = 1
    for i:= 2; i <= n; i++ {
        fib[i] = fib[i-1] + fib[i-2]
    }
    return fib[n]
}
