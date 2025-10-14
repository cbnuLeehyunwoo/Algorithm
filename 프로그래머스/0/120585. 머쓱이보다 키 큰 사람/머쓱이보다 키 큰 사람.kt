class Solution {
    fun solution(array: IntArray, height: Int) = array.filter { it > height }.size
}