class Solution {
    fun solution(arr: IntArray, k: Int): IntArray {
        return arr.map { num -> 
            if (k % 2 == 0) {
                num + k
            }else {
                num * k
            }
        }.toIntArray()
    }
}