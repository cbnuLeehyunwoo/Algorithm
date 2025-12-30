class Solution {
    fun solution(citations: IntArray): Int {
        var maxCit = citations.maxOf { it }
        for(i in 0..citations.maxOf { it }) {
            var citCnt = 0
            citations.forEach {
                if(it >= i) citCnt++
            }
            if(citCnt >= i) maxCit = i
        }
        return maxCit
    }
}