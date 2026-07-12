func generate(numRows int) [][]int {
    result := [][]int{}

    for numEle := range numRows {
        curRow := make([]int,numEle+1)
        curRow[0] = 1
        curRow[numEle] = 1

        for i := 1 ; i < numEle ; i++ {
            curRow[i] = result[numEle-1][i] + result[numEle-1][i-1]
        }
        result = append(result,curRow)
    }
    return result
}