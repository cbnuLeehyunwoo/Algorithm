class Solution {
    fun solution(a: Int, b: Int): Int {
        var ab = (a.toString() + b.toString()).toInt()
        var eab = 2*a*b
        if(ab >= eab) return ab
        else return eab
    }
}