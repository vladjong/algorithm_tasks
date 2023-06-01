func countGoodSubstrings(s string) int {
    res := 0
    for i := 0; i < len(s) - 2; i++ {
        check := make(map[byte]struct{})
        for j := i; j < i + 3; j++ {
            check[s[j]] = struct{}{}
        }
        if len(check) == 3 {
            res++
        }
    }
    return res
}
