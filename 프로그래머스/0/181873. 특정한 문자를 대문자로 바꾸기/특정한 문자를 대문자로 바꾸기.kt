class Solution {
    fun solution(my_string: String, alp: String): String {
        var answer: String = ""
        for(c in my_string) {
            if(c.toString() == alp) answer += c.toUpperCase()
            else answer += c
        }
        
        return answer
    }
}