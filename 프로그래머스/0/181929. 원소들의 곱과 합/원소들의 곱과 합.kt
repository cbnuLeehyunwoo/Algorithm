class Solution {
    fun solution(num_list: IntArray): Int {
        val sumOfAll = num_list.sum()
        var multipleOfAll = 1
        for(i in num_list.indices) {
            multipleOfAll *= num_list[i]
        }
        if(multipleOfAll < sumOfAll * sumOfAll) return 1
        else return 0
    }
}