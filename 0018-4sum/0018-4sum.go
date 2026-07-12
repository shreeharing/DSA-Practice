func fourSum(nums []int, target int) [][]int {
    n := len(nums)
    sort.Ints(nums)
    result := [][]int{}
    for i := 0 ; i < n-3; i++ {
        if (i > 0 && nums[i] == nums[i-1]){
            continue
        }
        for j := i+1 ; j < n-2 ; j++ {
            if (j != i+1 && nums[j] == nums[j-1]) {
                continue
            }
            k := j + 1
            l := n-1
            for k < l{
                sum := nums[i] + nums[j] + nums[k] + nums[l]

                if sum == target {
                    result = append(result,[]int{nums[i],nums[j],nums[k],nums[l]})
                    k++
                    l--
                }else if sum > target {
                    l--
                }else {
                    k++
                }
                for ( k != (j+1) && nums[k] == nums[k-1] && k<l){
                    k++
                }
                for ( l != n-1 && nums[l] == nums[l+1] && k<l){
                    l--
                }
            }
        }
    }
    return result
}