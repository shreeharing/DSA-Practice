func threeSum(nums []int) [][]int {
    n := len(nums)
    result := [][]int{}
    sort.Ints(nums)
    for i := range n {
        if i>0 && nums[i] == nums[i-1]{
            continue
        }
        j := i+1
        k := n-1
        for j < k{
            sum := nums[i] + nums[j] + nums[k]
            if sum == 0 {
                result = append(result,[]int{nums[i],nums[j],nums[k]})       
                j++
                k--
            }else if sum > 0 {
                k--
            } else {
                j++
            }
            for (j != (i+1) && nums[j] == nums[j-1] && j<k){
                j++
            }
            for (j<k && k != n-1 && nums[k] == nums[k+1]){
                k--
            }
        }
    }
    return result
}