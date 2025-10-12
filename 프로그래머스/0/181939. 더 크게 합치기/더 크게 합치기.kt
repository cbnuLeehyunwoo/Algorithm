class Solution {
    fun solution(a: Int, b: Int): Int {
        var answer: Int = 0
        var ab = (a.toString() + b.toString()).toInt()
        var ba = (b.toString() + a.toString()).toInt()
        if(ab >= ba) answer = ab
        else answer = ba 
        return answer
    }
}