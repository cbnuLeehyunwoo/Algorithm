class Solution {
    fun solution(numLog: IntArray): String {
        var answer: String = ""
        var previousLog = numLog[0]
        var currentLog = 0
        for(i in 1 until numLog.size) {
            currentLog = numLog[i]
            val char = when (currentLog) {
                previousLog + 1 -> "w"
                previousLog - 1 -> "s"
                previousLog + 10 -> "d"
                previousLog - 10 -> "a"
                else -> ""
            }
            answer += char
            previousLog = currentLog
        }
        return answer
    }
}