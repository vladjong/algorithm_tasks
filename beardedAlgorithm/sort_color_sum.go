func sortColors(nums []int)  {
    zero, one, two := 0, 0, 0
    for _, val := range nums {
        switch val {
          case 0:
            zero += 1
          case 1:
            one += 1
          case 2:
            two += 1
        }
    }
    for i := 0; i < zero; i++ {
        nums[i] = 0
    }
    for i := zero; i < zero + one; i++ {
        nums[i] = 1
    }
    for i := zero + one; i < zero + one + two; i++ {
        nums[i] = 2
    }
}
