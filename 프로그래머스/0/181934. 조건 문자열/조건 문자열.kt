class Solution {
    fun solution(ineq: String, eq: String, n: Int, m: Int): Int {
        var answer: Int = 0
        if(ineq == "<" && eq == "=") {
            if(n <= m) answer = 1
            else answer = 0
        }
        else if(ineq == "<" && eq == "!") {
            if(n < m) answer = 1
            else answer = 0
        }
        else if(ineq == ">" && eq == "=") {
            if(n >= m) answer = 1
            else answer = 0
        }
        else if(ineq == ">" && eq == "!") {
            if(n > m) answer = 1
            else answer = 0
        }
        return answer
    }
}