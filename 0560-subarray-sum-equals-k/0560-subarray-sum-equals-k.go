func subarraySum(nums []int, k int) int {
    result := 0
    hashMap := make(map[int]int)
    hashMap[0] = 1
    sum := 0

    for _,val := range nums{
        sum += val

        freq, ok := hashMap[sum-k]

        if ok{
            result += freq
        }
        hashMap[sum]++
    }   
    return result
}