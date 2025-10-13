class Solution {
    fun solution(arr: IntArray): IntArray {
        var answer: IntArray = intArrayOf()
        arr.map { num ->
            repeat(num) {
                answer += num
            }            
        }
        return answer
    }
}