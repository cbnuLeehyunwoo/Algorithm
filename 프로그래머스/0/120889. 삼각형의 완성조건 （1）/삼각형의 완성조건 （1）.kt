class Solution {
    fun solution(sides: IntArray): Int {
        val max: Int = sides.maxOrNull()!!
        val others: Int = sides.sum() - max
        if(max < others) return 1
        else return 2
    }
}