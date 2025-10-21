class Solution {
    fun solution(code: String): String {
        var answer: String? = ""
        var mode = 0
        for(i in code.indices) {
            if(mode == 1) {
                if(code[i] == '1')  {
                    mode = 0
                    continue
                }
                else if(i % 2 == 1) {
                    answer += code[i]
                }
            } 
            else if(mode == 0) {
                 if(code[i] == '1') {
                     mode = 1
                     continue
            }
                 else if(i % 2 == 0) answer += code[i]
        }
    }
    return if(answer == "") "EMPTY" else answer!!
    }   
}