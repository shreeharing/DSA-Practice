func spiralOrder(matrix [][]int) []int {
    top := 0
    left := 0
    n := len(matrix[0])
    m := len(matrix)
    right := n - 1
    bottom := m - 1     
    result := make([]int,0)


    for left <= right && top <= bottom{
        for i := left ; i <= right ; i++ {
            result = append(result,matrix[top][i])
        }
        top ++

        for i := top ; i <= bottom ; i++ {
            result = append(result,matrix[i][right])
        }
        right--
        if(top <= bottom){
            for i := right ; i >= left ;i-- {
                result = append(result,matrix[bottom][i])
            }
            bottom--
        }
        if(left <= right){
            for i := bottom ; i >= top ; i-- {
                result = append(result,matrix[i][left])
            }
            left++
        }
    }
    return result
}