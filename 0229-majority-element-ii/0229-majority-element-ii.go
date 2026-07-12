func majorityElement(nums []int) []int {
    count1 := 0
    count2 := 0
    ele1 := math.MinInt
    ele2 := math.MinInt
    result := []int{}
    for _,val := range nums {
        if count1 == 0 && ele2 != val {
            count1 = 1
            ele1 = val
        }else if count2 == 0 && ele1 != val {
            count2 = 1
            ele2 = val
        }else if val == ele1 {
            count1++
        }else if val == ele2 {
            count2++
        }else{
            count1--;
            count2--
        }
    }

    count1 = 0
    count2 = 0;

    for _,val := range nums {
        if val == ele1 {
            count1++
        }else if val == ele2 {
            count2++
        }
    }
    var k int
    k = len(nums)/3
    if count1 > k {
        result = append(result,ele1)
    }
    if count2 > k{
        result = append(result,ele2)
    }
    return result
}