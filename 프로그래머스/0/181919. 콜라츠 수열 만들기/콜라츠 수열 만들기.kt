class Solution {
    fun solution(n: Int): IntArray {
        var answer: IntArray = intArrayOf()
        var n = n
        answer += n
        while(n != 1) {
            if(n % 2 == 0) {
                n /= 2
                answer += n
            }
            else {
                n = 3 * n + 1
                answer += n
            }
        }
        return answer
    }
}