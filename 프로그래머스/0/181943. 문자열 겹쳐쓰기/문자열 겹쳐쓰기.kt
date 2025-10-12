class Solution {
    fun solution(my_string: String, overwrite_string: String, s: Int): String {
        var answer: String = ""
        for(i in 0 until s) {
            answer += my_string[i]
        }
        for(i in 0 until overwrite_string.length) {
            answer += overwrite_string[i]
        }
        for(i in s+overwrite_string.length until my_string.length) {
            answer += my_string[i]
        }
        return answer
    }
}