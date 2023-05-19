func containsNearbyDuplicate(nums []int, k int) bool {
    unique := make(map[int]struct{})
    for i, val := range nums {
        if _, ok := unique[val]; ok {
            return true
        }
        unique[val] = struct{}{}
        if len(unique) > k {
            delete(unique, nums[i-k])
        }
    }
    return false
}
