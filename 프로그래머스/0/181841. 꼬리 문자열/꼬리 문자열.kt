class Solution {
    fun solution(str_list: Array<String>, ex: String): String {
        var answer: String = ""
        str_list.filterNot {
            it.contains(ex)
        }.forEach {
            answer += it
        }
        return answer
    }
}