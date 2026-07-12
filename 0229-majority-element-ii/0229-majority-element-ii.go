func majorityElement(nums []int) []int {
    hashMap := make(map[int]int)
    result := []int{}
    k := len(nums)/3

    for _,val := range nums {
        hashMap[val]++
    }

    for key,val := range hashMap{
        if val > k{
            result = append(result,key)
        }
    }
    return result
}