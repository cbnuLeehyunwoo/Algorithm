class Solution {
    fun solution(arr: IntArray, delete_list: IntArray): IntArray {
        return arr.filter { !delete_list.contains(it) }.toIntArray()
    }
}