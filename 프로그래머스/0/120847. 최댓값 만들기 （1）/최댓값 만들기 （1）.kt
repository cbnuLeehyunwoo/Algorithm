class Solution {
    fun solution(numbers: IntArray): Int {
        var max: Int = -1;
        var second_max: Int = -1;
        for(n in numbers) {
            if(n > max) {
                second_max = max
                max = n
            }
            else if(n > second_max) second_max = n
        }
        return max * second_max
    }
}