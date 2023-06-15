func removeDuplicates(nums []int) int {
  if len(nums) == 0 {
    return 0
  }
  l := 0
  r := 1
  k := 1
  for r < len(nums) {
    if nums[l] == nums[r] {
      r++
      continue
    }
    nums[k] = nums[r]
    k++
    l = r
    r++
  }
  return k
}
