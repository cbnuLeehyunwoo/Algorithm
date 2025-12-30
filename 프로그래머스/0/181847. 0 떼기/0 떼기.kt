class Solution {
    fun solution(n_str: String): String {
        var answer: String = n_str
        while(answer.startsWith("0")) {
            answer = answer.substring(1)
        }
        return answer
    }
}