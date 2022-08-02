func hammingWeight(num uint32) int {
    count := 0
    for bitPosition := 0; bitPosition < 32; bitPosition++ {
        if (1 << bitPosition) & num != 0 {
            count++;
        }
    }
    return count
}
