class Solution {
    fun solution(my_string: String, queries: Array<IntArray>): String {
        var answer = my_string

        queries.forEach {
            val s = it.first()
            val e = it.last()
            val first = answer.substring(0 until s)
            val reversedPart = answer.substring(s..e).reversed()
            val last = answer.substring(e + 1 until answer.length)

           answer = first + reversedPart + last
        }
        return answer
    }
}