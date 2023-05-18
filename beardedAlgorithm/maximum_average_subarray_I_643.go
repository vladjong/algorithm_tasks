func findMaxAverage(nums []int, k int) float64 {
    var res int
    var sum int
    for i := 0; i < k; i++ {
        sum += float64(nums[i])
    }
    res = sum
    for i := k; i < len(nums); i++ {
        sum += float64(nums[i]) - float64(nums[i - k])
        res = math.Max(sum, res)
    }
    return res/float64(k)
}
