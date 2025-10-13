class Solution {
    fun solution(num_list: IntArray): Int {
        var streven: String = ""
        var strodd: String = ""
        
        for(i in num_list.indices) {
            if(num_list[i] % 2 == 0) streven += num_list[i].toString()
            else strodd += num_list[i].toString()
        }
        
        var answer: Int = 0
        answer = streven.toInt() + strodd.toInt() 
        return answer
    }
}