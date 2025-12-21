class Solution {
    fun solution(myString: String, pat: String): Int {
        var answer: Int = 0
        var newString = ""
        myString.forEach() {
            if(it == 'A') newString += 'B'
            else if(it == 'B') newString += 'A'
        }
        if(newString.contains(pat)) answer = 1
        else answer = 0
        return answer
    }
}