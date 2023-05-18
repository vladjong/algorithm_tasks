func containsNearbyDuplicate(nums []int, k int) bool {
    unique := make(map[int]int)
    for i, val := range nums {
        if p, ok := unique[val]; ok {
            if k >= int(math.Abs(float64(p - i))) {
                return true
            }
            unique[val] = i
            continue
        }
        unique[val] = i
    }
    return false
}
